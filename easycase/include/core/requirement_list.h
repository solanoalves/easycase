#pragma once

#include "requirement.h"
using std::Requirement;
#include <vector>
using std::vector;

namespace std{
	class RequirementList{
	private:
		vector<Requirement*> requirementList;
	public:
		RequirementList();
		~RequirementList();
		vector<Requirement*>::iterator getFirstRequirement();
		vector<Requirement*>::iterator getLastRequirement();
		Requirement* getRequirementByID(const unsigned int);
		unsigned int size() const;
		void addRequirement(Requirement*);
	};
};