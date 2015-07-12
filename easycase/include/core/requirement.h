#ifndef INCLUDE_REQUIREMENT_H_
#define INCLUDE_REQUIREMENT_H_

#include "use_case_list.h"
using std::UseCaseList;
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class Requirement{
	private:
		string description;
		UseCaseList* useCaseList;
	public:
		Requirement();
		~Requirement();
		void setDescription(string);
		string getDescription();
		void setUseCaseList(UseCaseList*);
	};
};
#endif
