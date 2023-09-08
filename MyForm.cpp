#include "MyForm.h"
#include "iostream"
#include "conio.h"
#include "Windows.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	stopwatch::MyForm form;
	Application::Run(% form);
}