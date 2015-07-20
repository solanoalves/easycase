#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "flow_condition.h"
using std::FlowCondition;
#include "flow_action_list.h"
using std::FlowActionList;
#include "condition_list.h"
using std::ConditionList;
#include "status.h"
using std::Status;
#include <string>
using std::string;

namespace std{
	class UseCase : public BasicInfo{
	private:
		FlowActionList* flowActionList;
		ConditionList* preConditionList;
		ConditionList* posConditionList;
		Status* status;
	public:
		UseCase();
		~UseCase();
		void setFlowActionList(FlowActionList*);
		void addFlowAction(FlowAction*);
		void setPreConditionList(ConditionList*);
		void addPreCondition(FlowCondition*);
		void setPosConditionList(ConditionList*);
		void addPosCondition(FlowCondition*);
		void setStatus(Status*);
		Status* getStatus();
	};
};

