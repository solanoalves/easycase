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
#include "status.h"
using std::Status;
#include "condition_list.h"
using std::ConditionList;
#include "actor.h"
using std::Actor;

static UseCase* selectedUC;
static vector<UseCase*> useCaseList;
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
	useCaseList.push_back(uc);
}

vector<string> EasyCaseFacade::getUseCases(){
	vector<string> retorno;
	for each (UseCase* var in useCaseList)
	{		
		retorno.push_back("UC" + std::to_string(var->getId())+". Descrição: "+var->getName());
	}
	return retorno;
}

void EasyCaseFacade::loadUseCase(unsigned int ucid){
	for each (UseCase* var in useCaseList)
	{
		if (var->getId() == ucid){
			selectedUC = var;
			break;
		}
	}
}

unsigned int EasyCaseFacade::ucId(){
	return selectedUC->getId();
}

string EasyCaseFacade::ucStatus(){
	Status stat;
	if (selectedUC->getStatus() == Status::Incomplete){
		return stat.isIncomplete;
	}
	else if (selectedUC->getStatus() == Status::Created){
		return stat.isCreated;
	}
	else if (selectedUC->getStatus() == Status::Working){
		return stat.isWorking;
	}
	else if (selectedUC->getStatus() == Status::Revision){
		return stat.isRevision;
	}
	else if (selectedUC->getStatus() == Status::Done){
		return stat.isDone;
	}
	return stat.isIncomplete;
}

string EasyCaseFacade::ucName(){
	return selectedUC->getName();
}

string EasyCaseFacade::ucDescription(){
	return selectedUC->getDescription();
}

vector<string> EasyCaseFacade::ucPreCondition(){
	ConditionList* conditionList = selectedUC->getPreConditionList();
	vector<string> ret;
	string entry;
	for each (const PreCondition* var in conditionList->getConditions())
	{
		entry = "PRE-CONDITIONS:(";
		for (vector<string>::const_iterator it = var->firstArtifact(); it != var->lastArtifact(); ++it){
			entry = entry + *it + ", ";
		}
		entry.substr(0, entry.size() - 2);
		entry = "). DESCRIPTION: " + var->getDescription();
		ret.push_back(entry);
	}
	return ret;
}

vector<string> EasyCaseFacade::ucPosCondition(){
	ConditionList* conditionList = selectedUC->getPosConditionList();
	vector<string> ret;
	string entry;
	for each (const PosCondition* var in conditionList->getConditions())
	{
		entry = "POS-CONDITIONS:(";
		for (vector<string>::const_iterator it = var->firstArtifact(); it != var->lastArtifact(); ++it){
			entry = entry + *it + ", ";
		}
		entry.substr(0, entry.size() - 2);
		entry = "). DESCRIPTION: " + var->getDescription();
		ret.push_back(entry);
	}
	return ret;
}

vector<string> EasyCaseFacade::ucMainFlow(){
	FlowActionList* flowActionList = selectedUC->getFlowActionList();
	vector<string> ret;
	string entry;
	for each(const FlowAction* var in flowActionList->getFlowActionList()){
		if (var->getFlowType() == Flow::MainFlow){
			entry = (var->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + var->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}

vector<string> EasyCaseFacade::ucAlternativeFlow(){
	FlowActionList* flowActionList = selectedUC->getFlowActionList();
	vector<string> ret;
	string entry;
	for each(const FlowAction* var in flowActionList->getFlowActionList()){
		if (var->getFlowType() == Flow::AlternativeFlow){
			entry = (var->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + var->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}