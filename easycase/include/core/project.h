#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "requirement_list.h"
using std::RequirementList;
#include <string>
using std::string;

namespace std{
	class Project{
	private:
		RequirementList* requirementList;
	public:
		Project();
		~Project();
		void setRequirementList(RequirementList*);
	};
};