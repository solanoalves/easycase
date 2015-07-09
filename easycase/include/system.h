#ifndef INCLUDE_SYSTEM_H_
#define INCLUDE_SYSTEM_H_

#include <string>
using std::string;

namespace std{
	class System{
	private:
		string description;

	public:
		void setDescription();
		string getDescription();
	};
};
#endif /* INCLUDE_SYSTEM_H_ */
