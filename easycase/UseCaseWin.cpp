#include "UseCaseWin.h"
using easycase::UseCaseWin;

System::Windows::Forms::TabControl^ UseCaseWin::GetContent(){
	this->ucStatus->Text = marshal_as<String^>(EasyCaseFacade::ucStatus());
	this->ucName->Text = marshal_as<String^>(EasyCaseFacade::ucName());
	this->ucDescription->Text = marshal_as<String^>(EasyCaseFacade::ucDescription());
	return useCasePanel;
}