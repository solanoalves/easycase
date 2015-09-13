#include "basic_info_list.h"
using std::BasicInfoList;
#include <vector>

BasicInfoList::BasicInfoList(){

};

BasicInfoList::~BasicInfoList(){
	delete &infoList;
};

void BasicInfoList::addInfo(const BasicInfo* info){
	infoList.add(info);
}

void BasicInfoList::deleteInfo(const unsigned int id){
	unsigned int i = 0;
	const BasicInfo* info = infoList.get(i);
	while (info != nullptr){
		if (info->getId() == id){
			infoList.remove(info);
			break;
		}
		info = infoList.get(++i);
	}
}