#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "Planner.h"
//class Planner;
#include "Module.h"
#include "Assessment.h"
#include <QListWidget>


class Navigator
{
	private:
		Planner* plan;
		Module* curModule;
		Assessment* curAssess;
		//AbstractAssessment* parentAssess;
		string curPath;
	public:
		Navigator(Planner* plan);
		~Navigator();
		void gotoRoot();
		void goBack();
		bool enter(string enterThis);
		bool isAtRoot();		
		bool isAtModule();	

        void display();
        void displayList(QListWidget* listWidget);
        void listDetail(string name, QListWidget* listWidget);
};


#endif
