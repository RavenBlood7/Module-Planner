#include "Assessment.h"

#include <iostream>	//remove later

Assessment::Assessment()
{
	name = "AssessmentOpportunity";
}

Assessment::Assessment(string name)
{
	this->name = name;
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
bool Assessment::addNewOpportunity(string name, float mark, float weight)
{
	Opportunity* newItem = new Opportunity;
	newItem->name = name;
	newItem->mark = mark;
	newItem->weight = weight;
	
	iter = opps.begin();	
	//if list isempty
	if (opps.empty())
	{	
		opps.insert(iter, newItem);
	}
	else
	{
		//else iterate through list, find place, insert
		while (iter != opps.end() && (*iter)->name < name)
		{		
			if ((*iter)->name == name)
				return false;
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
		if ((*iter)->name == name)
		{		
			delete *iter;
			opps.erase(iter);
			return true;
		}
	}	
	return false;
}

//getters and setters
void Assessment::setName(string name)
{
	this->name = name;
}


///@todo sort the list after you have given a new name
bool Assessment::setOpName(string name, string newName)
{	
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->name == name)
		{
			(*iter)->name = newName;
			return true;
		}
	}
	return false;
}

bool Assessment::setMark(string name, float mark)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->name == name)
		{
			(*iter)->mark = mark;
			return true;
		}
	}
	return false;
}

bool Assessment::setWeight(string name, float weight)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->name == name)
		{
			(*iter)->weight = weight;
			break;
		}
	}
	return true;
}

string Assessment::getName()
{
	return name;
}

float Assessment::getMark(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->name == name)
		{
			return (*iter)->mark;
		}
	}
	return -1;
}

float Assessment::getWeight(string name)
{
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		if ((*iter)->name == name)
		{
			return (*iter)->weight;
		}
	}
	return -1;
}

//Calculations
float Assessment::calculateTotalWeight()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->weight;
	}
	return count;	
}

float Assessment::calculateTotalMark()
{
	float count = 0;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		count += (*iter)->mark;
	}
	return count;	
}

//
void Assessment::print()
{
	cout << "\n______" << name << "________" << endl;
	for (iter = opps.begin(); iter != opps.end(); iter++)
	{
		cout << (*iter)->name << " : " << (*iter)->mark << " : " << (*iter)->weight << "\n";
	}
	cout << "Total Weight : " << calculateTotalWeight() << "\n";
	cout << "Total Mark : " << calculateTotalMark() << "\n";
	cout << "______________________________________\n" << endl;	
}

//void alphabetize()
//int operator[](int index);
//Assessment& clone()