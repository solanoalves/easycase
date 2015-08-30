#include "easycase_facade.h"
using std::EasyCaseFacade;

EasyCaseFacade::~EasyCaseFacade(){

}

PreCondition* EasyCaseFacade::createPreCondition(const string description, const vector<string> artifacts){
	PreCondition* pc = new PreCondition;
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addExistentArtifact(*it);
	}
	return pc;
}

PosCondition* EasyCaseFacade::createPosCondition(const string description, const vector<string> artifacts){
	PosCondition* pc = new PosCondition;
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addGeneratedArtifact(*it);
	}
	return pc;
}

FlowAction* EasyCaseFacade::createFlowAction(const string description, const int actor, const int flow){
	FlowAction* fa = new FlowAction;
	fa->setDescription(description);
	switch (actor){
	case 0:
		fa->setActorType(Actor::System);
		break;
	case 1:
		fa->setActorType(Actor::Persona);
		break;
	default:
		fa->setActorType(Actor::Unknown);
	}
	switch (flow){
	case 0:
		fa->setFlowType(Flow::MainFlow);
		break;
	case 1:
		fa->setFlowType(Flow::AlternativeFlow);
		break;
	default:
		fa->setFlowType(Flow::UnknownFlow);
	}
	return fa;
}

UseCase* EasyCaseFacade::createUseCase(string nome, string descricao, vector<PreCondition*> preConditions, vector<FlowAction*> flows, vector<PosCondition*> posConditions){
	UseCase* uc = new UseCase;
	uc->setName(nome);
	uc->setDescription(descricao);
	for (vector<PreCondition*>::iterator it = preConditions.begin(); it != preConditions.end(); ++it){
		uc->addPreCondition(*it);
	}
	for (vector<FlowAction*>::iterator it = flows.begin(); it != flows.end(); ++it){
		uc->addFlowAction(*it);
	}
	for (vector<PosCondition*>::iterator it = posConditions.begin(); it != posConditions.end(); ++it){
		uc->addPosCondition(*it);
	}
	return uc;
}