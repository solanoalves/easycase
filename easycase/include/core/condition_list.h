#pragma once

#include "flow_condition.h"
using std::FlowCondition;
#include <vector>
using std::vector;

namespace std{
	class ConditionList{
	private:
		vector<const FlowCondition*> conditions;
	public:
		ConditionList();
		~ConditionList();
		vector<const FlowCondition*>::const_iterator getFirstCondition() const;
		vector<const FlowCondition*>::const_iterator getLastCondition() const;
		unsigned int size() const;
		void addFlowCondition(const FlowCondition*);
	};
};
