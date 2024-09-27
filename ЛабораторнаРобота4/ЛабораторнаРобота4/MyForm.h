#pragma once

namespace LabWork4 {
    using namespace System;
    using namespace System::Windows::Forms;

    public ref class MyForm : public Form {
    public:
        MyForm(void) {
            InitializeComponent();
        }

    private:
        void InitializeComponent(void) {
            this->Text = "Мій додаток";
            this->Width = 300;
            this->Height = 200;

            Button^ myButton = gcnew Button();
            myButton->Text = "Натисни мене";
            myButton->Click += gcnew EventHandler(this, &MyForm::OnButtonClick);
            this->Controls->Add(myButton);
        }

        void OnButtonClick(Object^ sender, EventArgs^ e) {
            MessageBox::Show("Кнопка натиснута!");
        }
    };
}