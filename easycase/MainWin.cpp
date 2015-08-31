#include "MainWin.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	easycase::MainWin^ form = gcnew easycase::MainWin();
	Application::Run(form);
}