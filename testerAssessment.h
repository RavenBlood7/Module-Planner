#ifndef TESTER_ASSESSMENT_H
#define TESTER_ASSESSMENT_H

#include "Assessment.h"

void testAssessment()
{
	//insert Assignments	
		Assessment assign;
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
}

#endif