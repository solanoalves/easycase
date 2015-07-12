#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include <string>
using std::string;

namespace std{
	class Component : public BasicInfo{
	public:
		Component();
		~Component();
	};
};

