#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "use_case_list.h"
using std::UseCaseList;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class Requirement : public BasicInfo{
	private:
		UseCaseList useCaseList;
	public:
		Requirement();
		~Requirement();
		unsigned int getNextUseCaseID() const;
		vector<UseCase*>::iterator firstUseCase();
		vector<UseCase*>::iterator lastUseCase();
		void addUseCase(UseCase* useCase);
		void deleteUseCase(const unsigned int id);
	};
};
