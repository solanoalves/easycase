#include "use_case_list.h"
using std::UseCaseList;

UseCaseList::UseCaseList(){

}

UseCaseList::~UseCaseList(){

}

void UseCaseList::addUseCase(UseCase* useCase){
	useCaseList->push_back(useCase);
}