#ifndef INCLUDE_FLOW_ACTION_LIST_H_
#define INCLUDE_FLOW_ACTION_LIST_H_

#include "flow_action.h"
using std::FlowAction;
#include <vector>
using std::vector;

namespace std{
	class FlowActionList{
	private:
		vector<FlowAction*> actions;
	public:
		FlowActionList();
		~FlowActionList();
		void addFlowAction(FlowAction*);
	};
};
#endif
