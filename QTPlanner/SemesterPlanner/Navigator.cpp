#include "Navigator.h"

Navigator::Navigator(Planner* plan)
{
	this->plan = plan;
	curModule = 0;
	curAssess = 0;
	curPath = "root";
}

Navigator::~Navigator()
{
	
}

void Navigator::gotoRoot()
{
	curModule = 0;
	curAssess = 0;
	curPath = "root";	
}

void Navigator::goBack()
{
	if (!isAtRoot())
	{
		if (isAtModule())
		{
			gotoRoot();
		}
		else
		{
			//take away last entry
			string curPlace = curPath.substr(curPath.find_last_of("/") + 1, curPath.length());
			string tempPath = curPath.substr(0, curPath.length() - curPlace.length());

			//take away root and curModule
			curPlace = tempPath.substr(0, tempPath.find_first_of("/"));
			tempPath = tempPath.substr(curPlace.length() + 1, tempPath.length());
			curPlace = tempPath.substr(0, tempPath.find_first_of("/"));
			tempPath = tempPath.substr(curPlace.length() + 1, tempPath.length());		

			//find new current if possible
			if (tempPath == "")
			{
				curAssess = 0;
			}
			else
			{
				curPlace = tempPath.substr(0, tempPath.find_first_of("/"));
				Assessment* tempAssess = (Assessment*) curModule->getAssessment(curPlace);	//segfault alert
				tempPath = tempPath.substr(curPlace.length() + 1,tempPath.length());

				curPlace = tempPath.substr(0, tempPath.find_first_of("/"));				
				while (tempPath != "")
				{		
					tempAssess = (Assessment*) tempAssess->getAssessment(curPlace);
					tempPath = tempPath.substr(curPlace.length() + 1 ,tempPath.length());					
					curPlace = tempPath.substr(0, tempPath.find_first_of("/"));				
				}
				curAssess = tempAssess;
			}
			curPlace = curPath.substr(curPath.find_last_of("/"), curPath.length());
			curPath = curPath.substr(0, curPath.length() - curPlace.length());	
		}
	}
	
}

bool Navigator::enter(string enterThis)
{
	//if at root
	if (isAtRoot())
	{
		curModule = plan->getModule(enterThis);
		if (!curModule) 
			return false;
		else
		{
			curPath = curPath + "/" + enterThis;
			return true;
		}
	}
	//if at module
	else if (isAtModule())
	{
        Assessment* temp = (Assessment*) curModule->getAssessment(enterThis);
        if (temp == 0 || temp->isLeaf())
			return false;
		else
		{
            curAssess = temp;
			curPath = curPath + "/" + enterThis;
			return true;
		}
	}
	//if at assessment
	else
	{
		Assessment* temp = (Assessment*) curAssess->getAssessment(enterThis);
		if (temp == 0 || temp->isLeaf())
			return false;
		else
		{
			curAssess = temp;
			curPath = curPath + "/" + enterThis;
			return true;
		}
	}
}

bool Navigator::isAtRoot()
{
	return curPath == "root";
}

bool Navigator::isAtModule()
{
	if (curModule != 0 && curAssess == 0)
		return true;
	return false;
}

void Navigator::display()
{
    if (isAtRoot())
    {
        plan->listModules();
    }
    else if (isAtModule())
    {
        curModule->listAssessments();
    }
    else
    {
        ((Assessment*)curAssess)->listAssessments();
    }
}

void Navigator::displayList(QListWidget* listWidget)
{
    if (isAtRoot())
    {
        plan->displayList(listWidget);
    }
    else if (isAtModule())
    {
        curModule->displayList(listWidget);
    }
    else
    {
        ((Assessment*)curAssess)->displayList(listWidget);
    }
}

void Navigator::listDetail(string name, QListWidget* listWidget)
{
    if (isAtModule())
    {
        if (name == curModule->getName())
        {
            curModule->listDetail(listWidget);
        }
        else
        {
         AbstractAssessment* temp = curModule->getAssessment(name);
         if (temp)
             temp->listDetail(listWidget);
        }
    }
    else
    {
        if (name == curAssess->getAssessName())
        {
            curAssess->listDetail(listWidget);
        }
        else
        {
         AbstractAssessment* temp = curAssess->getAssessment(name);
         if (temp)
             temp->listDetail(listWidget);
        }
    }
}
