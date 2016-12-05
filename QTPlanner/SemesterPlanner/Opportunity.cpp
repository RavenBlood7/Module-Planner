#include "Opportunity.h"

#include <iostream>
#include <sstream>

Opportunity::Opportunity() : AbstractAssessment()
{
	mark = 0;
	total = 100;
	weight = 0;
}

Opportunity::Opportunity(string name) : AbstractAssessment(name)
{
	mark = 0;
	total = 100;
	weight = 0;
}

Opportunity::Opportunity(string name, float total, float weight) : AbstractAssessment(name)
{
	this->mark = 0;
	if (!setTotal(total)) this->total = 100;
	if (!setWeight(weight)) this->weight = 0;
}

Opportunity::Opportunity(string name, float weight) : AbstractAssessment(name)
{
	this->mark = 0;
	this->total = 100;
	if (!setWeight(weight)) this->weight = 0;
}

Opportunity::~Opportunity()
{
	
}

//getters and setters
bool Opportunity::setName(string name)
{
	this->name = name;
}

bool Opportunity::setMark(float mark)
{	
	if (mark >= 0)
	{
		this->mark = mark;
		return true;
	}
	else return false;
}

bool Opportunity::setTotal(float total)
{
	if (total > 0)
	{
		this->total = total;
		return true;
	}
	else return false;
}

float Opportunity::getMark()
{
	return mark;
}

float Opportunity::getTotal()
{
	return total;
}

//
void Opportunity::print()
{
	cout << toString(0);
}

string Opportunity::toString(int n)
{
	stringstream outString;
	for (int i = 0; i < n; i++)
	{
		outString << "---";
	}
	outString << name << " : " << getPercentage() << "% : " << getMark()
		<< "/" << getTotal() << " : " << getWeightedMark() << "/" << getWeight()
		<< endl;
	return outString.str();
}