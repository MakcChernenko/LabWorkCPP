/*
           ����������� ������ � 4
      ������������� �����������.
  �������� ������ ������� switch
���� ������: ������ ���������� ������ ������������ ��������� ������ ������� switch
�� ����������� �������� goto, � ����� ������ �������� ?:
��� ���������� ���������� ������� ����������� ��������� � �++.
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