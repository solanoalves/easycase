#include "requirement_list.h"
using std::RequirementList;

RequirementList::RequirementList(){

}

RequirementList::~RequirementList(){
	for (vector<Requirement*>::iterator r = requirementList.begin(); r != requirementList.end(); r++){
		delete *r;
	}
}

vector<Requirement*>::iterator RequirementList::getFirstRequirement(){
	return requirementList.begin();
}

vector<Requirement*>::iterator RequirementList::getLastRequirement(){
	return requirementList.end();
}

Requirement* RequirementList::getRequirementByID(const unsigned int id){
	Requirement* req = nullptr;
	for (vector<Requirement*>::iterator it = requirementList.begin(); it < requirementList.end(); it++){
		if ((*it)->getId() == id){
			req = *it;
			break;
		}
	}
	return req;
}

unsigned int RequirementList::size() const{
	return requirementList.size();
}

void RequirementList::addRequirement(Requirement* req){
	requirementList.push_back(req);
}