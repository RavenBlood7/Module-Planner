#ifndef TESTER_ASSESSMENT_H
#define TESTER_ASSESSMENT_H

#include "AbstractAssessment.h"
#include "Assessment.h"
#include "Opportunity.h"

#include <iostream>
using namespace std;

void testAssessment()
{
	//insert Assignments	
	/*	Assessment assign;
		assign.addNewOpportunity("A1asdf", 0, 30);
	assign.print();
		assign.addNewOpportunity("A2", 0, 15);
		assign.print();
		assign.addNewOpportunity("A3", 0, 5);
	assign.print();
		assign.addNewOpportunity("A4", 0, 5);
	assign.print();
	
		assign.setName("Assignments");
	assign.print();
		assign.setOpName("A1asdf", "A1");
	assign.print();
		assign.setMark("A2", 50);
	assign.print();
		assign.setWeight("A3", 10);
	assign.print();
	

		assign.removeOpportunity("A4");
	assign.print();	
		assign.removeOpportunity("A4");
	assign.print();	
	*/
	
	//In the Example of ENG 120
	AbstractAssessment * SAPTest = new Opportunity("SA Poetry Test", 60);
	AbstractAssessment * SSAssign = new Opportunity("Short Story Assign",60, 100);
	AbstractAssessment * HODTest = new Opportunity("HOD Test", 0, 100);
	AbstractAssessment * Pracs = new Assessment("Practicals", 4, 40);
	
	//SAPTest.addNewOpportunity("SAPTest1", 0, 60);
//	SSAssign.addNewOpportunity("SSAssign1", 0, 100);
//	HODTest.addNewOpportunity("HODTest1", 0, 100);
//	Pracs.addNewOpportunity("Prac1", 0, 10);
//	Pracs.addNewOpportunity("Prac2", 0, 10);
//	Pracs.addNewOpportunity("Prac3", 0, 10);
//\	Pracs.addNewOpportunity("Prac4", 0, 10);
	
	//Pracs.setWeight("Prac1", 15);
	//Pracs.setWeight("Prac4", 5);
	
	SAPTest->print();
	SSAssign->print();
	HODTest->print();
	//Pracs->print();
	cout << Pracs->toString(0);
	
	
	
	delete SAPTest;
	delete SSAssign;
	delete HODTest;
	delete Pracs;
}

#endif