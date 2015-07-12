#include "project.h"
using std::Project;

Project::Project(){

}

Project::~Project(){

}

void Project::setName(string pname){
	name = pname;
}

string Project::getName(){
	return name;
}

void Project::setDescription(string desc){
	return description;
}