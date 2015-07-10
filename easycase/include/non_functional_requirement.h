#ifndef INCLUDE_NON_FUNCTIONAL_REQUIREMENT_H_
#define INCLUDE_NON_FUNCTIONAL_REQUIREMENT_H_

#include "criteria_list.h"
using std::CriteriaList;
#include "requirement.h"
using std::Requirement;

namespace std{
	class NonFunctionalRequirement : public Requirement {
	private:
		CriteriaList* criteriaList;
	public:
		NonFunctionalRequirement();
		~NonFunctionalRequirement();
		void setCriteriaList(CriteriaList*);
	};
};
#endif
