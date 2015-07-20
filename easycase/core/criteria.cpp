#include "criteria.h"
using std::Criteria;

Criteria::Criteria(){

}

Criteria::~Criteria(){

}

void Criteria::setValue(int v){
	value = v;
}

int Criteria::getValue(){
	return value;
}