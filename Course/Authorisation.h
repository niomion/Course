#pragma once
#include "Registration.h"
#include "CurrentUser.h"
#include "User.h"
#include "Student.h"
#include "Admin.h"

namespace Course {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Authorisation
	/// </summary>
	public ref class Authorisation : public System::Windows::Forms::Form
	{
	public:
		Authorisation(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Authorisation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;


	protected:

	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(60, 60);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(350, 350);
			this->panel2->TabIndex = 7;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(123, 174);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(92, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->UseSystemPasswordChar = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(98, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Пароль";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono Light", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(32, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 35);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Логін";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(35, 85);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(92, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(50, 275);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 65);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Регестрація ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Authorisation::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(50, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 65);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Увійти";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Authorisation::button1_Click);
			// 
			// Authorisation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Authorisation";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorisation";
			this->Load += gcnew System::EventHandler(this, &Authorisation::Authorisation_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Registration^ reg = gcnew Registration();
	reg->ShowDialog();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ login = textBox1->Text;
	String^ password = textBox2->Text;
	
	String^ filename = "userdata.txt";
	if (String::IsNullOrEmpty(login) || String::IsNullOrEmpty(password)) {
		MessageBox::Show("Введіть логін і пароль!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	User^ user = gcnew User();
		int isValid = user->Validate(login, password);
		if (isValid == 1) {
			Student^ student = gcnew Student;
			this->Hide();
			student->ShowDialog();
			this->Show();
		}
		else if (isValid == 2) {
			Admin^ admin = gcnew Admin;
			this->Hide();
			admin->ShowDialog();
			this->Show();
		}
		else {
			MessageBox::Show("Неправильний логін або пароль!", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
}

private: System::Void Authorisation_Load(System::Object^ sender, System::EventArgs^ e) {
	panel2->BringToFront();
}
};
}
