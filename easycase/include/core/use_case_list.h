#pragma once

#include "use_case.h"
using std::UseCase;
#include <vector>
using std::vector;

namespace std{
	class UseCaseList{
	private:
		vector<UseCase*>* useCaseList;
	public:
		UseCaseList();
		~UseCaseList();
		void addUseCase(UseCase*);
	};
};
