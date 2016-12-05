#ifndef ANSTRACT_ASSESSMENT_H
#define ANSTRACT_ASSESSMENT_H

#include <string>
#include <list>
#include <fstream>

using namespace std;

class AbstractAssessment
{
	protected:
		string name;
		float weight;
		
	public:
		AbstractAssessment() {name = "Assessment";};
		AbstractAssessment(string name) {this->name = name;};
		virtual ~AbstractAssessment() {};
		
		void setAssessName(string name) {this->name = name;};
		virtual bool setMark(float mark) {};
		virtual bool setTotal(float mark) {};
		bool setWeight(float weight) 
			{
				if (weight >= 0)
				{
					this->weight = weight;
					return true;
				}
				else 
				{
					this->weight = 0;		//default
					return false;				
				}
			};		
		string getAssessName() {return name;};
		virtual float getMark() = 0;
		virtual float getTotal() = 0;		
		float getWeight() {return weight;};
		
		float getWeightedMark()	///make this pure virtual
		{
			return (getMark() / getTotal()) * getWeight();		//perhaps round it?			
		}
		
		float getPercentage()
		{
			float temp = getWeight();
			if (temp > 0)
			return (getWeightedMark() / temp) * 100;		//perhaps round it?			
			return 0;
		}
		
		
		
	//	virtual bool addAssessment(string name, int numOfSubs, float groupWeight) {};
	//	virtual AbstractAssessment* getAssessment(string name) {return 0;};
	//	virtual bool addOpportunity(string name, float mark, float weight) {};
	//	virtual bool removeOpportunity(string name) {};		
		//
		virtual void print() = 0;
		virtual string toString(int n) = 0;
		virtual void writeToFile(fstream &file) = 0;
		//a function to check if values are within range 0-100 percentage
		//Assessment& clone()
};


#endif