#ifndef PLANNER_H
#define PLANNER_H

#include "Module.h"
//#include "Navigator.h"	//forward declaration?
class Navigator;
#include <fstream>
#include <sstream>
#include <iomanip>

#include <QListWidget>

class Planner
{
	private:
		list<Module*> modules;
		list<Module*>::iterator iter;
		fstream file;
	
        void loadFromFile();
		void	populateAssessment(Assessment* cur,
					int numSubAssess, fstream &file);			
	public:
		Planner();
		~Planner();

        void saveToFile();
	
		bool addModule(string name, string timePeriod,
			float EEM, float passMark);
		bool removeModule(string name);
		Module* getModule(string name);	
		
		Navigator* createNavigator();
		
		void listModules();
        void displayList(QWidget* wgtNav);
	
		//clone?
		//Module& operator[]();
};


#endif
