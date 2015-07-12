#include "requirement.h"
using std::Requirement;

Requirement::Requirement(){

}

Requirement::~Requirement(){

}

void Requirement::setDescription(string desc){
	description = desc;
}

string Requirement::getDescription(){
	return description;
}

void Requirement::setUseCaseList(UseCaseList* ucList){
	useCaseList = ucList;
}