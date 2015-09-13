#include "easycase_facade.h"
using std::EasyCaseFacade;
#include "project.h"
using std::Project;
#include "requirement.h"
using std::Requirement;
#include "use_case.h"
using std::UseCase;
#include "pre_condition.h"
using std::PreCondition;
#include "pos_condition.h"
using std::PosCondition;
#include "flow_action.h"
using std::FlowAction;
#include "condition_list.h"
using std::ConditionList;
#include "actor.h"
using std::Actor;

static Project* project = nullptr;
static Requirement* selectedReq = nullptr;
static UseCase* selectedUC = nullptr;

EasyCaseFacade::~EasyCaseFacade(){
	delete project;
}

void EasyCaseFacade::createProject(){
	if (project){
		delete project;
	}
	project = new Project;
	project->addInfo(project);
}

void EasyCaseFacade::setProjectName(const string projectName){
	project->setName(projectName);
}

void EasyCaseFacade::setProjectLeaderName(const string projectLeaderName){
	project->setProjectLeader(projectLeaderName);
}

void EasyCaseFacade::setProjectInitialDate(const string projectInitialDate){
	project->setInitialDate(projectInitialDate);
}

void EasyCaseFacade::setProjectEndDate(const string projectEndDate){
	project->setEndDate(projectEndDate);
}

void EasyCaseFacade::setProjectDescription(const string projectDescription){
	project->setDescription(projectDescription);
}

void EasyCaseFacade::commitRequirement(const string description){
	Requirement* req;

	if (selectedReq == nullptr){
		req = new Requirement; 
		req->setId(project->getNextRequirementID());
		project->addRequirement(req);
		project->addInfo(req);
	}
	else{
		req = selectedReq;
	}

	req->setDescription(description);
	selectedReq = nullptr;
}

void EasyCaseFacade::loadRequirement(const unsigned int id){
	selectedReq = project->getRequirementByID(id);
}

void EasyCaseFacade::unloadRequirement(){
	selectedReq = nullptr;
}

void EasyCaseFacade::createUseCase(const string status, const string name, const string description){
	UseCase* useCase = new UseCase;
	useCase->setId(selectedReq->getNextUseCaseID());
	Status stat;
	Status::StatusType statType;
	if (status.compare(stat.isIncomplete)){
		statType = Status::Incomplete;
	}
	else if (status.compare(stat.isCreated)){
		statType = Status::Created;
	}
	else if (status.compare(stat.isWorking)){
		statType = Status::Working;
	}
	else if (status.compare(stat.isRevision)){
		statType = Status::Revision;
	}
	else if (status.compare(stat.isDone)){
		statType = Status::Done;
	}
	useCase->setStatus(statType);
	useCase->setName(name);
	useCase->setDescription(description);
	selectedReq->addUseCase(useCase);
	project->addInfo(useCase);
	selectedUC = useCase;
}

void EasyCaseFacade::deleteUseCase(){
	project->deleteInfo(selectedUC->getId());
	selectedReq->deleteUseCase(selectedUC->getId());
	selectedUC = nullptr;
}

void EasyCaseFacade::createPreCondition(const string description, const vector<string> artifacts){
	PreCondition* pc = new PreCondition;
	pc->setId(selectedUC->getNextPreConditionID());
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addExistentArtifact(*it);
	}
	selectedUC->addPreCondition(pc);
	project->addInfo(pc);
}

void EasyCaseFacade::createPosCondition(const string description, const vector<string> artifacts){
	PosCondition* pc = new PosCondition;
	pc->setId(selectedUC->getNextPosConditionID());
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addGeneratedArtifact(*it);
	}
	selectedUC->addPosCondition(pc);
	project->addInfo(pc);
}

void EasyCaseFacade::createFlowAction(const string description, const int actor, const int flow){
	FlowAction* fa = new FlowAction;
	fa->setId(selectedUC->getNextFlowActionID());
	fa->setDescription(description);
	Actor::ActorType actType;
	switch (actor){
	case 0:
		actType = Actor::System;
		break;
	case 1:
		actType = Actor::Persona;
		break;
	default:
		actType = Actor::Unknown;
	}
	fa->setActorType(actType);
	Flow::FlowType flowType;
	switch (flow){
	case 0:
		flowType = Flow::MainFlow;
		break;
	case 1:
		flowType = Flow::AlternativeFlow;
		break;
	default:
		flowType = Flow::UnknownFlow;
	}
	fa->setFlowType(flowType);
	selectedUC->addFlowAction(fa);
	project->addInfo(fa);
}

vector<string> EasyCaseFacade::getRequirements(){
	vector<string> retorno;
	for (vector<Requirement*>::iterator it = project->getFirstRequirement(); it != project->getLastRequirement(); it++){
		retorno.push_back((*it)->getDescription());
	}
	return retorno;
}

vector<string> EasyCaseFacade::getUseCases(){
	vector<string> retorno;
	for (vector<UseCase*>::const_iterator it = selectedReq->firstUseCase(); it != selectedReq->lastUseCase(); it++)
	{		
		retorno.push_back("UC" + std::to_string((*it)->getId())+". Descrição: "+(*it)->getName());
	}
	return retorno;
}

void EasyCaseFacade::loadUseCase(unsigned int ucid){
	for (vector<UseCase*>::iterator it = selectedReq->firstUseCase(); it != selectedReq->lastUseCase(); it++)
	{
		if ((*it)->getId() == ucid){
			selectedUC = *it;
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
	const ConditionList& conditionList = selectedUC->getPreConditionList();
	vector<string> ret;
	string entry;
	for each (const PreCondition* var in conditionList.getConditions())
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
	const ConditionList& conditionList = selectedUC->getPosConditionList();
	vector<string> ret;
	string entry;
	for each (const PosCondition* var in conditionList.getConditions())
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
	const FlowActionList& flowActionList = selectedUC->getFlowActionList();
	vector<string> ret;
	string entry;
	for each(const FlowAction* var in flowActionList.getFlowActionList()){
		if (var->getFlowType() == Flow::MainFlow){
			entry = (var->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + var->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}

vector<string> EasyCaseFacade::ucAlternativeFlow(){
	const FlowActionList& flowActionList = selectedUC->getFlowActionList();
	vector<string> ret;
	string entry;
	for each(const FlowAction* var in flowActionList.getFlowActionList()){
		if (var->getFlowType() == Flow::AlternativeFlow){
			entry = (var->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + var->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}