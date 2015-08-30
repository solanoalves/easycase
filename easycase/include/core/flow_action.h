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
		Actor::ActorType actorType;
		Flow::FlowType flowType;
		int sequence;
	public:
		FlowAction();
		~FlowAction();
		void setActorType(const Actor::ActorType actorType);
		Actor::ActorType getActorType() const;
		void setFlowType(const Flow::FlowType flowType);
		Flow::FlowType getFlowType() const;
		void setSequence(const int sequence);
		int getSequence() const;
	};
}
