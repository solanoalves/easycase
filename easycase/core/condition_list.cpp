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

vector<const FlowCondition*>::const_iterator ConditionList::getFirstCondition() const{
	return conditions.begin();
}
vector<const FlowCondition*>::const_iterator ConditionList::getLastCondition() const{
	return conditions.end();
}

unsigned int ConditionList::size() const{
	return conditions.size();
}