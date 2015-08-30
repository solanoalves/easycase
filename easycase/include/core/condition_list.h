#pragma once

#include "flow_condition.h"
using std::FlowCondition;
#include <vector>
using std::vector;

namespace std{
	class ConditionList{
	private:
		vector<const FlowCondition*>* conditions;
	public:
		ConditionList();
		~ConditionList();
		void addFlowCondition(const FlowCondition*);
	};
};
