#ifndef MODULE_H
#define MODULE_H

#include "Assessment.h"
#include <string>

using namespace std;

class Module
{
	private:
		list<Assessment*> assess;
		list<Assessment*>::iterator iter;
		string name;
		float semesterMarkWeight;
		float timePeriod;	//S1/year/quarter
		float examEntranceMark;	
		
	public:
		Module();
		~Module();
	
		bool addAssessment(string name);
		bool removeAssessment(string name);
	
		bool calcPassFail();
		float calcNeedToPass();
		float calcNeedToDistinct();
		float calcNeedToSup();	
		bool  DoesWeightWork();
	
		void setName(string);
		void setSMWeight(float weight);
		void setTimePeriod(float period);			//use an enumerator?
		void setExamEntranceMark(float);
		string getName();
		float getSMWeight();
		float getTimePeriod();
		float getExamEntranceMark();
	
		//Module clone();
		//
}


#endif