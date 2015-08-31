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
		Status::StatusType status;
	public:
		UseCase();
		~UseCase();
		void addFlowAction(const FlowAction*);
		void addPreCondition(const FlowCondition*);
		void addPosCondition(const FlowCondition*);
		void setStatus(const Status::StatusType);
		ConditionList* getPreConditionList() const;
		ConditionList* getPosConditionList() const;
		FlowActionList* getFlowActionList() const;
		Status::StatusType getStatus() const;
	};
};

