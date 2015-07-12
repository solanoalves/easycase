#include "requirement_list.h"
using std::RequirementList;

RequirementList::RequirementList(){

}

RequirementList::~RequirementList(){

}

void RequirementList::addRequirement(Requirement* req){
	requirementList->push_back(req);
}