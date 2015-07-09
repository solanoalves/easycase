#ifndef INCLUDE_FLOW_ACTION_H_
#define INCLUDE_FLOW_ACTION_H_

#include "flow.h"
#include "actor.h"
#include <string>
using std::string;

namespace std{
	class FlowAction{
		Actor::ActorType& actorType;
		string description;
		Flow::FlowType& flowType;
		int sequence;

	public:
		void setActorType(Actor::ActorType& actorType);
		Actor::ActorType getActorType();

		void setDescription();
		string getDescription();

		void setFlowType(Flow::FlowType& flowType);
		Flow::FlowType getFlowType();

		void setSequence(int sequence);
		int getSequence();
	};
}
#endif /* INCLUDE_FLOW_ACTION_H_ */
