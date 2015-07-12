#include "flow_condition.h"
using std::FlowCondition;

FlowCondition::FlowCondition(){

}

FlowCondition::~FlowCondition(){

}

void FlowCondition::setConditionType(Condition::ConditionType* condType){
	conditionType = condType;
}

Condition::ConditionType* FlowCondition::getConditionType(){
	return conditionType;
}

void FlowCondition::setDescription(string desc){
	description = desc;
}

string FlowCondition::getDescription(){
	return description;
}