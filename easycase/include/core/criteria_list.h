#pragma once

#include "criteria.h"
using std::Criteria;
#include <vector>
using std::vector;

namespace std{
	class CriteriaList{
	private:
		vector<Criteria*>* criteria;
	public:
		CriteriaList();
		~CriteriaList();
		void addCriteria(Criteria*);
	};
}
