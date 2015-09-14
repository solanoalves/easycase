#include "flow_action_list.h"
using std::FlowActionList;

FlowActionList::FlowActionList(){
}

FlowActionList::~FlowActionList(){
	for (vector<const FlowAction*>::iterator it = actions.begin(); it != actions.end(); it++){
		delete *it;
	}
}

void FlowActionList::addFlowAction(const FlowAction* fAction){
	actions.push_back(fAction);
}

vector<const FlowAction*>::const_iterator FlowActionList::getFirstFlowAction() const{
	return actions.begin();
}
vector<const FlowAction*>::const_iterator FlowActionList::getLastFlowAction() const{
	return actions.end();
}

unsigned int FlowActionList::size() const{
	return actions.size();
}

void FlowActionList::clear(){
	actions.clear();
}