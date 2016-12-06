#include "Assessment.h"

#include <iostream>	//remove later
#include <sstream>	//remove later

Assessment::Assessment() : AbstractAssessment()
{
	
}

Assessment::Assessment(string name) : AbstractAssessment(name)
{
	
}

Assessment::Assessment(int numOfSubs, float groupWeight) : AbstractAssessment()
{
	string temp = "subAssessment";
	for (int i = 1; i <= numOfSubs; i++)
	{
		addOpportunity(temp, 0, groupWeight/numOfSubs);
	}
}

Assessment::Assessment(string name, int numOfSubs, float groupWeight) : AbstractAssessment(name)
{
	name = "sub" + name;
	setWeight(groupWeight);
	for (int i = 1; i <= numOfSubs; i++)
	{
		addOpportunity(name, 0, groupWeight/numOfSubs);
	}	
}

Assessment::Assessment(string name, float groupWeight) : AbstractAssessment(name)
{
	setWeight(groupWeight);
}

Assessment::~Assessment()
{
	if (!opps.empty())
	{
		for (iter = opps.begin(); iter != opps.end(); iter++)
		{
			delete *iter;
		}
	}
}

//modifying opportunities
bool Assessment::addOpportunity(string name, float total, float weight)
{
	AbstractAssessment* newItem = new Opportunity(name, total, weight);
	
	iter = opps.begin();	
	//if list isempty
	if (opps.empty())
	{	
		opps.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != opps.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == opps.end())
		{
			opps.push_back(newItem);
		}
		else
		{
			opps.insert(iter, newItem);			
		}
	}	
	return true;
}

bool Assessment::addOpportunity(string name, float weight)
{
	AbstractAssessment* newItem = new Opportunity(name, 100, weight);
	
	iter = opps.begin();	
	//if list isempty
	if (opps.empty())
	{	
		opps.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != opps.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == opps.end())
		{
			opps.push_back(newItem);
		}
		else
		{
			opps.insert(iter, newItem);			
		}
	}	
	return true;
}

bool Assessment::addAssessment(string name, int numOfSubs, float groupWeight)
{
	AbstractAssessment* newItem = new Assessment(name, numOfSubs, groupWeight);
	
	iter = opps.begin();	
	//if list isempty
	if (opps.empty())
	{	
		opps.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != opps.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == opps.end())
		{
			opps.push_back(newItem);
		}
		else
		{
			opps.insert(iter, newItem);			
		}
	}	
	return true;	
}

bool Assessment::addAssessment(string name, float groupWeight)
{
	AbstractAssessment* newItem = new Assessment(name, 0, groupWeight);
	
	iter = opps.begin();	
	//if list isempty
	if (opps.empty())
	{	
		opps.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != opps.end() && (*iter)->getAssessName() < name)
		{		
			if ((*iter)->getAssessName() == name)
			{
				delete newItem;
				return false;
			}
			iter++;
		}
		if (iter == opps.end())
		{
			opps.push_back(newItem);
		}
		else
		{
			opps.insert(iter, newItem);			
		}
	}	
	return true;	
}

bool Assessment::removeOpportunity(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{		
			delete *iter;
			opps.erase(iter);
			return true;
		}
	}	
	return false;
}

//getters and setters
///@todo sort the list after you have given a new name
bool Assessment::setOpName(string name, string newName)
{	
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			(*iter)->setAssessName(newName);
			return true;
		}
	}
	return false;
}

bool Assessment::setOpMark(string name, float mark)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			return (*iter)->setMark(mark);
		}
	}
	return false;
}

bool Assessment::setOpTotal(string name, float total)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			return(*iter)->setTotal(total);
		}
	}
	return false;
}

bool Assessment::setOpWeight(string name, float weight)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			return (*iter)->setWeight(weight);
		}
	}
	return false;
}

float Assessment::getOpMark(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			return (*iter)->getMark();
		}
	}
	return -1;
}

float Assessment::getOpWeight(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{
			return (*iter)->getWeight();
		}
	}
	return -1;
}

float Assessment::getMark()	//will be the weighted marks
{
	return calculateSubWeightedMarks();
}

float Assessment::getTotal()	//The total of all the marks will be the subweights
{
	return calculateSubWeights();
}

int Assessment::getSize()
{
	return opps.size();
}

AbstractAssessment * Assessment::getAssessment(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->getAssessName() == name)
		{		
			return *iter;
		}
	}	
	return 0;		
}

//Calculations

float Assessment::calculateTotalMark()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->getMark();
	}
	return count;	
}

float Assessment::calculateTotalTotal()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->getTotal();
	}
	return count;	
}

float Assessment::calculateSubWeights()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->getWeight();
	}
	return count;	
}

float Assessment::calculateSubWeightedMarks()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->getWeightedMark();
	}
	return count;		
}

//
void Assessment::print()
{
	cout << toString(0);
}

void Assessment::listAssessments()
{
	cout << "__________" << name << "___________" << endl;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		cout << "\t" << (*iter)->getAssessName() << endl;
	}		
}

string Assessment::toString(int n)
{
	stringstream outString;
	for (int i = 0; i < n; i++)
	{
		outString << "---";
	}
	outString << name << " : " << getPercentage() << "% : " << getMark()
		<< "/" << getTotal() << " : " << getWeightedMark() << "/" << getWeight()
		<< endl;

	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		outString << (*iter)->toString(n + 1);
	}
	//for (int i = 0; i < n; i++)
	//{
	//	outString << "---";
	//}	
	//outString << "_______________________________\n";
	return outString.str();	
}

void Assessment::writeToFile(fstream &file)
{
	file << "N" << endl;
	file << name << "#" << endl;
	file << weight << endl;
	
	int numOfItems = opps.size();
	file << numOfItems << endl;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		(*iter)->writeToFile(file);
	}	
}

//void alphabetize()
//int operator[](int index);
//Assessment& clone()

bool Assessment::isLeaf()
{
	return false;
}

void Assessment::displayList(QListWidget* listWidget)
{
    listWidget->clear();
    listWidget->addItem(QString::fromStdString(name));
    for (iter = opps.begin(); iter != opps.end(); iter++)
    {
        listWidget->addItem(QString::fromStdString((*iter)->getAssessName()));
    }
}

///@todo complete this!
void Assessment::listDetail(QListWidget* listWidget)
{

}
