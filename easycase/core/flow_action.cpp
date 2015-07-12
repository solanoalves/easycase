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

void FlowAction::setDescription(string desc){
	description = desc;
}

string FlowAction::getDescription(){
	return description;
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