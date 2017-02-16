#include "Module.h"

#include <iostream>
#include <sstream>

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
			iter++;
		}
        if ((*iter)->getAssessName() == name)
        {
            delete newItem;
            return false;
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
            iter++;
		}
        if ((*iter)->getAssessName() == name)
        {
            delete newItem;
            return false;
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
			iter++;
		}
        if ((*iter)->getAssessName() == name)
        {
            delete newItem;
            return false;
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
//	else	??perhaps
//	{	
//	
//	}
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

int Module::getSize()
{
	return assess.size();
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

void Module::listAssessments()
{
	cout << "__________" << name << "___________" << endl;
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		cout << "\t" << (*iter)->getAssessName() << endl;
	}
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

void Module::writeToFile(fstream &file)
{
	file << getName() << "#" << endl;
	file << getTimePeriod() << endl;
	file << getExamEntranceMark() << endl;
	file << getPassMark() << endl;
	
	int numOfItems = assess.size();
	file << numOfItems << endl;
	for (iter = assess.begin(); iter != assess.end(); iter++)
	{
		(*iter)->writeToFile(file);
	}	
}

void Module::displayList(QWidget* wgtNav)
{
    stringstream outString;
    QListWidget* listWidget = wgtNav->findChild<QListWidget*>("lwgtAssess");
    QListWidget* listPercent = wgtNav->findChild<QListWidget*>("lwgtPercent");
    listWidget->clear();
    listPercent->clear();
    listWidget->addItem(QString::fromStdString(name));
    outString << fixed << setprecision(2) << calcPercentage() << "%";
    listPercent->addItem(QString::fromStdString(outString.str()));
    listWidget->addItem("------------------------");
    listPercent->addItem("---");
    for (iter = assess.begin(); iter != assess.end(); iter++)
    {
        listWidget->addItem(QString::fromStdString((*iter)->getAssessName()));
        outString.str("");
        outString << fixed << setprecision(2) << (*iter)->getPercentage() << "%";
        listPercent->addItem(QString::fromStdString(outString.str()));
    }
}

void Module::listDetail(QWidget* wgtDetail)
{
    QListWidget* listTitles = wgtDetail->findChild<QListWidget*>("lwgtTitles");
    QListWidget* listValues = wgtDetail->findChild<QListWidget*>("lwgtValues");
    wgtDetail->findChild<QLabel*>("lblName")->show();
    wgtDetail->findChild<QDoubleSpinBox*>("sedMark")->hide();
    wgtDetail->findChild<QLabel*>("lblMark")->hide();
    wgtDetail->findChild<QLabel*>("lblTotal")->hide();
    wgtDetail->findChild<QLabel*>("lblName")->setText(QString::fromStdString(getName()));
    stringstream outString;
    listTitles->clear();
    listValues->clear();

    listTitles->addItem(QString::fromStdString("Current Mark:"));
            outString << fixed << setprecision(2) << calcPercentage() << "%";
    listValues->addItem(QString::fromStdString(outString.str()));

    listTitles->addItem(QString::fromStdString("Weighted:"));
            outString.str("");
            outString << fixed << setprecision(2) << getWeightedMark() << "/" << getTotalWeight();
    listValues->addItem(QString::fromStdString(outString.str()));

    listTitles->addItem(QString::fromStdString("info:"));
    listValues->addItem(QString::fromStdString(""));

    listTitles->addItem(QString::fromStdString("   Time Period:"));
    listValues->addItem(QString::fromStdString(getTimePeriod()));

    listTitles->addItem(QString::fromStdString("   Exam Entrance:"));
            outString.str("");
            outString << fixed << setprecision(2) << getExamEntranceMark();
    listValues->addItem(QString::fromStdString(outString.str()));

    listTitles->addItem(QString::fromStdString("   PassMark:"));
            outString.str("");
            outString << fixed << setprecision(2) << getPassMark();
    listValues->addItem(QString::fromStdString(outString.str()));

    //Needed in exam to:
        //pass:
        //sup:
        //distinct

}

//other
//Module Module::clone()
//{
//	
//}
