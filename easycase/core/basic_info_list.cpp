#include "basic_info_list.h"
using std::BasicInfoList;
#include <vector>
using std::vector;

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

vector<string> BasicInfoList::search(const string text){
	vector<string> retorno;
	unsigned int i = 0;
	const BasicInfo* info = infoList.get(i);
	while (info != nullptr){
		if (!info->getName().empty() && info->getName().find(text) != string::npos){
			retorno.push_back(info->getName());
		}
		if (!info->getDescription().empty() && info->getDescription().find(text) != string::npos){
			retorno.push_back(info->getDescription());
		}
		info = infoList.get(++i);
	}
	return retorno;
}