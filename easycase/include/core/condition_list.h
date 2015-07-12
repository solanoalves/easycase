#ifndef INCLUDE_CONDITION_LIST_H_
#define INCLUDE_CONDITION_LIST_H_

#include "flow_condition.h"
using std::FlowCondition;
#include <vector>
using std::vector;

namespace std{
	class ConditionList{
	private:
		vector<FlowCondition*> conditions;
	public:
		ConditionList();
		~ConditionList();
		void addFlowCondition(FlowCondition*);
	};
};
#endif
