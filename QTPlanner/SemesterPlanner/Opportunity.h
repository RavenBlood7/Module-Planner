#ifndef OPPORTUNITY_H
#define OPPORTUNITY_H

#include "AbstractAssessment.h"
#include <string>
#include <list>

using namespace std;

class Opportunity : public AbstractAssessment
{
	protected:
		float mark;
		float total;
		//float weight;	//which is the weight with regards to the parent Assessment
		
	public:
		Opportunity();
		Opportunity(string name);
		Opportunity(string name, float total, float weight);
		Opportunity(string name, float weight);
		~Opportunity();
		
		bool setName(string Name);
		bool setMark(float mark);
		bool setTotal(float total);
		//	bool setWeight(float weight);		in parent class
		string getName();
		float getMark();
		float getTotal();
		//float getWeight(); in parent class
		
		//
		void print();
		string toString(int n);
		//Assessment& clone()
};


#endif