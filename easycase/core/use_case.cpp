#include "use_case.h"
using std::UseCase;

UseCase::UseCase(){

}

UseCase::~UseCase(){
	delete &flowActionList;
	delete &preConditionList;
	delete &posConditionList;
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

void UseCase::deleteUseCaseLists(){
	preConditionList.clear();
	posConditionList.clear();
	flowActionList.clear();
}

vector<const FlowCondition*>::const_iterator UseCase::getFirstPreCondition() const{
	return preConditionList.getFirstCondition();
}
vector<const FlowCondition*>::const_iterator  UseCase::getLastPreCondition() const{
	return preConditionList.getLastCondition();
}
vector<const FlowCondition*>::const_iterator UseCase::getFirstPosCondition() const{
	return posConditionList.getFirstCondition();
}
vector<const FlowCondition*>::const_iterator  UseCase::getLastPosCondition() const{
	return posConditionList.getLastCondition();
}
vector<const FlowAction*>::const_iterator UseCase::getFirstFlowAction() const{
	return flowActionList.getFirstFlowAction();
}
vector<const FlowAction*>::const_iterator UseCase::getLastFlowAction() const{
	return flowActionList.getLastFlowAction();
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
