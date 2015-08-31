#include "easycase_facade.h"
using std::EasyCaseFacade;
#include "use_case.h"
using std::UseCase;
#include "pre_condition.h"
using std::PreCondition;
#include "pos_condition.h"
using std::PosCondition;
#include "flow_action.h"
using std::FlowAction;

static UseCase* useCase;
static vector<PreCondition*> preConditionList;
static vector<FlowAction*> flowActionList;
static vector<PosCondition*> posConditionList;

EasyCaseFacade::~EasyCaseFacade(){

}

void EasyCaseFacade::createPreCondition(const string description, const vector<string> artifacts){
	PreCondition* pc = new PreCondition;
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addExistentArtifact(*it);
	}
	preConditionList.push_back(pc);
}

void EasyCaseFacade::createPosCondition(const string description, const vector<string> artifacts){
	PosCondition* pc = new PosCondition;
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addGeneratedArtifact(*it);
	}
	posConditionList.push_back(pc);
}

void EasyCaseFacade::createFlowAction(const string description, const int actor, const int flow){
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
	flowActionList.push_back(fa);
}

void EasyCaseFacade::createUseCase(unsigned int id, string status, string nome, string descricao){
	UseCase* uc = new UseCase;
	uc->setId(id);
	Status stat;
	if (status.compare(stat.isIncomplete)){
		uc->setStatus(Status::Incomplete);
	}
	else if (status.compare(stat.isCreated)){
		uc->setStatus(Status::Created);
	}
	else if (status.compare(stat.isWorking)){
		uc->setStatus(Status::Working);
	}
	else if (status.compare(stat.isRevision)){
		uc->setStatus(Status::Revision);
	}
	else if (status.compare(stat.isDone)){
		uc->setStatus(Status::Done);
	}
	uc->setName(nome);
	uc->setDescription(descricao);
	for (vector<PreCondition*>::iterator it = preConditionList.begin(); it != preConditionList.end(); ++it){
		uc->addPreCondition(*it);
	}
	for (vector<FlowAction*>::iterator it = flowActionList.begin(); it != flowActionList.end(); ++it){
		uc->addFlowAction(*it);
	}
	for (vector<PosCondition*>::iterator it = posConditionList.begin(); it != posConditionList.end(); ++it){
		uc->addPosCondition(*it);
	}
	useCase = uc;
}