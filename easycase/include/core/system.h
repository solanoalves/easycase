#ifndef INCLUDE_SYSTEM_H_
#define INCLUDE_SYSTEM_H_

#include <string>
using std::string;

namespace std{
	class System{
	private:
		string description;

	public:
		System();
		~System();
		void setDescription(string);
		string getDescription();
	};
};
#endif
