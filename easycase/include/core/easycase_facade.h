#pragma once

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
		static void createPreCondition(const string, const vector<string>);
		static void createPosCondition(const string, const vector<string>);
		static void createFlowAction(string, int, int);
		static void createUseCase(unsigned int, string, string, string);
	};
}