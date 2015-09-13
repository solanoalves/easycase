#pragma once

#include "pre_condition.h"
using std::PreCondition;
#include "pos_condition.h"
using std::PosCondition;
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
		vector<const FlowCondition*>::const_iterator  getFirstPreCondition() const;
		vector<const FlowCondition*>::const_iterator  getLastPreCondition() const;
		vector<const FlowCondition*>::const_iterator  getFirstPosCondition() const;
		vector<const FlowCondition*>::const_iterator  getLastPosCondition() const;
		vector<const FlowAction*>::const_iterator getFirstFlowAction() const;
		vector<const FlowAction*>::const_iterator getLastFlowAction() const;
		Status::StatusType getStatus() const;
		void addFlowAction(const FlowAction*);
		void addPreCondition(const FlowCondition*);
		void addPosCondition(const FlowCondition*);
		void setStatus(const Status::StatusType);
	};
};

