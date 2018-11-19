#include "ANZapp.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(array<String^>^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ANZapp::ANZapp forms;
	Application::Run(%forms);
}
