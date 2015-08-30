#pragma once

#include "flow_condition.h"
using std::FlowCondition;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class PreCondition : public FlowCondition{
	private:
		vector<string> existentArtifacts;
	public:
		PreCondition();
		~PreCondition();
		void addExistentArtifact(const string);
		virtual vector<string>::const_iterator firstArtifact() const;
		virtual vector<string>::const_iterator lastArtifact() const;
	};
}