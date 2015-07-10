#ifndef INCLUDE_STATUS_H_
#define INCLUDE_STATUS_H_

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
#endif
