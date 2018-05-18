#include "Graph.h"
#include "Comet.cpp"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CometGravitation::MainForm form;
	Application::Run(%form);
}