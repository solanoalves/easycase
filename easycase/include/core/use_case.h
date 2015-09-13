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
		FlowActionList flowActionList;
		ConditionList preConditionList;
		ConditionList posConditionList;
		Status::StatusType status;
	public:
		UseCase();
		~UseCase();
		unsigned int getNextPreConditionID() const;
		unsigned int getNextPosConditionID() const;
		unsigned int getNextFlowActionID() const;
		const ConditionList& getPreConditionList() const;
		const ConditionList& getPosConditionList() const;
		const FlowActionList& getFlowActionList() const;
		Status::StatusType getStatus() const;
		void addFlowAction(const FlowAction*);
		void addPreCondition(const FlowCondition*);
		void addPosCondition(const FlowCondition*);
		void setStatus(const Status::StatusType);
	};
};

