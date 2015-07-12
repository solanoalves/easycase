#include "criteria_list.h"
using std::CriteriaList;

CriteriaList::CriteriaList(){

}

CriteriaList::~CriteriaList(){

}

void CriteriaList::addCriteria(Criteria* crit){
	criteria->push_back(crit);
}