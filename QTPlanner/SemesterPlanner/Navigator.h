#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include "Planner.h"
//class Planner;
#include "Module.h"
#include "Assessment.h"
#include <QListWidget>
#include <QComboBox>


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
        void displayList(QWidget* wgtNav);
        void listDetail(string name, QWidget* wgtDetail);

        void updateMark(string name, float newMark);

        bool createModule(string name, string period, float EEM, float passMark);
        bool createAssessment(string name, float weight, string subNames, int numOfSubs);
        bool createOpportunity(string name, float weight, float mark, float total);
        bool deleteAssess(string name);

        bool isModule(string name);
        bool isAssessment(string name);
        void loadEdit(string name, QWidget* edtWidget);

        void editModule(string name, string newName, string TP, float EEM, float PM);
        void editAssessGroup(string name, string newName, float weight);
        void editAssess(string name, string newName, float weight, float mark, float total);

        void save();
};


#endif
