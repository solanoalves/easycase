#pragma once

#include "requirement.h"
using std::Requirement;
#include <vector>
using std::vector;

namespace std{
	class RequirementList{
	private:
		vector<Requirement*>* requirementList;
	public:
		RequirementList();
		~RequirementList();
		void addRequirement(Requirement*);
	};
};