#pragma once

#include "flow_condition.h"
using std::FlowCondition;
#include <vector>
using std::vector;

namespace std{
	class ConditionList{
	private:
		vector<FlowCondition*>* conditions;
	public:
		ConditionList();
		~ConditionList();
		void addFlowCondition(FlowCondition*);
	};
};
