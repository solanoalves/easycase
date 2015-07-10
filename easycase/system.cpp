#include "system.h"
using std::System;

System::System(){

}

System::~System(){

}

void System::setDescription(string desc){
	description = desc;
}

string System::getDescription(){
	return description;
}