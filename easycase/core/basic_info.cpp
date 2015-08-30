#include "basic_info.h"
using std::BasicInfo;

BasicInfo::BasicInfo(){

}

BasicInfo::~BasicInfo(){

}

void BasicInfo::setId(const unsigned int uid){
	id = uid;
}

unsigned int BasicInfo::getId() const{
	return id;
}

void BasicInfo::setName(const string uname){
	name = uname;
}

string BasicInfo::getName() const{
	return name;
}

void BasicInfo::setDescription(const string desc){
	description = desc;
}

string BasicInfo::getDescription() const{
	return description;
}

bool BasicInfo::operator==(BasicInfo& basicInfo){
	return (basicInfo.getId() == this->getId());
}