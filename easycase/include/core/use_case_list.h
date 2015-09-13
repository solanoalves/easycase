#pragma once

#include "use_case.h"
using std::UseCase;
#include <vector>
using std::vector;

namespace std{
	class UseCaseList{
	private:
		vector<UseCase*> useCaseList;
	public:
		UseCaseList();
		~UseCaseList();
		unsigned int size() const;
		vector<UseCase*>::iterator firstUseCase();
		vector<UseCase*>::iterator lastUseCase();
		void addUseCase(UseCase*);
		void deleteUseCase(const unsigned int id);
	};
};
