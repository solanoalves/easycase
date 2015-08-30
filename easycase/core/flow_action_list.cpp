#include "flow_action_list.h"
using std::FlowActionList;

FlowActionList::FlowActionList(){
	actions = new vector<const FlowAction*>;
}

FlowActionList::~FlowActionList(){
	delete actions;
}

void FlowActionList::addFlowAction(const FlowAction* fAction){
	actions->push_back(fAction);
}