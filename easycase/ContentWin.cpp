#include "ContentWin.h"
using easycase::ContentWin;

System::Windows::Forms::TabControl^ ContentWin::GetContent(){
	return contentWinPanel;
}

System::Windows::Forms::Form^ ContentWin::GetParentWin(){
	return parentWin;
}