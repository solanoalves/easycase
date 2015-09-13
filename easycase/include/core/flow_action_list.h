#pragma once

#include "flow_action.h"
using std::FlowAction;
#include <vector>
using std::vector;

namespace std{
	class FlowActionList{
	private:
		vector<const FlowAction*> actions;
	public:
		FlowActionList();
		~FlowActionList();
		vector<const FlowAction*>::const_iterator getFirstFlowAction() const;
		vector<const FlowAction*>::const_iterator getLastFlowAction() const;
		unsigned int size() const;
		void addFlowAction(const FlowAction*);
	};
};
