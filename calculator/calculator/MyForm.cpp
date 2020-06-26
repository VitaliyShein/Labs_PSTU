
#include "MyForm.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;
using namespace lator;



[STAThreadAttribute]
int WinMain()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;

}
//int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	Application::Run(gcnew MyForm);
//	return 0;
//}