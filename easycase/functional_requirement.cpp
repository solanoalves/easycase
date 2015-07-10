#include "functional_requirement.h"
using std::FunctionalRequirement;

FunctionalRequirement::FunctionalRequirement(){

}

FunctionalRequirement::~FunctionalRequirement(){

}

void FunctionalRequirement::setSystemList(SystemList* sList){
	systemList = sList;
}