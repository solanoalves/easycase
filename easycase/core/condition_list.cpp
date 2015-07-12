#include "condition_list.h"
using std::ConditionList;

ConditionList::ConditionList(){

}

ConditionList::~ConditionList(){

}

void ConditionList::addFlowCondition(FlowCondition* flowCondition){
	conditions->push_back(flowCondition);
}