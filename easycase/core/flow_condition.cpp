#include "flow_condition.h"
using std::FlowCondition;

FlowCondition::FlowCondition(){

}

FlowCondition::~FlowCondition(){

}

void FlowCondition::setSequence(const int& seq){
	sequence = seq;
}

int FlowCondition::getSequence() const{
	return sequence;
}