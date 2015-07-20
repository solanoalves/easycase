#include "requirement.h"
using std::Requirement;

Requirement::Requirement(){

}

Requirement::~Requirement(){

}

void Requirement::setUseCaseList(UseCaseList* ucList){
	useCaseList = ucList;
}