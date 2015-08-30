#include "use_case.h"
using std::UseCase;

UseCase::UseCase(){
	flowActionList = new FlowActionList;
	preConditionList = new ConditionList;
	posConditionList = new ConditionList;
}

UseCase::~UseCase(){

}

void UseCase::addFlowAction(const FlowAction* fAction){
	flowActionList->addFlowAction(fAction);
}

void UseCase::addPreCondition(const FlowCondition* fCond){
	preConditionList->addFlowCondition(fCond);
}

void UseCase::addPosCondition(const FlowCondition* fCond){
	posConditionList->addFlowCondition(fCond);
}

void UseCase::setStatus(const Status::StatusType stat){
	status = stat;
}

Status::StatusType UseCase::getStatus() const{
	return status;
}