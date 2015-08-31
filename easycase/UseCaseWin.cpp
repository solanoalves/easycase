#include "UseCaseWin.h"
using easycase::UseCaseWin;

System::Windows::Forms::TabControl^ UseCaseWin::GetContent(){
	return useCasePanel;
}

System::Windows::Forms::TabControl^ UseCaseWin::GetContent(int useCaseId){
	EasyCaseFacade::loadUseCase(useCaseId);
	this->ucId->Text = marshal_as<String^>(std::to_string(EasyCaseFacade::ucId()));
	this->ucStatus->Text = marshal_as<String^>(EasyCaseFacade::ucStatus());
	this->ucName->Text = marshal_as<String^>(EasyCaseFacade::ucName());
	this->ucDescription->Text = marshal_as<String^>(EasyCaseFacade::ucDescription());
	return useCasePanel;
}