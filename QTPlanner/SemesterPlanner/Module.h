#ifndef MODULE_H
#define MODULE_H

#include "Assessment.h"
#include "Opportunity.h"
#include <string>

using namespace std;

class Module
{
	private:
		list<AbstractAssessment*> assess;
		list<AbstractAssessment*>::iterator iter;
		string name;
		string timePeriod;	//S1/year/quarter	
		//float semesterMarkWeight;	//I don't think we need this. If it is SM and Exam are just Assessments
		float examEntranceMark;
		float passMark;
		//pass mark	
		
	public:
		Module();
		Module(string name);
		~Module();
	
		bool addAssessment(string name, float weight, int numOfSubs);
		bool addAssessment(string name, float weight);
		bool addOpportunity(string name, float weight);
		bool removeAssessment(string name);
	
		bool calcPassFail();
		float calcNeedToPass();
		float calcNeedToDistinct();
		float calcNeedToSup();	
		float calcTotalMark();
		float calcPercentage();
	
		void setName(string name);
		void setTimePeriod(string period);			//use an enumerator?
		void setExamEntranceMark(float EEM);
		void setPassMark(float pass);
		string getName();
		string getTimePeriod();
		float getWeightedMark();		
		float getTotalWeight();
		float getExamEntranceMark();
		float getPassMark();
		
		AbstractAssessment * getAssessment(string name);
	
		//
		void print();
		string listAssessments();
		string toString();
		//void cvtOppToGroup(string name);
		//Module clone();
		//
};


#endif