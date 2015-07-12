#include "system_list.h"
using std::SystemList;

SystemList::SystemList(){

}

SystemList::~SystemList(){

}

void SystemList::addSystem(System* system){
	systems.push_back(system);
}