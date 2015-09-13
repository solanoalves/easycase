#include "project.h"
using std::Project;

Project::Project(){

}

Project::~Project(){
	delete &requirementList;
	delete &infoList;
}

string Project::getProjectLeader() const{
	return projectLeader;
}

string Project::getInitialDate() const{
	return initialDate;
}

string Project::getEndDate() const{
	return endDate;
}

vector<Requirement*>::iterator Project::getFirstRequirement(){
	return requirementList.getFirstRequirement();
}

vector<Requirement*>::iterator Project::getLastRequirement(){
	return requirementList.getLastRequirement();
}

Requirement* Project::getRequirementByID(const unsigned int id){
	return requirementList.getRequirementByID(id);
}

unsigned int Project::getNextRequirementID() const{
	return requirementList.size()+1;
}

void Project::setProjectLeader(const string pLeader){
	projectLeader = pLeader;
}

void Project::setInitialDate(const string initDate){
	initialDate = initDate;
}

void Project::setEndDate(const string eDate){
	endDate = eDate;
}

void Project::addRequirement(Requirement* req){
	requirementList.addRequirement(req);
}

void Project::addInfo(const BasicInfo* info){
	infoList.addInfo(info);
}

void Project::deleteInfo(const unsigned int id){
	infoList.deleteInfo(id);
}