#ifndef TESTER_MODULE_H
#define TESTER_MODULE_H

#include "Module.h"

void testModule()
{
	//Try it on ENG120:make a module
//	Module mod1("ENG120");
//	
//	mod1.addOpportunity("Exam", 50);
//	mod1.addAssessment("Semester", 50, 3);
//	Assessment * pracs = (Assessment *) mod1.getAssessment("Semester");
//	pracs->setOpName("subSemester", "SAP Test");
//	pracs->setOpName("subSemester", "SS Assignment");
//	pracs->setOpName("subSemester", "HOD Test");
//	//pracs->setOpName("subSemester", "Pracs");	
//	
//	pracs->setOpTotal("SAP Test", 60);
//	pracs->setOpTotal("SS Assignment", 100);
//	pracs->setOpTotal("HOD Test", 100);
//	
//	pracs->addAssessment("Pracs", 4, 40);
	//pracs->setOpWeight("Pracs", 40);	
	
	//mod1.addOppToAssessment("Semester", "SAP Test", 0, 60);
//	mod1.getAssessment("Semester")->addOpportunity("SAP Test", 0, 60);
//	mod1.getAssessment("Semester")->addOpportunity("SS Assignment", 0, 100);
//	mod1.getAssessment("Semester")->addOpportunity("HOD Test", 0, 100);
//	mod1.getAssessment("Semester")->addAssessment("Pracs", 0, 40);
///*	
//	pracs = (Assessment *) pracs->getAssessment("Pracs");
//	pracs->setOpName("subPracs", "P1");
//	pracs->setOpName("subPracs", "P2");
//	pracs->setOpName("subPracs", "P3");
//	pracs->setOpName("subPracs", "P4");
/*	
	mod1.getAssessment("Semester")->getAssessment("Pracs")->addOpportunity("P1", 0, 10);
	mod1.getAssessment("Semester")->getAssessment("Pracs")->addOpportunity("P2", 0, 10);
	mod1.getAssessment("Semester")->getAssessment("Pracs")->addOpportunity("P3", 0, 10);
	mod1.getAssessment("Semester")->getAssessment("Pracs")->addOpportunity("P4", 0, 10);
//*/	
//	mod1.print();


//Try with 284:
	Module mod2("COS 284");
	
	mod2.addAssessment("Semester Mark", 40);
	
	Assessment * sem = (Assessment* ) mod2.getAssessment("Semester Mark");
	sem->addAssessment("Class Tests",4 , 15);
	sem->addAssessment("Pracs", 10);
	sem->addAssessment("Assignments", 25);
	sem->addOpportunity("Theory Assignment", 64, 5);
	sem->addAssessment("Semester Tests", 45);	
	
	Assessment * CT = (Assessment*) sem->getAssessment("Class Tests");
	CT->setOpName("subClass Tests","CT1");
	CT->setOpTotal("CT1", 10);
	CT->setOpMark("CT1", 9);
	CT->setOpWeight("CT1", 5);
	CT->setOpName("subClass Tests","CT2");
	CT->setOpTotal("CT2", 36);
	CT->setOpMark("CT2", 25);
	CT->setOpWeight("CT2", 5);	
	CT->setOpName("subClass Tests","CT3");
	CT->setOpTotal("CT3", 35);
	CT->setOpMark("CT3", 14);
	CT->setOpWeight("CT3", 0);
	CT->setOpName("subClass Tests","CT4");
	CT->setOpTotal("CT4", 37);
	CT->setOpMark("CT4", 29);
	CT->setOpWeight("CT4", 5);
	
	Assessment * pracs = (Assessment*) sem->getAssessment("Pracs");	
	pracs->addAssessment("P1", 10/6);
		Assessment * subPrac = (Assessment*) pracs->getAssessment("P1");
		subPrac->addOpportunity("T1/2", 10, 10);
		subPrac->setOpMark("T1/2", 0);
		subPrac->addOpportunity("T3", 5, 5);
		subPrac->setOpMark("T1/2", 5);
	pracs->addAssessment("P2", 10/6);
		subPrac = (Assessment*) pracs->getAssessment("P2");
		subPrac->addOpportunity("T1", 5, 5);
		subPrac->setOpMark("T1", 5);
		subPrac->addOpportunity("T2", 5, 5);
		subPrac->setOpMark("T2", 5);
		subPrac->addOpportunity("T3", 10, 10);
		subPrac->setOpMark("T3", 10);
	pracs->addAssessment("P3", 10/6);
		subPrac = (Assessment*) pracs->getAssessment("P3");
		subPrac->addOpportunity("T1", 5, 5);
		subPrac->setOpMark("T1", 5);
		subPrac->addOpportunity("T2", 20, 20);
		subPrac->setOpMark("T2", 20);
	pracs->addAssessment("P4", 10/6);
		subPrac = (Assessment*) pracs->getAssessment("P4");
		subPrac->addOpportunity("T1", 10, 10);
		subPrac->setOpMark("T1", 10);
		subPrac->addOpportunity("T2", 15, 15);
		subPrac->setOpMark("T2", 15);
	pracs->addAssessment("P5", 10/6);
		subPrac = (Assessment*) pracs->getAssessment("P5");
		subPrac->addOpportunity("T1", 10, 10);
		subPrac->setOpMark("T1", 0);
		subPrac->addOpportunity("T2", 15, 15);
		subPrac->setOpMark("T2", 0);
	pracs->addOpportunity("P6", 50, 10/6);
	pracs->setOpMark("P6", 50);
	
	Assessment * assignments = (Assessment *) sem->getAssessment("Assignments");
	assignments->addOpportunity("A1", 20, 25.0/6);
	assignments->setOpMark("A1", 19);
	assignments->addAssessment("A2", 25.0/6);
		Assessment* subAss = (Assessment*) assignments->getAssessment("A2");
		subAss->addOpportunity("T1", 5, 5);
		subAss->setOpMark("T1", 5);
		subAss->addOpportunity("T2", 5, 5);
		subAss->setOpMark("T2", 5);
		subAss->addOpportunity("T3", 5, 5);
		subAss->setOpMark("T3", 5);
		subAss->addOpportunity("T4", 5, 5);
		subAss->setOpMark("T4", 5);
	assignments->addOpportunity("A3", 40, 25.0/6);
	assignments->setOpMark("A3", 38);
	assignments->addAssessment("A4", 25.0/6);
		subAss = (Assessment*) assignments->getAssessment("A4");
		subAss->addOpportunity("T3", 20, 20);
		subAss->setOpMark("T3", 20);
		subAss->addOpportunity("T4", 20, 20);
		subAss->setOpMark("T4", 20);
		subAss->addOpportunity("T5", 20, 20);
		subAss->setOpMark("T5", 20);
	assignments->addAssessment("A5", 25.0/6);
		subAss = (Assessment*) assignments->getAssessment("A5");
		subAss->addOpportunity("T1", 10, 10);
		subAss->setOpMark("T1", 10);
		subAss->addOpportunity("T2", 10, 10);
		subAss->setOpMark("T2", 10);
		subAss->addOpportunity("T3", 20, 20);
		subAss->setOpMark("T3", 2);
	assignments->addOpportunity("A6", 50, 25.0/6);
	assignments->setOpMark("A6", 0);
	
	sem->getAssessment("Theory Assignment")->setMark(64);
	
	Assessment* ST = (Assessment*) sem->getAssessment("Semester Tests");
	ST->addOpportunity("ST1", 83, 45.0/2);
	ST->setOpMark("ST1", 66);
	ST->addOpportunity("ST2", 100, 45.0/2);	
	ST->setOpMark("ST2", 87);
	
	mod2.addOpportunity("Exam", 60);
	(Opportunity*) mod2.getAssessment("Exam")->setMark(91.586666);
	
	mod2.print();
	
}

#endif