#ifndef PLANNER_H
#define PLANNER_H

#include "Module.h"
#include <fstream>

class Planner
{
	private:
		list<Module*> modules;
		list<Module*>::iterator iter;
		fstream file;
		
	public:
		Planner();
		~Planner();
	
		bool addModule(string name, string timePeriod,
			float EEM, float passMark);
		bool removeModule(string name);
		Module* getModule(string name);
	
		void loadFromFile();
		void saveToFile();
		void	populateAssessment(Assessment* cur,
					int numSubAssess, fstream &file);	
		//clone?
		//Module& operator[]();
};


#endif