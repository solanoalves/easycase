#include "criteria.h"
using std::Criteria;

Criteria::Criteria(){

}

Criteria::~Criteria(){

}

void Criteria::setDescription(string desc){
	description = desc;
}

string Criteria::getDescription(){
	return description;
}

void Criteria::setValue(int v){
	value = v;
}

int Criteria::getValue(){
	return value;
}