#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "condition.h"
using std::Condition;
#include <string>
using std::string;

namespace std{
	class FlowCondition : public BasicInfo{
	private:
		Condition::ConditionType* conditionType;
	public:
		FlowCondition();
		~FlowCondition();
		void setConditionType(Condition::ConditionType*);
		Condition::ConditionType* getConditionType();
	};
};
