#ifndef INCLUDE_CONDITION_H_
#define INCLUDE_CONDITION_H_

namespace std{
	struct Condition {
		typedef enum {
			PreCondition,
			PosCondition
		} ConditionType;
	};
};
#endif
