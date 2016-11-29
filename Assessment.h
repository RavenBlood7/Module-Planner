#ifndef ASSESSMENT_H
#define ASSESSMENT_H

#include <string>
#include <list>

using namespace std;

struct Opportunity
{
	string name;
	float mark;
	float weight;
};

class Assessment
{
	private:
		string name;
		
		list<Opportunity *> opps;
		list<Opportunity *>::iterator iter;

	public:
		Assessment();
		Assessment(string name);
		~Assessment();
	
		bool addNewOpportunity(string name, float mark, float weight);
		bool removeOpportunity(string name);
		
		void setName(string name);
		bool setOpName(string name, string newName);
		bool setMark(string name, float mark);
		bool setWeight(string name, float weight);		
		string getName();
		float getMark(string name);
		float getWeight(string name);
	
		float calculateTotalWeight();
		float calculateTotalMark();
	
		//
		void print();
		//a function to check if values are within range 0-100 percentage
		//void alphabetize();
		//int operator[](int index);
		//Assessment& clone()
};


#endif