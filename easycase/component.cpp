#include "component.h"
using std::Component;

Component::Component(){
}

Component::~Component(){
}

void Component::setDescription(string desc){
	description = desc;
}

string Component::getDescription(){
	return description;
}