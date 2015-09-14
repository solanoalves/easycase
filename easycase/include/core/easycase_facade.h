#pragma once

#include <string>
using std::string;
#include <vector>
using std::vector;

namespace std{
	class EasyCaseFacade{
	private:
		EasyCaseFacade();
	public:
		~EasyCaseFacade();
		static bool projectLoaded();
		static void createProject();
		static void setProjectName(const string projectName);
		static void setProjectLeaderName(const string projectLeaderName);
		static void setProjectInitialDate(const string projectInitialDate);
		static void setProjectEndDate(const string projectEndDate);
		static void setProjectDescription(const string projectDescription);
		static void createRequirement();
		static void setRequirementID(const unsigned int);
		static void setRequirementDescription(const string requirementDescription);
		static void commitRequirement(const string requirementDescription);
		static void loadRequirement(const unsigned int id);
		static void unloadRequirement();
		static void createUseCase(const bool noId = false);
		static void setUseCaseID(const unsigned int id);
		static void setUseCaseStatus(const string status);
		static void setUseCaseName(const string name);
		static void setUseCaseDescription(const string description);
		static void deleteUseCase();
		static void deleteUseCaseLists();
		static void createPreCondition(const string description, const vector<string> artifacts, const unsigned int id = 0);
		static void createPosCondition(const string description, const vector<string> artifacts, const unsigned int id = 0);
		static void createFlowAction(const string description, const int actor, const int flow);
		static string saveProject();
		
		static string projectName();
		static string projectLeaderName();
		static string projectInitialDate();
		static string projectEndDate();
		static string projectDescription();
		static vector<string> getRequirements();
		static vector<string> getUseCases();
		static void loadUseCase(unsigned int id);
		static unsigned int ucId();
		static string ucStatus();
		static string ucName();
		static string ucDescription();
		static vector<string> ucPreCondition();
		static vector<string> ucPosCondition();
		static vector<string> ucMainFlow();
		static vector<string> ucAlternativeFlow();
	};
}