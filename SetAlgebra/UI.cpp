#include "UI.h"
#include <Windows.h>
using namespace SetAlgebra; // �������� �������

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew UI);
	return 0;
}
