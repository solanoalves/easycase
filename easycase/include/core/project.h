#pragma once

#include "easy_list.h"
using std::EasyList;
#include "basic_info.h"
using std::BasicInfo;
#include "basic_info_list.h"
using std::BasicInfoList;
#include "requirement_list.h"
using std::RequirementList;
#include <string>
using std::string;

namespace std{
	class Project : public BasicInfo{
	private:
		RequirementList* requirementList;
		BasicInfoList* infoList;
	public:
		Project();
		~Project();
		void setRequirementList(RequirementList*);
		void setBasicInfoList(BasicInfoList*);
	};
};