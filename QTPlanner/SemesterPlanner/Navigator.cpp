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

void Navigator::displayList(QWidget* wgtNav)
{
    if (isAtRoot())
    {
        wgtNav->findChild<QLabel*>("lblCurMod")->setText(QString::fromStdString(""));
        plan->displayList(wgtNav);
    }
    else if (isAtModule())
    {
        wgtNav->findChild<QLabel*>("lblCurMod")->setText(QString::fromStdString(curModule->getName()));
        curModule->displayList(wgtNav);
    }
    else
    {
        wgtNav->findChild<QLabel*>("lblCurMod")->setText(QString::fromStdString(curModule->getName()));
        ((Assessment*)curAssess)->displayList(wgtNav);
    }
}

void Navigator::listDetail(string name, QWidget* wgtDetail)
{
    if (isAtRoot())
    {
        Module* temp = plan->getModule(name);
        if (temp)
            temp->listDetail(wgtDetail);
    }
    else if (isAtModule())
    {
        if (name == curModule->getName())
        {
            curModule->listDetail(wgtDetail);
        }
        else
        {
         AbstractAssessment* temp = curModule->getAssessment(name);
         if (temp)
             temp->listDetail(wgtDetail);
        }
    }
    else
    {
        if (name == curAssess->getAssessName())
        {
            curAssess->listDetail(wgtDetail);
        }
        else
        {
         AbstractAssessment* temp = curAssess->getAssessment(name);
         if (temp)
             temp->listDetail(wgtDetail);
        }
    }
}

void Navigator::updateMark(string name, float newMark)
{
    if (isAtModule())
    {
        ((Opportunity*) curModule->getAssessment(name))->setMark(newMark);
    }
    else
    {
        ((Opportunity*) curAssess->getAssessment(name))->setMark(newMark);
    }

}

bool Navigator::createModule(string name, string period, float EEM, float passMark)
{
    if (!isAtRoot()) return false;
    bool worked = plan->addModule(name, period, EEM, passMark);

    if (worked)
    {
        Module* newItem = plan->getModule(name);
        if (newItem)
        {
            newItem->addOpportunity("Exam", 50);
            newItem->addAssessment("Semester Mark", 50);
            ((Assessment*) newItem->getAssessment("Semester Mark"))->addOpportunity("ST1", 100, 50);
            ((Assessment*) newItem->getAssessment("Semester Mark"))->addOpportunity("ST2", 100, 50);
        }
    }
   return worked;
}

bool Navigator::createAssessment(string name, float weight, string subNames, int numOfSubs)
{
    bool worked = false;
    if (isAtRoot())
    {
        return false;
    }
    else if (isAtModule())
    {
        worked = curModule->addAssessment(name, weight, numOfSubs);
        if (worked)
        {
            Assessment* temp = (Assessment*) curModule->getAssessment(name);
            if (!temp) return false;
            else
            {
                stringstream subName;
                for (int i = 1; i <= numOfSubs; i++)
                {
                    subName.str("");
                    subName << subNames << i;
                    temp->setOpName("sub" + temp->getAssessName(), subName.str());
                }
                return true;
            }
        }
    }
    else
    {
        worked = curAssess->addAssessment(name, numOfSubs, weight);
        if (worked)
        {
            Assessment* temp = (Assessment*) curAssess->getAssessment(name);
            if (!temp) return false;
            else
            {
                stringstream subName;
                for (int i = 1; i <= numOfSubs; i++)
                {
                    subName.str("");
                    subName << subNames << i;
                    temp->setOpName("sub" + temp->getAssessName(), subName.str());
                }
                return true;
            }
        }
    }
}

bool Navigator::createOpportunity(string name, float weight, float mark, float total)
{
    if (isAtRoot())
    {
        return false;
    }
    else if (isAtModule())
    {
        curModule->addOpportunity(name, weight);
        Opportunity* temp = (Opportunity*) curModule->getAssessment(name);
        if (!temp) return false;
        else
        {
            temp->setMark(mark);
            temp->setTotal(total);
        }
        return true;
    }
    else
    {
        curAssess->addOpportunity(name, weight);
        Opportunity* temp = (Opportunity*) curAssess->getAssessment(name);
        if (!temp) return false;
        else
        {
            temp->setMark(mark);
            temp->setTotal(total);
        }
        return true;
    }
}

bool Navigator::deleteAssess(string name)
{
    if (isAtRoot())
    {
        return plan->removeModule(name);
    }
    else if (isAtModule())
    {
        if (curModule->getName() == name)
            return plan->removeModule(name);
        else
            curModule->removeAssessment(name);
    }
    else
    {
        if (curAssess->getAssessName() == name)
            return plan->removeModule(name);
        else
            curAssess->removeOpportunity(name);
    }
}

bool Navigator::isModule(string name)
{
    if (plan->getModule(name) && isAtRoot())
        return true;
    else return false;
}

bool Navigator::isAssessment(string name)
{
    if (isAtRoot())
    {
        return false;
    }
    else if (isAtModule())
    {
        AbstractAssessment* temp = curModule->getAssessment(name);
        if (temp)
        {
            return !(temp->isLeaf());
        }
        else return false;

    }
    else
    {
        AbstractAssessment* temp = curAssess->getAssessment(name);
        if (temp)
        {
            return !(temp->isLeaf());
        }
        else return false;
    }
}

void Navigator::loadEdit(string name, QWidget* edtWidget)
{
    if (isModule(name))
    {
        Module* temp = plan->getModule(name);
        if (temp)
        {
            edtWidget->findChild<QComboBox*>("cbxPeriod")->setCurrentText(QString::fromStdString(temp->getTimePeriod()));
            edtWidget->findChild<QDoubleSpinBox*>("sbxExamEnt")->setValue((double) temp->getExamEntranceMark());
            edtWidget->findChild<QDoubleSpinBox*>("sbxPassMark")->setValue((double) temp->getPassMark());
        }
    }
    else if (isAssessment(name))
    {
        if (isAtModule())
        {
            Assessment* temp = (Assessment*) curModule->getAssessment(name);
            if (temp)
                edtWidget->findChild<QDoubleSpinBox*>("sbxWeight")->setValue((double) temp->getWeight());
        }
        else
        {
            Assessment* temp = (Assessment*) curAssess->getAssessment(name);
            if (temp)
                edtWidget->findChild<QDoubleSpinBox*>("sbxWeight")->setValue((double) temp->getWeight());
        }

    }
    else
    {
        if (isAtModule())
        {
            Opportunity* temp = (Opportunity*) curModule->getAssessment(name);
            if (temp)
            {
                edtWidget->findChild<QDoubleSpinBox*>("sbxWeight_2")->setValue((double) temp->getWeight());
                edtWidget->findChild<QDoubleSpinBox*>("sbxMark")->setValue((double) temp->getMark());
                edtWidget->findChild<QDoubleSpinBox*>("sbxTotal")->setValue((double) temp->getTotal());
            }
        }
        else
        {
            Opportunity* temp = (Opportunity*) curAssess->getAssessment(name);
            if (temp)
            {
                edtWidget->findChild<QDoubleSpinBox*>("sbxWeight_2")->setValue((double) temp->getWeight());
                edtWidget->findChild<QDoubleSpinBox*>("sbxMark")->setValue((double) temp->getMark());
                edtWidget->findChild<QDoubleSpinBox*>("sbxTotal")->setValue((double) temp->getTotal());
            }
        }

    }
}

void Navigator::editModule(string name, string newName, string TP, float EEM, float PM)
{
    Module* temp = plan->getModule(name);
    if (temp)
    {
        temp->setName(newName);
        temp->setTimePeriod(TP);
        temp->setExamEntranceMark(EEM);
        temp->setPassMark(PM);
    }
}

void Navigator::editAssessGroup(string name, string newName, float weight)
{
    Assessment* temp = 0;
    if (!isAtRoot())
    {
        if (isAtModule())
            temp = (Assessment*) curModule->getAssessment(name);
        else
            temp = (Assessment*) curAssess->getAssessment(name);

        if (temp)
        {
            temp->setAssessName(newName);
            temp->setWeight(weight);
        }
    }
}

void Navigator::editAssess(string name, string newName, float weight, float mark, float total)
{
    Opportunity* temp = 0;
    if (!isAtRoot())
    {
        if (isAtModule())
            temp = (Opportunity*) curModule->getAssessment(name);
        else
            temp = (Opportunity*) curAssess->getAssessment(name);

        if (temp)
        {
            temp->setAssessName(newName);
            temp->setWeight(weight);
            temp->setMark(mark);
            temp->setTotal(total);
        }
    }
}

void Navigator::save()
{
    plan->saveToFile();
}

