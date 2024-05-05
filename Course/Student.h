#pragma once
#include "User.h"
#include "CurrentUser.h"
#include "Question.h"
#include "Module2.h"
#include "Module3.h"
#include <cliext/list>
#include <algorithm> 
#include <random> 

namespace Course {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace cliext;
	using namespace System::IO;
	using namespace System::Runtime::Serialization;
	using namespace System::Runtime::Serialization::Formatters::Binary;

	/// <summary>
	/// Summary for Student
	/// </summary>
	public ref class Student : public System::Windows::Forms::Form
	{
	public:
		Student(void)
		{
			InitializeComponent();
			questions_list = gcnew list<Question^>();
			current = questions_list->begin();
			module3.loadQuestions(que);
			CorrectAnswers = gcnew array<int>(que); 
			RadioAnswers = gcnew array<int>(que);
		}
	int que;
	array<int>^ CorrectAnswers;
	array<int>^ RadioAnswers;
	int it;
	int CorrectAnswersInt = 0;
	list<Question^>^ questions_list;
	Module2 module2;
	Module3 module3;
	String^ timern = (module3.readFile("sec.txt").ToString());
	String^ maxq = (module3.readFile("hwque.txt").ToString());
	private: System::Windows::Forms::Button^ button2;
	public:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panelresult;
	private: System::Windows::Forms::Label^ labelresult;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::RichTextBox^ theory;


	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Panel^ testpanel;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ lb_count;


		   list<Question^>::iterator current;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Student()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::ComponentModel::IContainer^ components;
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
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->testpanel = (gcnew System::Windows::Forms::Panel());
			this->lb_count = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panelresult = (gcnew System::Windows::Forms::Panel());
			this->labelresult = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->theory = (gcnew System::Windows::Forms::RichTextBox());
			this->testpanel->SuspendLayout();
			this->panelresult->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Тестування";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Student::button1_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(13, 196);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(13, 170);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(13, 144);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(13, 118);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(33, 193);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(259, 20);
			this->textBox5->TabIndex = 14;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(33, 167);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(259, 20);
			this->textBox4->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(33, 141);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(259, 20);
			this->textBox3->TabIndex = 12;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(33, 115);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(259, 20);
			this->textBox2->TabIndex = 11;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 70);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(285, 20);
			this->textBox1->TabIndex = 10;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(13, 222);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 20;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(33, 219);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(259, 20);
			this->textBox6->TabIndex = 19;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 270);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"<";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Student::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(222, 270);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 22;
			this->button3->Text = L">";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Student::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(121, 270);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"ОК";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Student::button4_Click);
			// 
			// testpanel
			// 
			this->testpanel->BackColor = System::Drawing::Color::MistyRose;
			this->testpanel->Controls->Add(this->lb_count);
			this->testpanel->Controls->Add(this->label4);
			this->testpanel->Controls->Add(this->label2);
			this->testpanel->Controls->Add(this->button5);
			this->testpanel->Controls->Add(this->button4);
			this->testpanel->Controls->Add(this->button3);
			this->testpanel->Controls->Add(this->button2);
			this->testpanel->Controls->Add(this->radioButton5);
			this->testpanel->Controls->Add(this->textBox6);
			this->testpanel->Controls->Add(this->radioButton4);
			this->testpanel->Controls->Add(this->radioButton3);
			this->testpanel->Controls->Add(this->radioButton2);
			this->testpanel->Controls->Add(this->radioButton1);
			this->testpanel->Controls->Add(this->textBox5);
			this->testpanel->Controls->Add(this->textBox4);
			this->testpanel->Controls->Add(this->textBox3);
			this->testpanel->Controls->Add(this->textBox2);
			this->testpanel->Controls->Add(this->textBox1);
			this->testpanel->Location = System::Drawing::Point(37, 59);
			this->testpanel->Name = L"testpanel";
			this->testpanel->Size = System::Drawing::Size(406, 388);
			this->testpanel->TabIndex = 25;
			this->testpanel->Visible = false;
			// 
			// lb_count
			// 
			this->lb_count->AutoSize = true;
			this->lb_count->Location = System::Drawing::Point(128, 256);
			this->lb_count->Name = L"lb_count";
			this->lb_count->Size = System::Drawing::Size(56, 13);
			this->lb_count->TabIndex = 28;
			this->lb_count->Text = L"NaN/NaN\r\n";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(120, 354);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 13);
			this->label4->TabIndex = 27;
			this->label4->Text = L"Залишилось: ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(100, 242);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Відповідь зарахована";
			this->label2->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(74, 301);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(176, 23);
			this->button5->TabIndex = 25;
			this->button5->Text = L"Завершити тестування";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Student::button5_Click);
			// 
			// panelresult
			// 
			this->panelresult->BackColor = System::Drawing::Color::MistyRose;
			this->panelresult->Controls->Add(this->labelresult);
			this->panelresult->Controls->Add(this->label3);
			this->panelresult->Location = System::Drawing::Point(8, 44);
			this->panelresult->Name = L"panelresult";
			this->panelresult->Size = System::Drawing::Size(501, 171);
			this->panelresult->TabIndex = 26;
			this->panelresult->Visible = false;
			// 
			// labelresult
			// 
			this->labelresult->AutoSize = true;
			this->labelresult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelresult->Location = System::Drawing::Point(156, 111);
			this->labelresult->Name = L"labelresult";
			this->labelresult->Size = System::Drawing::Size(179, 25);
			this->labelresult->TabIndex = 1;
			this->labelresult->Text = L"Ваша оцінка N/N\r\n";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(141, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(205, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"ТЕСТ ЗАВЕРШЕНО";
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(93, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 23);
			this->button6->TabIndex = 27;
			this->button6->Text = L"Навчальний матеріал";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Student::button6_Click_1);
			// 
			// theory
			// 
			this->theory->BackColor = System::Drawing::Color::MistyRose;
			this->theory->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->theory->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->theory->Location = System::Drawing::Point(449, 226);
			this->theory->Name = L"theory";
			this->theory->ReadOnly = true;
			this->theory->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->theory->Size = System::Drawing::Size(371, 225);
			this->theory->TabIndex = 28;
			this->theory->Text = L"";
			this->theory->Visible = false;
			// 
			// Student
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 552);
			this->Controls->Add(this->theory);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->panelresult);
			this->Controls->Add(this->testpanel);
			this->Controls->Add(this->button1);
			this->Name = L"Student";
			this->Text = L"Student";
			this->testpanel->ResumeLayout(false);
			this->testpanel->PerformLayout();
			this->panelresult->ResumeLayout(false);
			this->panelresult->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: Void testLoad() {
		module2.readTestFromFile(questions_list);
		module3.shuffle(questions_list);
		current = questions_list->begin();
		for (int i = 0; i < que; i++) {
			CorrectAnswers[i] = -1;
		}
		for (int i = 0; i < que; i++) {
			RadioAnswers[i] = 0;
		}

		CorrectAnswersInt = 0;
		int it = 0;

		for (int i = 0; i < que; i++) {
			CorrectAnswersInt += CorrectAnswers[i];
		}
		if (current == questions_list->begin()) {
			button2->Enabled = false;
		}
	}

	private: Void disableCheckers() {
		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;
		radioButton5->Checked = false;
		switch (RadioAnswers[it])
		{
		case 1:
			radioButton1->Checked = true;
			break;
		case 2:
			radioButton2->Checked = true;
			break;
		case 3:
			radioButton3->Checked = true;
			break;
		case 4:
			radioButton4->Checked = true;
			break;
		case 5:
			radioButton5->Checked = true;
			break;
		default:
			break;
		}
	}

	private: System::Void show_question(Question^ item) {
		this->textBox1->Text = item->question;
		this->textBox2->Text = item->ans1;
		this->textBox3->Text = item->ans2;
		this->textBox4->Text = item->ans3;
		this->textBox5->Text = item->ans4;
		this->textBox6->Text = item->ans5;
		CorrectAnswers[it] == -1 ? label2->Hide() : label2->Show();
	}

	private: Void checkIt() {
		it == 0 ? button2->Enabled = false : button2->Enabled = true;
		it == que-1 ? button3->Enabled = false : button3->Enabled = true;
		lb_count->Text = (it+1).ToString() + "/" + maxq;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		--it;
		checkIt();
		if (current != questions_list->begin()) {
			current--;
			disableCheckers();
			show_question(*current);
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		++it;
		checkIt();
		if (current != questions_list->end()) {
			current++;
			if (current == questions_list->end()) {
				current--;
			}
			else {
				show_question(*current);
			}
		}
		disableCheckers();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label4->Text = "Залишилось: " + timern + " секунд";
		lb_count->Text = it.ToString() + "/" + maxq;
		Module3^ timerm = gcnew Module3(button5, label4);
		timerm->timer->Start();
		testpanel->Show();
		button6->Hide();
		theory->Hide();
		button1->Hide();
		testLoad();
		checkIt();
		show_question(*current);
	}

	private: Void checkAnswers(Question^ item) {
		int checkedButton = -1; 
		if (radioButton1->Checked) checkedButton = 1;
		else if (radioButton2->Checked) checkedButton = 2;
		else if (radioButton3->Checked) checkedButton = 3;
		else if (radioButton4->Checked) checkedButton = 4;
		else if (radioButton5->Checked) checkedButton = 5;

		if (checkedButton == item->c_ans) {
			CorrectAnswers[it] = 1;
		}
		else {
			CorrectAnswers[it] = 0;
		}
		RadioAnswers[it] = checkedButton;
	}

	private: Void sumAnswers() {
		CorrectAnswersInt = 0;
		for (int i = 0; i < que; i++) {
			CorrectAnswersInt += CorrectAnswers[i];
		}
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked ||
			radioButton4->Checked || radioButton5->Checked) {
			checkAnswers(*current);
			sumAnswers();
		}

		bool containsMinusOne = false;
		for (int i = 0; i < que; i++) {
			if (CorrectAnswers[i] == -1) {
				containsMinusOne = true;
				break;
			}
		}

		if (!containsMinusOne) {
			button5->Show();
		}
		else {
			button5->Hide();
		}

		CorrectAnswers[it] == -1 ? label2->Hide() : label2->Show();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	testpanel->Hide();
	int maxRate = module3.readFile("maxRate.txt");
	double result = module3.sumAnswers(CorrectAnswers);
	labelresult->Text = "Ваша оцінка: " + result + "/" + maxRate;
	panelresult->Show();
	module3.writeResult(CorrectAnswers);
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void button6_Click_1(System::Object^ sender, System::EventArgs^ e) {
	String^ theorystr = module2.loadFile("theory.txt");
	theory->Text = theorystr;
	theory->Show();
}

};
}
