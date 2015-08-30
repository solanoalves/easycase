#pragma once

#include <string>
using std::string;

namespace std{
	class BasicInfo{
	private:
		unsigned int id;
		string name;
		string description;
	public:
		BasicInfo();
		~BasicInfo();
		void setId(const unsigned int);
		unsigned int getId() const;
		void setName(const string);
		string getName() const;
		virtual void setDescription(const string);
		virtual string getDescription() const;
		bool operator==(BasicInfo&);
	};
};