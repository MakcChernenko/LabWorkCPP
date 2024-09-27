/*
           Лабораторна робота № 4
      Програмування розгалужень.
  Оператор вибору варіантів switch
Мета роботи: набути практичних навиків використання операторів вибору варіантів switch
та безумовного переходу goto, а також умовної операції ?:
при створюванні програмних проектів розгалуженої структури в С++.
*/
#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    LabWork4::MyForm form;
    Application::Run(% form);
}