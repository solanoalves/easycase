#pragma once

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
