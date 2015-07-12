#ifndef INCLUDE_FLOW_CONDITION_H_
#define INCLUDE_FLOW_CONDITION_H_

#include "condition.h"
using std::Condition;
#include <string>
using std::string;

namespace std{
	class FlowCondition{
	private:
		Condition::ConditionType* conditionType;
		string description;

	public:
		FlowCondition();
		~FlowCondition();
		void setConditionType(Condition::ConditionType*);
		Condition::ConditionType* getConditionType();
		void setDescription(string);
		string getDescription();
	};
};
#endif
