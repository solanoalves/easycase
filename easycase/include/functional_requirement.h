#ifndef INCLUDE_FUNCTIONAL_REQUIREMENT_H_
#define INCLUDE_FUNCTIONAL_REQUIREMENT_H_

#include "requirement.h"
using std::Requirement;
#include "system_list.h"
using std::SystemList;

namespace std{
	class FunctionalRequirement : public Requirement {
	private:
		SystemList* systemList;
	public:
		FunctionalRequirement();
		~FunctionalRequirement();
		void setSystemList(SystemList*);
	};
};
#endif
