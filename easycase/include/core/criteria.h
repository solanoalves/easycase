#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include <string>
using std::string;

namespace std{
	class Criteria : public BasicInfo{
	private:
		int value;
	public:
		Criteria();
		~Criteria();
		void setValue(int value);
		int getValue();
	};
};
