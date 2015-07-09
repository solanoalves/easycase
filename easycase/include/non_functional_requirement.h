#ifndef INCLUDE_NON_FUNCTIONAL_REQUIREMENT_H_
#define INCLUDE_NON_FUNCTIONAL_REQUIREMENT_H_

#include "criteria_list.h"
#include "requirement.h"

namespace std{
	class NonFunctionalRequirement : public Requirement {
		CriteriaList criteria;
	};
};
#endif /* INCLUDE_NON_FUNCTIONAL_REQUIREMENT_H_ */
