#pragma once

#include "easy_list.h"
using std::EasyList;
#include "basic_info.h"
using std::BasicInfo;

namespace std{
	class BasicInfoList{
	private:
		EasyList<const BasicInfo*> infoList;
	public:
		BasicInfoList();
		~BasicInfoList();
		void addInfo(const BasicInfo* info);
		void deleteInfo(const unsigned int id);
	};
};