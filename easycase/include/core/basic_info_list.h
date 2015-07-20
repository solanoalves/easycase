#pragma once

#include "easy_list.h"
using std::EasyList;
#include "basic_info.h"
using std::BasicInfo;

namespace std{
	class BasicInfoList{
	private:
		EasyList<BasicInfo*>* infoList;
	public:
		BasicInfoList();
		~BasicInfoList();
	};
};