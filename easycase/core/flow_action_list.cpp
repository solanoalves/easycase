#include "flow_action_list.h"
using std::FlowActionList;

FlowActionList::FlowActionList(){
}

FlowActionList::~FlowActionList(){
}

void FlowActionList::addFlowAction(const FlowAction* fAction){
	actions.push_back(fAction);
}

vector<const FlowAction*> FlowActionList::getFlowActionList() const{
	return actions;
}