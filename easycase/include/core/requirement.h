#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "use_case_list.h"
using std::UseCaseList;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class Requirement : public BasicInfo{
	private:
		UseCaseList* useCaseList;
	public:
		Requirement();
		~Requirement();
		void setUseCaseList(UseCaseList*);
	};
};
