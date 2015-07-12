#ifndef INCLUDE_SYSTEM_LIST_H_
#define INCLUDE_SYSTEM_LIST_H_

#include "system.h"
using std::System;
#include <vector>
using std::vector;

namespace std{
	class SystemList{
	private:
		vector<System*> systems;
	public:
		SystemList();
		~SystemList();
		void addSystem(System*);
	};
};
#endif
