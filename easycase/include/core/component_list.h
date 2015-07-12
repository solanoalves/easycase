#pragma once

#include "component.h"
using std::Component;
#include <vector>
using std::vector;

namespace std{
	class ComponentList{
	private:
		vector<Component*>* components;
	public:
		ComponentList();
		~ComponentList();
		void addComponent(Component*);
	};
};
