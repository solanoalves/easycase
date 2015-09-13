#include "use_case_list.h"
using std::UseCaseList;

UseCaseList::UseCaseList(){

}

UseCaseList::~UseCaseList(){

}

unsigned int UseCaseList::size() const{
	return useCaseList.size();
}

vector<UseCase*>::iterator UseCaseList::firstUseCase(){
	return useCaseList.begin();
}
vector<UseCase*>::iterator UseCaseList::lastUseCase(){
	return useCaseList.end();
}

void UseCaseList::addUseCase(UseCase* useCase){
	useCaseList.push_back(useCase);
}

void UseCaseList::deleteUseCase(const unsigned int id){
	vector<UseCase*>::iterator toDeleteIt;
	UseCase* toDelete = nullptr;
	for (vector<UseCase*>::iterator it = useCaseList.begin(); it != useCaseList.end(); it++){
		if ((*it)->getId() == id){
			toDeleteIt = it;
			toDelete = *it;
			break;
		}
	}
	if (toDelete != nullptr){
		useCaseList.erase(toDeleteIt);
		delete toDelete;
	}
}