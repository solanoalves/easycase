#include "ContentWin.h"
using easycase::ContentWin;

System::Windows::Forms::TabControl^ ContentWin::GetContent(){
	this->projectName->Text = marshal_as<String^>(EasyCaseFacade::projectName());
	this->projectLeader->Text = marshal_as<String^>(EasyCaseFacade::projectLeaderName());
	this->initialDate->Text = marshal_as<String^>(EasyCaseFacade::projectInitialDate());
	this->endDate->Text = marshal_as<String^>(EasyCaseFacade::projectEndDate());
	this->projectDescription->Text = marshal_as<String^>(EasyCaseFacade::projectDescription());

	this->requirementListBox->Items->Clear();
	this->requirementHide->Items->Clear();
	for each (std::string var in EasyCaseFacade::getRequirements()){
		this->requirementListBox->Items->Add(marshal_as<String^>(var));
		this->requirementHide->Items->Add(marshal_as<String^>(var));
	}
	return contentWinPanel;
}

System::Windows::Forms::Form^ ContentWin::GetParentWin(){
	return parentWin;
}