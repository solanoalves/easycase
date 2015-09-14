#include "UseCaseWin.h"
using easycase::UseCaseWin;

System::Windows::Forms::TabControl^ UseCaseWin::GetContent(){

	this->ucStatus->Text = marshal_as<String^>(EasyCaseFacade::ucStatus());
	this->ucName->Text = marshal_as<String^>(EasyCaseFacade::ucName());
	this->ucDescription->Text = marshal_as<String^>(EasyCaseFacade::ucDescription());

	this->precList->Items->Clear();
	for each(std::string var in EasyCaseFacade::ucPreCondition()){
		this->precList->Items->Add(marshal_as<String^>(var));
	}

	this->poscList->Items->Clear();
	for each(std::string var in EasyCaseFacade::ucPosCondition()){
		this->poscList->Items->Add(marshal_as<String^>(var));
	}

	this->flowList->Items->Clear();
	for each(std::string var in EasyCaseFacade::ucMainFlow()){
		this->flowList->Items->Add(marshal_as<String^>(var));
	}

	this->afList->Items->Clear();
	for each(std::string var in EasyCaseFacade::ucAlternativeFlow()){
		this->afList->Items->Add(marshal_as<String^>(var));
	}
	
	return useCasePanel;
}