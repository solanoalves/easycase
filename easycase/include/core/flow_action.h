#pragma once

#include "basic_info.h"
using std::BasicInfo;
#include "flow.h"
using std::Flow;
#include "actor.h"
using std::Actor;
#include <string>
using std::string;

namespace std{
	class FlowAction : public BasicInfo{
	private:
		Actor::ActorType* actorType;
		Flow::FlowType* flowType;
		int sequence;
	public:
		FlowAction();
		~FlowAction();
		void setActorType(Actor::ActorType* actorType);
		Actor::ActorType* getActorType();
		void setFlowType(Flow::FlowType* flowType);
		Flow::FlowType* getFlowType();
		void setSequence(int sequence);
		int getSequence();
	};
}
