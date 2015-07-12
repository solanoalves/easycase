#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include <string>
using std::string;

namespace std{
	class System : public BasicInfo{
	public:
		System();
		~System();
	};
};
