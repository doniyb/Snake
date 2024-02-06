#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args_main)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Snakegit::MyForm form;
	Application::Run(% form);
	return 0;
}

