#include "requirement.h"
using std::Requirement;

Requirement::Requirement(){

}

Requirement::~Requirement(){

}

unsigned int Requirement::getNextUseCaseID() const{
	return useCaseList.size() + 1;
}

vector<UseCase*>::iterator Requirement::firstUseCase(){
	return useCaseList.firstUseCase();
}

vector<UseCase*>::iterator Requirement::lastUseCase(){
	return useCaseList.lastUseCase();
}

void Requirement::addUseCase(UseCase* useCase){
	useCaseList.addUseCase(useCase);
}

void Requirement::deleteUseCase(const unsigned int id){
	useCaseList.deleteUseCase(id);
}