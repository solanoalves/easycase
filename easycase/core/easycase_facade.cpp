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

void EasyCaseFacade::createRequirement(){
	Requirement* req = new Requirement;
	req->setId(project->getNextRequirementID());
	project->addRequirement(req);
	project->addInfo(req);
	selectedReq = req;
}

void EasyCaseFacade::setRequirementID(const unsigned int id){
	selectedReq->setId(id);
}

void EasyCaseFacade::setRequirementDescription(const string description){
	selectedReq->setDescription(description);
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

void EasyCaseFacade::createUseCase(const bool noId){
	UseCase* useCase = new UseCase;
	if (!noId){
		useCase->setId(selectedReq->getNextUseCaseID());
	}
	selectedReq->addUseCase(useCase);
	project->addInfo(useCase);
	selectedUC = useCase;
}

void EasyCaseFacade::setUseCaseID(const unsigned int id){
	selectedUC->setId(id);
}

void EasyCaseFacade::setUseCaseStatus(const string status){
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
	selectedUC->setStatus(statType);
}

void EasyCaseFacade::setUseCaseName(const string name){
	selectedUC->setName(name);
}

void EasyCaseFacade::setUseCaseDescription(const string description){
	selectedUC->setDescription(description);
}

void EasyCaseFacade::deleteUseCase(){
	project->deleteInfo(selectedUC->getId());
	selectedReq->deleteUseCase(selectedUC->getId());
	selectedUC = nullptr;
}

void EasyCaseFacade::createPreCondition(const string description, const vector<string> artifacts, const unsigned int id){
	PreCondition* pc = new PreCondition;
	if (id == 0){
		pc->setId(selectedUC->getNextPreConditionID());
	}
	else{
		pc->setId(id);
	}
	pc->setDescription(description);
	for (vector<string>::const_iterator it = artifacts.begin(); it != artifacts.end(); ++it){
		pc->addExistentArtifact(*it);
	}
	selectedUC->addPreCondition(pc);
	project->addInfo(pc);
}

void EasyCaseFacade::createPosCondition(const string description, const vector<string> artifacts, const unsigned int id){
	PosCondition* pc = new PosCondition;
	if (id == 0){
		pc->setId(selectedUC->getNextPosConditionID());
	}
	else{
		pc->setId(id);
	}
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

string EasyCaseFacade::projectName(){
	return project->getName();
}
string EasyCaseFacade::projectLeaderName(){
	return project->getProjectLeader();
}
string EasyCaseFacade::projectInitialDate(){
	return project->getInitialDate();
}
string EasyCaseFacade::projectEndDate(){
	return project->getEndDate();
}
string EasyCaseFacade::projectDescription(){
	return project->getDescription();
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
	if (selectedUC == nullptr) return "";
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
	if (selectedUC == nullptr) return "";
	return selectedUC->getName();
}

string EasyCaseFacade::ucDescription(){
	if (selectedUC == nullptr) return "";
	return selectedUC->getDescription();
}

vector<string> EasyCaseFacade::ucPreCondition(){
	vector<string> ret;
	string entry;
	for (vector<const FlowCondition*>::const_iterator it = selectedUC->getFirstPreCondition(); it < selectedUC->getLastPreCondition(); it++)
	{
		entry = "PRE-CONDITIONS:(";
		for (vector<string>::const_iterator art = (*it)->firstArtifact(); art != (*it)->lastArtifact(); ++art){
			entry = entry + *art + ", ";
		}
		entry.substr(0, entry.size() - 2);
		entry = "). DESCRIPTION: " + (*it)->getDescription();
		ret.push_back(entry);
	}
	return ret;
}

vector<string> EasyCaseFacade::ucPosCondition(){
	vector<string> ret;
	string entry;
	for (vector<const FlowCondition*>::const_iterator it = selectedUC->getFirstPosCondition(); it < selectedUC->getLastPosCondition(); it++)
	{
		entry = "POS-CONDITIONS:(";
		for (vector<string>::const_iterator art = (*it)->firstArtifact(); art != (*it)->lastArtifact(); ++art){
			entry = entry + *art + ", ";
		}
		entry.substr(0, entry.size() - 2);
		entry = "). DESCRIPTION: " + (*it)->getDescription();
		ret.push_back(entry);
	}
	return ret;
}

vector<string> EasyCaseFacade::ucMainFlow(){
	vector<string> ret;
	string entry;
	for (vector<const FlowAction*>::const_iterator it = selectedUC->getFirstFlowAction(); it < selectedUC->getLastFlowAction(); it++){
		if ((*it)->getFlowType() == Flow::MainFlow){
			entry = ((*it)->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + (*it)->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}

vector<string> EasyCaseFacade::ucAlternativeFlow(){
	vector<string> ret;
	string entry;
	for (vector<const FlowAction*>::const_iterator it = selectedUC->getFirstFlowAction(); it < selectedUC->getLastFlowAction(); it++){
		if ((*it)->getFlowType() == Flow::AlternativeFlow){
			entry = ((*it)->getActorType() == Actor::System ? "SYSTEM: " : "USER: ") + (*it)->getDescription();
			ret.push_back(entry);
		}
	}
	return ret;
}

string EasyCaseFacade::saveProject(){
	if (project == nullptr) return "";
	Status stat;
	string status;
	string* retorno = new string;
	retorno->append("<project>");
	retorno->append("<projectname>");
	retorno->append(project->getName());
	retorno->append("</projectname>");
	retorno->append("<projectleader>");
	retorno->append(project->getProjectLeader());
	retorno->append("</projectleader>");
	retorno->append("<projectinitialdate>");
	retorno->append(project->getInitialDate());
	retorno->append("</projectinitialdate>");
	retorno->append("<projectenddate>");
	retorno->append(project->getEndDate());
	retorno->append("</projectenddate>");
	retorno->append("<projectdescription>");
	retorno->append(project->getDescription());
	retorno->append("</projectdescription>");
	retorno->append("<projectrequirements>");
	for (vector<Requirement*>::iterator r = project->getFirstRequirement(); r != project->getLastRequirement(); r++){
		retorno->append("<requirement>");
		retorno->append("<requirementid>");
		retorno->append(std::to_string((*r)->getId()));
		retorno->append("</requirementid>");
		retorno->append("<requirementdescription>");
		retorno->append((*r)->getDescription());
		retorno->append("</requirementdescription>");
		retorno->append("<requirementusecases>");
		for (vector<UseCase*>::iterator u = (*r)->firstUseCase(); u != (*r)->lastUseCase(); u++){
			retorno->append("<usecase>");
			retorno->append("<usecaseid>");
			retorno->append(std::to_string((*u)->getId()));
			retorno->append("</usecaseid>");
			retorno->append("<usecasestatus>");
			if ((*u)->getStatus() == Status::Incomplete){
				status = stat.isIncomplete;
			}
			else if ((*u)->getStatus() == Status::Created){
				status = stat.isCreated;
			}
			else if ((*u)->getStatus() == Status::Working){
				status = stat.isWorking;
			}
			else if ((*u)->getStatus() == Status::Revision){
				status = stat.isRevision;
			}
			else if ((*u)->getStatus() == Status::Done){
				status = stat.isDone;
			}
			retorno->append(status);
			retorno->append("</usecasestatus>");
			retorno->append("<usecasename>");
			retorno->append((*u)->getName());
			retorno->append("</usecasename>");
			retorno->append("<usecasedescription>");
			retorno->append((*u)->getDescription());
			retorno->append("</usecasedescription>");
			retorno->append("<usecasepreconditions>");
			for (vector<const FlowCondition*>::const_iterator prc = (*u)->getFirstPreCondition(); prc != (*u)->getLastPreCondition(); prc++){
				retorno->append("<precondition>");
				retorno->append("<preconditionid>");
				retorno->append(std::to_string((*prc)->getId()));
				retorno->append("</preconditionid>");
				retorno->append("<preconditiondescription>");
				retorno->append((*prc)->getDescription());
				retorno->append("</preconditiondescription>");
				retorno->append("<preconditionartifacts>");
				for (vector<string>::const_iterator art = (*prc)->firstArtifact(); art != (*prc)->lastArtifact(); art++){
					retorno->append("<artifact>");
					retorno->append((*art));
					retorno->append("</artifact>");
				}
				retorno->append("</preconditionartifacts>");
				retorno->append("</precondition>");
			}
			retorno->append("</usecasepreconditions>");
			retorno->append("<usecaseposconditions>");
			for (vector<const FlowCondition*>::const_iterator poc = (*u)->getFirstPosCondition(); poc != (*u)->getLastPosCondition(); poc++){
				retorno->append("<poscondition>");
				retorno->append("<posconditionid>");
				retorno->append(std::to_string((*poc)->getId()));
				retorno->append("</posconditionid>");
				retorno->append("<posconditiondescription>");
				retorno->append((*poc)->getDescription());
				retorno->append("</posconditiondescription>");
				retorno->append("<posconditionartifacts>");
				for (vector<string>::const_iterator art = (*poc)->firstArtifact(); art != (*poc)->lastArtifact(); art++){
					retorno->append("<artifact>");
					retorno->append((*art));
					retorno->append("</artifact>");
				}
				retorno->append("</posconditionartifacts>");
				retorno->append("</poscondition>");
			}
			retorno->append("</usecaseposconditions>");
			retorno->append("<usecaseflows>");
			vector<string> ret;
			string entry;
			for (vector<const FlowAction*>::const_iterator it = (*u)->getFirstFlowAction(); it != (*u)->getLastFlowAction(); it++){
				if ((*it)->getFlowType() == Flow::MainFlow){
					retorno->append("<mainflow>");
					retorno->append("<mainflowactor>");
					retorno->append(((*it)->getActorType() == Actor::System ? "system" : "user"));
					retorno->append("</mainflowactor>");
					retorno->append("<mainflowdescription>");
					retorno->append((*it)->getDescription());
					retorno->append("</mainflowdescription>");
					retorno->append("</mainflow>");
				}
				else if ((*it)->getFlowType() == Flow::AlternativeFlow){
					retorno->append("<alternativeflow>");
					retorno->append("<alternativeflowactor>");
					retorno->append(((*it)->getActorType() == Actor::System ? "system" : "user"));
					retorno->append("</alternativeflowactor>");
					retorno->append("<alternativeflowdescription>");
					retorno->append((*it)->getDescription());
					retorno->append("</alternativeflowdescription>");
					retorno->append("</alternativeflow>");
				}
			}
			retorno->append("</usecaseflows>");
			retorno->append("</usecase>");
		}
		retorno->append("</requirementusecases>");
		retorno->append("</requirement>");
	}
	retorno->append("</projectrequirements>");
	retorno->append("</project>");
	return *retorno;
}