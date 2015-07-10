#ifndef INCLUDE_FLOW_ACTION_H_
#define INCLUDE_FLOW_ACTION_H_

#include "flow.h"
using std::Flow;
#include "actor.h"
using std::Actor;
#include <string>
using std::string;

namespace std{
	class FlowAction{
	private:
		Actor::ActorType* actorType;
		string description;
		Flow::FlowType* flowType;
		int sequence;
	public:
		FlowAction();
		~FlowAction();
		void setActorType(Actor::ActorType* actorType);
		Actor::ActorType* getActorType();
		void setDescription(string);
		string getDescription();
		void setFlowType(Flow::FlowType* flowType);
		Flow::FlowType* getFlowType();
		void setSequence(int sequence);
		int getSequence();
	};
}
#endif
