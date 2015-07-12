#pragma once

namespace std{
	struct Status{
		typedef enum {
			Incomplete,
			Created,
			Working,
			Revision,
			Done
		} StatusType;
	};
};
