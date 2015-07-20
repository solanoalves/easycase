#pragma once

#include <string>
using std::string;

namespace std{
	class BasicInfo{
	private:
		unsigned int id;
		string* name;
		string* description;
	public:
		BasicInfo();
		~BasicInfo();
		void setId(unsigned int);
		unsigned int getId();
		void setName(string*);
		string* getName();
		virtual void setDescription(string*);
		virtual string* getDescription();
		bool operator==(BasicInfo&);		
	};
};