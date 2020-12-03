#include "MyForm.h"
#include "ClasseStock.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    FinalePOO::MyForm form;
    Application::Run(% form);

    return 0;
}