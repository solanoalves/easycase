#include "component_list.h"
using std::ComponentList;

ComponentList::ComponentList(){

}

ComponentList::~ComponentList(){

}

void ComponentList::addComponent(Component* component){
	components->push_back(component);
}