#include "use_case.h"
using std::UseCase;

UseCase::UseCase(){

}

UseCase::~UseCase(){

}

void UseCase::setId(unsigned int uid){
	id = uid;
}

unsigned int UseCase::getId(){
	return id;
}

void UseCase::setDescription(string desc){
	description = desc;
}

string UseCase::getDescription(){
	return description;
}

void UseCase::setFlowActionList(FlowActionList* faList){
	flowActionList = faList;
}

void UseCase::addFlowAction(FlowAction* fAction){
	flowActionList->addFlowAction(fAction);
}

void UseCase::setPreConditionList(ConditionList* condList){
	preConditionList = condList;
}

void UseCase::addPreCondition(FlowCondition* fCond){
	preConditionList->addFlowCondition(fCond);
}

void UseCase::setPosConditionList(ConditionList* condList){
	posConditionList = condList;
}

void UseCase::addPosCondition(FlowCondition* fCond){
	posConditionList->addFlowCondition(fCond);
}

void UseCase::setStatus(Status* stat){
	status = stat;
}

Status* UseCase::getStatus(){
	return status;
}