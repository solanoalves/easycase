#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "condition.h"
using std::Condition;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class FlowCondition : public BasicInfo{
	private:
		int sequence;
	public:
		FlowCondition();
		~FlowCondition();
		void setSequence(const int&);
		int getSequence() const;
		virtual vector<string>::const_iterator firstArtifact() const = 0;
		virtual vector<string>::const_iterator lastArtifact() const = 0;
	};
};
