#pragma once

#include "use_case.h"
using std::UseCase;
#include "pre_condition.h"
using std::PreCondition;
#include "pos_condition.h"
using std::PosCondition;
#include "flow_action.h"
using std::FlowAction;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class EasyCaseFacade{
	private:
		EasyCaseFacade();
	public:
		~EasyCaseFacade();
		static PreCondition* createPreCondition(const string, const vector<string>);
		static PosCondition* createPosCondition(const string, const vector<string>);
		static FlowAction* createFlowAction(string, int, int);
		static UseCase* createUseCase(unsigned int, string, string, string, vector<PreCondition*>, vector<FlowAction*>, vector<PosCondition*>);
	};
}