#pragma once

#include <string>
using std::string;

namespace std{
	struct Status{
		typedef enum {
			Incomplete,
			Created,
			Working,
			Revision,
			Done
		} StatusType;
		const string isIncomplete = "Incomplete";
		const string isCreated = "Created";
		const string isWorking = "Working";
		const string isRevision = "Revision";
		const string isDone = "Done";
	};
};
