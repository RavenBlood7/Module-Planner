#ifndef TESTER_NAVIGATOR_H
#define TESTER_NAVIGATOR_H

#include "Navigator.h"

void testNavigator()
{
	Planner plan;
	Navigator* nav = plan.createNavigator();
	
	nav->enter("COS 284");
	nav->display();
	nav->enter("Semester Mark");
	nav->display();
	nav->goBack();
	nav->display();
	nav->enter("Semester Mark");
	nav->display();
	nav->enter("Sasdfasdfaemester Mark");
	nav->display();
	nav->enter("Pracs");
	nav->display();
	nav->enter("P1");
	nav->display();
	nav->enter("T3");
	nav->display();

	nav->goBack();
	nav->display();
	nav->goBack();
	nav->display();
	nav->goBack();
	nav->display();	
	nav->goBack();
	nav->display();	
	nav->goBack();
	nav->display();	
	
	
	delete nav;
	
}

#endif