#include "flow_action.h"
using std::FlowAction;

FlowAction::FlowAction(){

}

FlowAction::~FlowAction(){

}

void FlowAction::setActorType(Actor::ActorType* actType){
	actorType = actType;
}

Actor::ActorType* FlowAction::getActorType(){
	return actorType;
}

void FlowAction::setFlowType(Flow::FlowType* fType){
	flowType = fType;
}

Flow::FlowType* FlowAction::getFlowType(){
	return flowType;
}

void FlowAction::setSequence(int seq){
	sequence = seq;
}

int FlowAction::getSequence(){
	return sequence;
}