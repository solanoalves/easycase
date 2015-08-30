#include "flow_action.h"
using std::FlowAction;

FlowAction::FlowAction(){

}

FlowAction::~FlowAction(){

}

void FlowAction::setActorType(const Actor::ActorType actType){
	actorType = actType;
}

Actor::ActorType FlowAction::getActorType() const{
	return actorType;
}

void FlowAction::setFlowType(const Flow::FlowType fType){
	flowType = fType;
}

Flow::FlowType FlowAction::getFlowType() const{
	return flowType;
}

void FlowAction::setSequence(int seq){
	sequence = seq;
}

int FlowAction::getSequence() const{
	return sequence;
}