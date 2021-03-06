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


void Opportunity::writeToFile(fstream &file)
{
	file << "T" << endl;
	file << name << "#"<< endl;
	file << weight << endl;
	file << mark << endl;
	file << total << endl;
}

bool Opportunity::isLeaf()
{
	return true;
}

///@todo complete this!
void Opportunity::listDetail(QWidget* wgtDetail)
{
    stringstream outString;
    QListWidget* listTitles = wgtDetail->findChild<QListWidget*>("lwgtTitles");
    QListWidget* listValues = wgtDetail->findChild<QListWidget*>("lwgtValues");
    wgtDetail->findChild<QDoubleSpinBox*>("sedMark")->show();
    wgtDetail->findChild<QDoubleSpinBox*>("sedMark")->setValue(getMark());
    wgtDetail->findChild<QDoubleSpinBox*>("sedMark")->setMaximum(getTotal());
    wgtDetail->findChild<QLabel*>("lblName")->show();
    wgtDetail->findChild<QLabel*>("lblMark")->show();
    wgtDetail->findChild<QLabel*>("lblTotal")->show();
        outString << " / " << getTotal();
    wgtDetail->findChild<QLabel*>("lblTotal")->setText(QString::fromStdString(outString.str()));
    wgtDetail->findChild<QLabel*>("lblName")->setText(QString::fromStdString(getAssessName()));
    listTitles->clear();
    listValues->clear();

    listTitles->addItem(QString::fromStdString("Current Mark:"));
            outString.str("");
            outString << fixed << setprecision(2) << getPercentage() << "%";
    listValues->addItem(QString::fromStdString(outString.str()));

    listTitles->addItem(QString::fromStdString("Weighted:"));
            outString.str("");
            outString << fixed << setprecision(2) << getWeightedMark() << " / " << getWeight();
    listValues->addItem(QString::fromStdString(outString.str()));

    /*
    stringstream outString;
    listWidget->clear();
    listWidget->addItem(QString::fromStdString("Name:\t" + name));
    listWidget->addItem(QString::fromStdString("---------------"));
            outString << "Marks:\t" << getPercentage() << "%";
    listWidget->addItem(QString::fromStdString(outString.str()));
    outString.str("");
    outString << "Weighted:\t" << getWeightedMark() << "/" << getWeight();
listWidget->addItem(QString::fromStdString(outString.str()));
outString.str("");
outString << "\t" << getMark() << "/" << getTotal();
listWidget->addItem(QString::fromStdString(outString.str()));
    listWidget->addItem(QString::fromStdString("---------------"));
    */
}
