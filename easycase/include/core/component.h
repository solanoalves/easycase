#ifndef INCLUDE_COMPONENT_H_
#define INCLUDE_COMPONENT_H_

#include <string>
using std::string;

namespace std{
	class Component{
	private:
		string description;
	public:
		Component();
		~Component();
		void setDescription(string);
		string getDescription();
	};
};
#endif
