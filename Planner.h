#ifndef PLANNER_H
#define PLANNER_H

#include "Module.h"

class Planner
{
	private:
		Module* modules;
		Module* modulePlans;
		
	public:
		Planner();
		~Planner();
	
		bool addModule(string name);
		bool removeModule(string name);
	
		bool makePlan(string name);
		bool removePlan(string name);
	
		//clone?
		//Module& operator[]();
}


#endif