#include "condition_list.h"
using std::ConditionList;

ConditionList::ConditionList(){
	conditions = new vector < const FlowCondition* > ;
}

ConditionList::~ConditionList(){

}

void ConditionList::addFlowCondition(const FlowCondition* flowCondition){
	conditions->push_back(flowCondition);
}