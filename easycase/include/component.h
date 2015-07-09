#ifndef INCLUDE_COMPONENT_H_
#define INCLUDE_COMPONENT_H_

#include <string>
using std::string;

namespace std{
	class Component{
	private:
		string description;
	public:
		void setDescription(string description);
		string getDescription();
	};
};
#endif /* INCLUDE_COMPONENT_H_ */
