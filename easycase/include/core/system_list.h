#pragma once

#include "system.h"
using std::System;
#include <vector>
using std::vector;

namespace std{
	class SystemList{
	private:
		vector<System*>* systems;
	public:
		SystemList();
		~SystemList();
		void addSystem(System*);
	};
};
