#pragma once

namespace std{
	struct Flow{
		typedef enum{
			MainFlow,
			AlternativeFlow,
			UnknownFlow
		} FlowType;
	};
};
