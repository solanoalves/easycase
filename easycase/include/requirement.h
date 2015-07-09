#ifndef INCLUDE_REQUIREMENT_H_
#define INCLUDE_REQUIREMENT_H_

#include "use_case_list.h"
#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class Requirement{
		string description;
		UseCaseList useCases;
	};
};
#endif /* INCLUDE_REQUIREMENT_H_ */
