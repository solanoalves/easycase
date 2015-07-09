#ifndef INCLUDE_CRITERIA_H_
#define INCLUDE_CRITERIA_H_

#include <string>
using std::string;

namespace std{
	class Criteria{
		string description;
		int value;

		void setDescription(string description);
		string getDescription();

		void setValue(int value);
		int getValue();
	};
};
#endif /* INCLUDE_CRITERIA_H_ */
