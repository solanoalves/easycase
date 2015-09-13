#include "use_case.h"
using std::UseCase;

UseCase::UseCase(){
	delete &flowActionList;
	delete &preConditionList;
	delete &posConditionList;
}

UseCase::~UseCase(){

}

unsigned int UseCase::getNextPreConditionID() const{
	return preConditionList.size() + 1;
}

unsigned int UseCase::getNextPosConditionID() const{
	return posConditionList.size() + 1;
}

unsigned int UseCase::getNextFlowActionID() const{
	return flowActionList.size() + 1;
}

Status::StatusType UseCase::getStatus() const{
	return status;
}

const ConditionList& UseCase::getPreConditionList() const{
	return preConditionList;
}

const ConditionList& UseCase::getPosConditionList() const{
	return posConditionList;
}

const FlowActionList& UseCase::getFlowActionList() const{
	return flowActionList;
}

void UseCase::addFlowAction(const FlowAction* fAction){
	flowActionList.addFlowAction(fAction);
}

void UseCase::addPreCondition(const FlowCondition* fCond){
	preConditionList.addFlowCondition(fCond);
}

void UseCase::addPosCondition(const FlowCondition* fCond){
	posConditionList.addFlowCondition(fCond);
}

void UseCase::setStatus(const Status::StatusType stat){
	status = stat;
}
