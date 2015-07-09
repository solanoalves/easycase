#ifndef INCLUDE_CONDITION_LIST_H_
#define INCLUDE_CONDITION_LIST_H_

#include "flow_condition.h"
#include <vector>
using std::vector;

namespace std{
	class ConditionList{
		vector<FlowCondition> conditions;
	};
};
#endif /* INCLUDE_CONDITION_LIST_H_ */
