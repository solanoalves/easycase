#include "condition_list.h"
using std::ConditionList;
#include <vector>
using std::vector;

ConditionList::ConditionList(){
}

ConditionList::~ConditionList(){

}

void ConditionList::addFlowCondition(const FlowCondition* flowCondition){
	conditions.push_back(flowCondition);
}

vector<const FlowCondition*> ConditionList::getConditions() const{
	return conditions;
}

unsigned int ConditionList::size() const{
	return conditions.size();
}