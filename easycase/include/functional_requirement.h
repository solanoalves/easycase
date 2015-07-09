#ifndef INCLUDE_FUNCTIONAL_REQUIREMENT_H_
#define INCLUDE_FUNCTIONAL_REQUIREMENT_H_

#include "requirement.h"
#include "system_list.h"

namespace std{
	class FunctionalRequirement : public Requirement {
	private:
		SystemList relatedSystems;
	};
};
#endif /* INCLUDE_FUNCTIONAL_REQUIREMENT_H_ */
