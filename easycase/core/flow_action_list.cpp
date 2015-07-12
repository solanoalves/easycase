#include "flow_action_list.h"
using std::FlowActionList;

FlowActionList::FlowActionList(){

}

FlowActionList::~FlowActionList(){

}

void FlowActionList::addFlowAction(FlowAction* fAction){
	actions->push_back(fAction);
}