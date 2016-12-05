#include "Planner.h"
#include <fstream>

////////////////////////////////remove
#include <iostream>
using namespace std;

Planner::Planner()
{
//	loadFromFile();
}

Planner::~Planner()
{
	//saveToFile();
	if (!modules.empty())
	{
		for (iter = modules.begin(); iter != modules.end(); iter++)
		{
			delete *iter;
		}
	}
}

bool Planner::addModule(string name, string timePeriod,	//defaults?
	float EEM, float passMark)
{
	Module* newItem = new Module(name);
	newItem->setTimePeriod(timePeriod);
	newItem->setExamEntranceMark(EEM);
	newItem->setPassMark(passMark);
/* use as default/beginning assessments	
	newItem->addOpportunity("Exam", 50);
	newItem->addAssessment("Semester Mark", 50);
	((Assessment*) newItem->getAssessment("Semester Mark"))->addOpportunity("ST1", 100, 50);
	((Assessment*) newItem->getAssessment("Semester Mark"))->addOpportunity("ST2", 100, 50);
*/	
	iter = modules.begin();	
	//if list isempty
	if (modules.empty())
	{	
		modules.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != modules.end() && (*iter)->getName() < name)
		{		
			if ((*iter)->getName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == modules.end())
		{
			modules.push_back(newItem);
		}
		else
		{
			modules.insert(iter, newItem);			
		}
	}	
	return true;			
}

bool Planner::removeModule(string name)
{
	for (iter = modules.begin(); iter != modules.end(); iter++)
	{
		if ((*iter)->getName() == name)
		{		
			delete *iter;
			modules.erase(iter);
			return true;
		}
	}	
	return false;		
}
	
Module* Planner::getModule(string name)
{
	for (iter = modules.begin(); iter != modules.end(); iter++)
	{
		if ((*iter)->getName() == name)
		{		
			return *iter;
		}
	}	
	return 0;		
}

//note: put in safe guards. Perhaps rather have the filename as parameter and 
//a default value. What if file does not exist? What if file does not open properly?
void Planner::loadFromFile()
{
	string modName, modPeriod, TorN;
	int numModules, numAssessments, numSubAssess;
	float modExamEnt, modPassMark;
	
	string assessName;
	float assessWeight, assessMark, assessTotal;
	
	
	file.open("plannerInfo.dat", ios::in);
	file >> numModules;	
	
	for (int i = 0; i < numModules; i++)
	{
		getline(file, modName, '#');
		modName = modName.substr(1, modName.length());
		file >> modPeriod;
		file >> modExamEnt;
		file >> modPassMark;		
		addModule(modName, modPeriod, modExamEnt, modPassMark);
		file >> numAssessments;
		for (int j = 0; j < numAssessments; j++)
		{
			file >> TorN;		
			if (TorN == "T")
			{
				getline(file, assessName, '#');
				assessName= assessName.substr(1, assessName.length());				
				file >> assessWeight;
				file >> assessMark;
				file >> assessTotal;
				getModule(modName)->addOpportunity(assessName, assessWeight);
				((Opportunity*) getModule(modName)->getAssessment(assessName))->setMark(assessMark);
				((Opportunity*) getModule(modName)->getAssessment(assessName))->setTotal(assessTotal);
			}
			else
			{
				getline(file, assessName, '#');
				assessName= assessName.substr(1, assessName.length());							
				file >> assessWeight;	
				getModule(modName)->addAssessment(assessName, assessWeight);	
				file >> numSubAssess;
				populateAssessment(((Assessment*) getModule(modName)->getAssessment(assessName)), 
					numSubAssess, file);
			}
		}
	}
	
	file.close();
}

void Planner::saveToFile()
{
	file.open("plannerInfo.dat", ios::out);
	file << modules.size() << endl;
	for (iter = modules.begin(); iter != modules.end(); iter++)
	{
		(*iter)->writeToFile(file);
	}	
	file.close();	
}

void	Planner::populateAssessment(Assessment* cur, int numSubAssess, fstream &file)
{	
	string TorN;
	int numSubSubs;
	string assessName;
	float assessWeight, assessMark, assessTotal;
	
	for (int i = 0; i < numSubAssess; i++)
	{
		file >> TorN;		
		if (TorN == "T")
		{
			getline(file, assessName, '#');
			assessName= assessName.substr(1, assessName.length());			
			file >> assessWeight;
			file >> assessMark;
			file >> assessTotal;
			cur->addOpportunity(assessName, assessWeight);
			((Opportunity*) cur->getAssessment(assessName))->setMark(assessMark);
			((Opportunity*) cur->getAssessment(assessName))->setTotal(assessTotal);
		}
		else
		{
			getline(file, assessName, '#');
			assessName= assessName.substr(1, assessName.length());
			file >> assessWeight;	
			cur->addAssessment(assessName, assessWeight);
			file >> numSubSubs;
			populateAssessment(((Assessment*) cur->getAssessment(assessName)), 
				numSubSubs, file);
		}
	}
}
