#ifndef INCLUDE_FLOW_CONDITION_H_
#define INCLUDE_FLOW_CONDITION_H_

#include "condition.h"
#include <string>
using std::string;

namespace std{
	class FlowCondition{
	private:
		Condition::ConditionType& conditionType;
		string description;

	public:
		void setConditionType(Condition::ConditionType& conditionType);
		string getConditionType();

		void setDescription(string description);
		string getDescription();
	};
};
#endif /* INCLUDE_FLOW_CONDITION_H_ */
