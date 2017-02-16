#ifndef ASSESSMENT_H
#define ASSESSMENT_H

#include "AbstractAssessment.h"
#include "Opportunity.h"
#include <string>
#include <iomanip>
#include <list>

using namespace std;

class Assessment : public AbstractAssessment
{
	private:
		//string name;	implicit from Abstract Assessment
		
		list<AbstractAssessment *> opps;
		list<AbstractAssessment *>::iterator iter;

	public:
		Assessment();
		Assessment(string name);
		Assessment(int numOfSubs, float groupWeight);
		Assessment(string name, int numOfSubs, float groupWeight);
		Assessment(string name, float groupWeight);
		~Assessment();
	
		bool addOpportunity(string name, float total, float weight);
		bool addOpportunity(string name, float weight);
		bool addAssessment(string name, int numOfSubs, float groupWeight); //look out for div by 0
		bool addAssessment(string name, float groupWeight); 
		bool removeOpportunity(string name);
		
		//void setName(string name);	AbstractAssessment has a function setAssessName
		bool setOpName(string name, string newName);
		bool setOpMark(string name, float mark);
		bool setOpTotal(string name, float total);
		bool setOpWeight(string name, float weight);		
		//string getName();	parent class has one
		float getOpMark(string name);
		float getOpWeight(string name);
		float getMark();
		float getTotal();
		//float getWeight();	in parent class
		int getSize();
		AbstractAssessment * getAssessment(string name);	

		float calculateTotalMark();
		float calculateTotalTotal();
		float calculateSubWeights();
		float calculateSubWeightedMarks();
		
		//
		void print();
		string toString(int n);
		void listAssessments();		
		void writeToFile(fstream &file);
		//if the opps are equal weight---maybe make a state boolean variable
			//and a separate function to divide it evenly
			//and have a total weight
			//and have a total weight
		//a function to check if values are within range 0-100 percentage
		//void alphabetize();
		//int operator[](int index);
		//Assessment& clone()
		
		bool isLeaf();
        void displayList(QWidget* wgtNav);
        void listDetail(QWidget* wgtDetail);

};


#endif
