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
		string projectLeader;
		string initialDate;
		string endDate;
		RequirementList requirementList;
		BasicInfoList infoList;
	public:
		Project();
		~Project();
		string getProjectLeader() const;
		string getInitialDate() const;
		string getEndDate() const;
		vector<Requirement*>::iterator getFirstRequirement();
		vector<Requirement*>::iterator getLastRequirement();
		Requirement* getRequirementByID(const unsigned int id);
		unsigned int getNextRequirementID() const;
		void setProjectLeader(const string projectLeader);
		void setInitialDate(const string initialDate);
		void setEndDate(const string endDate);
		void addRequirement(Requirement* requirement);
		void addInfo(const BasicInfo* basicInfo);
		void deleteInfo(const unsigned int id);
	};
};