#ifndef INCLUDE_FLOW_ACTION_LIST_H_
#define INCLUDE_FLOW_ACTION_LIST_H_

#include "flow_action.h"
#include <vector>
using std::vector;

namespace std{
	class FlowActionList{
		vector<FlowAction> actions;
	};
};
#endif /* INCLUDE_FLOW_ACTION_LIST_H_ */
