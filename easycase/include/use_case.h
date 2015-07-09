#ifndef INCLUDE_USE_CASE_H_
#define INCLUDE_USE_CASE_H_

#include "condition.h"
#include "flow_action_list.h"
#include "condition_list.h"
#include "status.h"
#include <vector>
using std::vector;
#include <string>
using std::string;

namespace std{
	class UseCase{
		unsigned int id;
		string name;
		string description;
		FlowActionList& actions;
		ConditionList& preConditions;
		ConditionList& posConditions;
		Status status;


		void setId(unsigned int id);
		unsigned int getId();

		void setDescription(string description);
		string getDescription();

		void setFlowActionList(FlowActionList& flowActionList);
		void addAction(FlowAction& action);
		vector<FlowAction> getActions();

		void setPreConditionList(ConditionList& preConditionList);
		void addPreCondition(Condition& preCondition);
		vector<Condition> getPreConditions();

		void setPosConditionList(ConditionList& posConditionList);
		void addPosCondition(Condition& posCondition);
		vector<Condition> getPosConditions();

		void setStatus(Status& status);
		Status getStatus();
	};
};
#endif /* INCLUDE_USE_CASE_H_ */
