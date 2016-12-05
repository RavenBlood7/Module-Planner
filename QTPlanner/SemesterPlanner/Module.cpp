#include "Module.h"

#include <iostream>

Module::Module()
{
	name = "DEF 111";
	this->examEntranceMark = 40;
	this->passMark = 50;
	this->timePeriod = "S1";
	//perhaps make default assessments: Exam/Semester
	//And in semester have two semeseter tests
}

Module::Module(string name)
{
	this->name = name;
	this->examEntranceMark = 40;
	this->passMark = 50;
	this->timePeriod = "S1";
}

Module::~Module()
{
	if (!assess.empty())
	{
		for (iter = assess.begin(); iter != assess.end(); iter++)
		{
			delete *iter;
		}
	}	
}

//add/remove assessments
bool Module::addAssessment(string name, float weight, int numOfSubs)
{
	AbstractAssessment* newItem = new Assessment(name, numOfSubs, weight);
	
	iter = assess.begin();	
	//if list isempty
	if (assess.empty())
	{	
		assess.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != assess.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == assess.end())
		{
			assess.push_back(newItem);
		}
		else
		{
			assess.insert(iter, newItem);			
		}
	}	
	return true;		
}

//note:just use top one//aslo in assessment's addAssessment
bool Module::addAssessment(string name, float weight)
{
	AbstractAssessment* newItem = new Assessment(name, 0, weight);
	
	iter = assess.begin();	
	//if list isempty
	if (assess.empty())
	{	
		assess.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != assess.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == assess.end())
		{
			assess.push_back(newItem);
		}
		else
		{
			assess.insert(iter, newItem);			
		}
	}	
	return true;		
}

bool Module::addOpportunity(string name, float weight)
{
	AbstractAssessment* newItem = new Opportunity(name, 0, weight);
	
	iter = assess.begin();	
	//if list isempty
	if (assess.empty())
	{	
		assess.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != assess.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == assess.end())
		{
			assess.push_back(newItem);
		}
		else
		{
			assess.insert(iter, newItem);			
		}
	}	
	return true;	
}

bool Module::removeAssessment(string name)
{
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{		
			delete *iter;
			assess.erase(iter);
			return true;
		}
	}	
	return false;	
}

//calculations
bool Module::calcPassFail()
{
    return calcPercentage() >= passMark;
}

float Module::calcNeedToPass()
{
	return 0;
}

float Module::calcNeedToDistinct()
{
	return 0;
}

float Module::calcNeedToSup()
{
	return 0;
}

float Module::calcTotalMark()
{
	float count = 0;
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		count += (*iter)->getWeightedMark();
	}
	return count;	
}

float Module::calcPercentage()
{
	float temp = getTotalWeight();
	if (temp > 0)
	return (getWeightedMark() / temp) * 100;		//perhaps round it?			
	return 0;	
}

//getters and setters
void Module::setName(string name)
{
	this->name = name;
}

void Module::setTimePeriod(string period)
{
	this->timePeriod = period;
}

void Module::setExamEntranceMark(float EEM)
{
    if (EEM >= 0)
	{
		this->examEntranceMark = EEM;

    }
}

void Module::setPassMark(float pass)
{
    if (pass >= 0)
	{
        this->passMark = pass;
	}
	else 
	{
        passMark = 50;
	}
}

string Module::getName()
{
	return name;
}

float Module::getWeightedMark()
{
	float count = 0;
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		count += (*iter)->getWeightedMark();
	}
	return count;		
}

float Module::getTotalWeight()
{	
	float count = 0;
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		count += (*iter)->getWeight();
	}
	return count;	
}

string Module::getTimePeriod()
{
	return timePeriod;
}

float Module::getExamEntranceMark()
{
	return examEntranceMark;
}

float Module::getPassMark()
{
	return passMark;
}

//note be careful when calling this function. it may return null
AbstractAssessment * Module::getAssessment(string name)
{
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{		
			return *iter;
		}
	}	
	return 0;		
}

//
void Module::print()
{
	cout << "_____________" + name + "_____________\n";
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		(*iter)->print();
	}	
	cout << "Total Mark : " << calcPercentage() << "%\n_________________________________\n";	
}

string Module::listAssessments()
{
	string outString = "";
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		outString += (*iter)->getAssessName() + "\n";
	}	
	return outString;
}

string Module::toString()
{
	string outString = "_______" + name + "_______\n";
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		outString += (*iter)->toString(0) + "\n";
	}	
	return outString;	
}
//other
//Module Module::clone()
//{
//	
//}
