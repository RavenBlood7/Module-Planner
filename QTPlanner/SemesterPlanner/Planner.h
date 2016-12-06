#ifndef PLANNER_H
#define PLANNER_H

#include "Module.h"
//#include "Navigator.h"	//forward declaration?
class Navigator;
#include <fstream>

#include <QListWidget>

class Planner
{
	private:
		list<Module*> modules;
		list<Module*>::iterator iter;
		fstream file;
	
		void loadFromFile();
		void saveToFile();
		void	populateAssessment(Assessment* cur,
					int numSubAssess, fstream &file);			
	public:
		Planner();
		~Planner();
	
		bool addModule(string name, string timePeriod,
			float EEM, float passMark);
		bool removeModule(string name);
		Module* getModule(string name);	
		
		Navigator* createNavigator();
		
		void listModules();
        void displayList(QListWidget* listWidget);
	
		//clone?
		//Module& operator[]();
};


#endif
