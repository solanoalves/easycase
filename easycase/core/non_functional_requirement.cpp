#include "non_functional_requirement.h"
using std::NonFunctionalRequirement;

NonFunctionalRequirement::NonFunctionalRequirement(){

}

NonFunctionalRequirement::~NonFunctionalRequirement(){

}

void NonFunctionalRequirement::setCriteriaList(CriteriaList* critList){
	criteriaList = critList;
}