#include "pos_condition.h"
using std::PosCondition;

PosCondition::PosCondition(){

}

PosCondition::~PosCondition(){

}

void PosCondition::addGeneratedArtifact(const string artifact){
	generatedArtifacts.push_back(artifact);
}

vector<string>::const_iterator PosCondition::firstArtifact() const{
	return generatedArtifacts.begin();
}

vector<string>::const_iterator PosCondition::lastArtifact() const{
	return generatedArtifacts.end();
}