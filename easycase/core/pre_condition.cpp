#include "pre_condition.h"
using std::PreCondition;

PreCondition::PreCondition(){

}

PreCondition::~PreCondition(){

}

void PreCondition::addExistentArtifact(const string artifact){
	existentArtifacts.push_back(artifact);
}

vector<string>::const_iterator PreCondition::firstArtifact() const{
	return existentArtifacts.begin();
}

vector<string>::const_iterator PreCondition::lastArtifact() const{
	return existentArtifacts.end();
}