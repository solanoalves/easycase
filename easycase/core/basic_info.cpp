#include "basic_info.h"
using std::BasicInfo;

BasicInfo::BasicInfo(){

}

BasicInfo::~BasicInfo(){

}

void BasicInfo::setId(unsigned int uid){
	id = uid;
}

unsigned int BasicInfo::getId(){
	return id;
}

void BasicInfo::setName(string* uname){
	name = uname;
}

string* BasicInfo::getName(){
	return name;
}

void BasicInfo::setDescription(string* desc){
	description = desc;
}

string* BasicInfo::getDescription(){
	return description;
}