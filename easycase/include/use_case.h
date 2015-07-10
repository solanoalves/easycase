#ifndef INCLUDE_USE_CASE_H_
#define INCLUDE_USE_CASE_H_

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
	class UseCase{
	private:
		unsigned int id;
		string name;
		string description;
		FlowActionList* flowActionList;
		ConditionList* preConditionList;
		ConditionList* posConditionList;
		Status* status;

	public:
		UseCase();
		~UseCase();
		void setId(unsigned int);
		unsigned int getId();
		void setDescription(string);
		string getDescription();
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
#endif
