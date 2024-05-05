#pragma once
#include "User.h"
#include "Test.h"
#include "Module2.h"
#include "Module1.h"
#include "Module3.h"
#include "CurrentUser.h"
#include "Question.h"
#include <cliext/list>

namespace Course {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Admin
	/// </summary>
	public ref class Admin : public System::Windows::Forms::Form
	{
	public:
		Admin(void)
		{
			InitializeComponent();
			questions_list = gcnew list<Question^>();
			current = questions_list->begin();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Admin()
		{
			if (components)
			{
				delete components;
			}
		}
		Module3 module3;
		Module1 module1;
		Module2 module2;
		list<Question^>^ questions_list;
		list<Question^>::iterator current;
	private: System::Windows::Forms::Button^ bt_test;
	private: System::Windows::Forms::Button^ bt_quit;
	protected:

	private: System::Windows::Forms::Button^ bt_settings;
	private: System::Windows::Forms::Panel^ pnl_settings;



	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ bt_que;

	private: System::Windows::Forms::Button^ bt_theory;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ bt_mark;

	private: System::Windows::Forms::Button^ bt_timer;

	private: System::Windows::Forms::Button^ bt_history;
	private: System::Windows::Forms::Button^ bt_save;
	private: System::Windows::Forms::RichTextBox^ theoryrich;
	private: System::Windows::Forms::NumericUpDown^ quenum;
	private: System::Windows::Forms::NumericUpDown^ marknum;
	private: System::Windows::Forms::NumericUpDown^ timernum;
	private: System::Windows::Forms::Panel^ pnl_history;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btn_clearh;

	private: System::Windows::Forms::RichTextBox^ historyrich;
	private: System::Windows::Forms::Panel^ pnl_tests;

	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->bt_test = (gcnew System::Windows::Forms::Button());
			this->bt_quit = (gcnew System::Windows::Forms::Button());
			this->bt_settings = (gcnew System::Windows::Forms::Button());
			this->pnl_settings = (gcnew System::Windows::Forms::Panel());
			this->bt_mark = (gcnew System::Windows::Forms::Button());
			this->bt_timer = (gcnew System::Windows::Forms::Button());
			this->bt_que = (gcnew System::Windows::Forms::Button());
			this->bt_theory = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->bt_save = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->marknum = (gcnew System::Windows::Forms::NumericUpDown());
			this->timernum = (gcnew System::Windows::Forms::NumericUpDown());
			this->quenum = (gcnew System::Windows::Forms::NumericUpDown());
			this->theoryrich = (gcnew System::Windows::Forms::RichTextBox());
			this->bt_history = (gcnew System::Windows::Forms::Button());
			this->pnl_history = (gcnew System::Windows::Forms::Panel());
			this->btn_clearh = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->historyrich = (gcnew System::Windows::Forms::RichTextBox());
			this->pnl_tests = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pnl_settings->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marknum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timernum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quenum))->BeginInit();
			this->pnl_history->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnl_tests->SuspendLayout();
			this->SuspendLayout();
			// 
			// bt_test
			// 
			this->bt_test->Location = System::Drawing::Point(12, 12);
			this->bt_test->Name = L"bt_test";
			this->bt_test->Size = System::Drawing::Size(125, 31);
			this->bt_test->TabIndex = 0;
			this->bt_test->Text = L"Тести";
			this->bt_test->UseVisualStyleBackColor = true;
			this->bt_test->Click += gcnew System::EventHandler(this, &Admin::btn_tests_Click);
			// 
			// bt_quit
			// 
			this->bt_quit->Location = System::Drawing::Point(497, 12);
			this->bt_quit->Name = L"bt_quit";
			this->bt_quit->Size = System::Drawing::Size(125, 31);
			this->bt_quit->TabIndex = 1;
			this->bt_quit->Text = L"Вийти";
			this->bt_quit->UseVisualStyleBackColor = true;
			this->bt_quit->Click += gcnew System::EventHandler(this, &Admin::btn_quit_Click);
			// 
			// bt_settings
			// 
			this->bt_settings->Location = System::Drawing::Point(345, 12);
			this->bt_settings->Name = L"bt_settings";
			this->bt_settings->Size = System::Drawing::Size(125, 31);
			this->bt_settings->TabIndex = 2;
			this->bt_settings->Text = L"Налаштування";
			this->bt_settings->UseVisualStyleBackColor = true;
			this->bt_settings->Click += gcnew System::EventHandler(this, &Admin::bt_settings_Click);
			// 
			// pnl_settings
			// 
			this->pnl_settings->BackColor = System::Drawing::Color::Gainsboro;
			this->pnl_settings->Controls->Add(this->bt_mark);
			this->pnl_settings->Controls->Add(this->bt_timer);
			this->pnl_settings->Controls->Add(this->bt_que);
			this->pnl_settings->Controls->Add(this->bt_theory);
			this->pnl_settings->Controls->Add(this->panel3);
			this->pnl_settings->Controls->Add(this->panel2);
			this->pnl_settings->Location = System::Drawing::Point(-2, 83);
			this->pnl_settings->Name = L"pnl_settings";
			this->pnl_settings->Size = System::Drawing::Size(637, 224);
			this->pnl_settings->TabIndex = 3;
			this->pnl_settings->Visible = false;
			// 
			// bt_mark
			// 
			this->bt_mark->Location = System::Drawing::Point(5, 138);
			this->bt_mark->Name = L"bt_mark";
			this->bt_mark->Size = System::Drawing::Size(87, 39);
			this->bt_mark->TabIndex = 8;
			this->bt_mark->Text = L"Оцінка";
			this->bt_mark->UseVisualStyleBackColor = true;
			this->bt_mark->Click += gcnew System::EventHandler(this, &Admin::bt_mark_Click);
			// 
			// bt_timer
			// 
			this->bt_timer->Location = System::Drawing::Point(5, 93);
			this->bt_timer->Name = L"bt_timer";
			this->bt_timer->Size = System::Drawing::Size(87, 39);
			this->bt_timer->TabIndex = 7;
			this->bt_timer->Text = L"Таймер\r\n";
			this->bt_timer->UseVisualStyleBackColor = true;
			this->bt_timer->Click += gcnew System::EventHandler(this, &Admin::bt_timer_Click);
			// 
			// bt_que
			// 
			this->bt_que->Location = System::Drawing::Point(5, 48);
			this->bt_que->Name = L"bt_que";
			this->bt_que->Size = System::Drawing::Size(87, 39);
			this->bt_que->TabIndex = 6;
			this->bt_que->Text = L"Кількість\r\nпитань\r\n";
			this->bt_que->UseVisualStyleBackColor = true;
			this->bt_que->Click += gcnew System::EventHandler(this, &Admin::bt_que_Click);
			// 
			// bt_theory
			// 
			this->bt_theory->Location = System::Drawing::Point(5, 4);
			this->bt_theory->Name = L"bt_theory";
			this->bt_theory->Size = System::Drawing::Size(87, 39);
			this->bt_theory->TabIndex = 4;
			this->bt_theory->Text = L"Теорія";
			this->bt_theory->UseVisualStyleBackColor = true;
			this->bt_theory->Click += gcnew System::EventHandler(this, &Admin::bt_theory_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Gray;
			this->panel3->Controls->Add(this->bt_save);
			this->panel3->Location = System::Drawing::Point(0, 178);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(637, 50);
			this->panel3->TabIndex = 5;
			// 
			// bt_save
			// 
			this->bt_save->Location = System::Drawing::Point(543, 3);
			this->bt_save->Name = L"bt_save";
			this->bt_save->Size = System::Drawing::Size(87, 39);
			this->bt_save->TabIndex = 9;
			this->bt_save->Text = L"Зберегти";
			this->bt_save->UseVisualStyleBackColor = true;
			this->bt_save->Click += gcnew System::EventHandler(this, &Admin::bt_save_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkGray;
			this->panel2->Controls->Add(this->marknum);
			this->panel2->Controls->Add(this->timernum);
			this->panel2->Controls->Add(this->quenum);
			this->panel2->Controls->Add(this->theoryrich);
			this->panel2->Location = System::Drawing::Point(96, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(541, 177);
			this->panel2->TabIndex = 4;
			// 
			// marknum
			// 
			this->marknum->Location = System::Drawing::Point(211, 82);
			this->marknum->Name = L"marknum";
			this->marknum->Size = System::Drawing::Size(101, 20);
			this->marknum->TabIndex = 7;
			this->marknum->Visible = false;
			this->marknum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// timernum
			// 
			this->timernum->Location = System::Drawing::Point(211, 82);
			this->timernum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
			this->timernum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->timernum->Name = L"timernum";
			this->timernum->Size = System::Drawing::Size(101, 20);
			this->timernum->TabIndex = 6;
			this->timernum->Visible = false;
			// 
			// quenum
			// 
			this->quenum->Location = System::Drawing::Point(211, 81);
			this->quenum->Name = L"quenum";
			this->quenum->Size = System::Drawing::Size(101, 20);
			this->quenum->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->quenum->TabIndex = 5;
			this->quenum->Visible = false;
			// 
			// theoryrich
			// 
			this->theoryrich->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->theoryrich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->theoryrich->Location = System::Drawing::Point(3, 3);
			this->theoryrich->Name = L"theoryrich";
			this->theoryrich->Size = System::Drawing::Size(535, 171);
			this->theoryrich->TabIndex = 0;
			this->theoryrich->Text = L"";
			this->theoryrich->Visible = false;
			// 
			// bt_history
			// 
			this->bt_history->Location = System::Drawing::Point(183, 12);
			this->bt_history->Name = L"bt_history";
			this->bt_history->Size = System::Drawing::Size(125, 31);
			this->bt_history->TabIndex = 4;
			this->bt_history->Text = L"Історія тестів";
			this->bt_history->UseVisualStyleBackColor = true;
			this->bt_history->Click += gcnew System::EventHandler(this, &Admin::bt_history_Click);
			// 
			// pnl_history
			// 
			this->pnl_history->BackColor = System::Drawing::Color::Gainsboro;
			this->pnl_history->Controls->Add(this->btn_clearh);
			this->pnl_history->Controls->Add(this->panel1);
			this->pnl_history->Location = System::Drawing::Point(0, 83);
			this->pnl_history->Name = L"pnl_history";
			this->pnl_history->Size = System::Drawing::Size(635, 225);
			this->pnl_history->TabIndex = 5;
			this->pnl_history->Visible = false;
			// 
			// btn_clearh
			// 
			this->btn_clearh->Location = System::Drawing::Point(4, 3);
			this->btn_clearh->Name = L"btn_clearh";
			this->btn_clearh->Size = System::Drawing::Size(87, 39);
			this->btn_clearh->TabIndex = 5;
			this->btn_clearh->Text = L"Очистити";
			this->btn_clearh->UseVisualStyleBackColor = true;
			this->btn_clearh->Click += gcnew System::EventHandler(this, &Admin::btn_clearh_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gray;
			this->panel1->Controls->Add(this->historyrich);
			this->panel1->Location = System::Drawing::Point(94, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(541, 224);
			this->panel1->TabIndex = 0;
			// 
			// historyrich
			// 
			this->historyrich->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->historyrich->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->historyrich->Location = System::Drawing::Point(3, 3);
			this->historyrich->Name = L"historyrich";
			this->historyrich->ReadOnly = true;
			this->historyrich->Size = System::Drawing::Size(535, 216);
			this->historyrich->TabIndex = 8;
			this->historyrich->Text = L"";
			// 
			// pnl_tests
			// 
			this->pnl_tests->BackColor = System::Drawing::Color::Silver;
			this->pnl_tests->Controls->Add(this->radioButton5);
			this->pnl_tests->Controls->Add(this->textBox6);
			this->pnl_tests->Controls->Add(this->button5);
			this->pnl_tests->Controls->Add(this->button4);
			this->pnl_tests->Controls->Add(this->button3);
			this->pnl_tests->Controls->Add(this->button2);
			this->pnl_tests->Controls->Add(this->radioButton4);
			this->pnl_tests->Controls->Add(this->radioButton3);
			this->pnl_tests->Controls->Add(this->radioButton2);
			this->pnl_tests->Controls->Add(this->radioButton1);
			this->pnl_tests->Controls->Add(this->button1);
			this->pnl_tests->Controls->Add(this->textBox5);
			this->pnl_tests->Controls->Add(this->textBox4);
			this->pnl_tests->Controls->Add(this->textBox3);
			this->pnl_tests->Controls->Add(this->textBox2);
			this->pnl_tests->Controls->Add(this->textBox1);
			this->pnl_tests->Location = System::Drawing::Point(0, 83);
			this->pnl_tests->Name = L"pnl_tests";
			this->pnl_tests->Size = System::Drawing::Size(635, 225);
			this->pnl_tests->TabIndex = 17;
			this->pnl_tests->Visible = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(45, 152);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(65, 149);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(259, 20);
			this->textBox6->TabIndex = 14;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(107, 191);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Admin::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(278, 191);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Add new";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Admin::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(188, 191);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Admin::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(436, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(45, 126);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(45, 100);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(45, 74);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(45, 48);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 191);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(65, 123);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(259, 20);
			this->textBox5->TabIndex = 4;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(65, 97);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(259, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(259, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 45);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(259, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 7);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 20);
			this->textBox1->TabIndex = 0;
			// 
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 306);
			this->Controls->Add(this->pnl_tests);
			this->Controls->Add(this->pnl_history);
			this->Controls->Add(this->bt_history);
			this->Controls->Add(this->pnl_settings);
			this->Controls->Add(this->bt_settings);
			this->Controls->Add(this->bt_quit);
			this->Controls->Add(this->bt_test);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->Load += gcnew System::EventHandler(this, &Admin::Admin_Load);
			this->pnl_settings->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marknum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timernum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quenum))->EndInit();
			this->pnl_history->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->pnl_tests->ResumeLayout(false);
			this->pnl_tests->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void Admin_Load(System::Object^ sender, System::EventArgs^ e) {
			if (questions_list->empty()) {
				module2.readTestFromFile(questions_list);
			}
			if (!questions_list->empty()) {
				current = questions_list->begin();
				show_question(*current);
			}
	}

	private: System::Void show_question(Question^ item) {
		this->textBox1->Text = item->question;
		this->textBox2->Text = item->ans1;
		this->textBox3->Text = item->ans2;
		this->textBox4->Text = item->ans3;
		this->textBox5->Text = item->ans4;
		this->textBox6->Text = item->ans5;

		switch (item->c_ans)
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

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ question = this->textBox1->Text;
		String^ ans1 = this->textBox2->Text;
		String^ ans2 = this->textBox3->Text;
		String^ ans3 = this->textBox4->Text;
		String^ ans4 = this->textBox5->Text;
		String^ ans5 = this->textBox6->Text;

		int c_ans = 0;

		if (radioButton1->Checked) {
			c_ans = 1;
		}
		if (radioButton2->Checked) {
			c_ans = 2;
		}
		if (radioButton3->Checked) {
			c_ans = 3;
		}
		if (radioButton4->Checked) {
			c_ans = 4;
		}
		if (radioButton5->Checked) {
			c_ans = 5;
		}
		if (c_ans == 0) {
			//Show error
		}

		if (current == questions_list->end()) {
			Question^ q = gcnew Question(question, ans1, ans2, ans3, ans4, ans5, c_ans);
			questions_list->push_back(q);
		}
		else {
			(*current)->question = question;
			(*current)->ans1 = ans1;
			(*current)->ans2 = ans2;
			(*current)->ans3 = ans3;
			(*current)->ans4 = ans4;
			(*current)->ans5 = ans5;
			(*current)->c_ans = c_ans;
		}

		module2.saveTestToFile(questions_list);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (current != questions_list->end()) {
			current++;
			if (current == questions_list->end()) {
				current--;
			}
			else {
				show_question(*current);
			}

		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (current != questions_list->begin()) {
			current--;
			show_question(*current);
		}
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBox1->Text = "";
		this->textBox2->Text = "";
		this->textBox3->Text = "";
		this->textBox4->Text = "";
		this->textBox5->Text = "";
		this->textBox6->Text = "";

		radioButton1->Checked = false;
		radioButton2->Checked = false;
		radioButton3->Checked = false;
		radioButton4->Checked = false;
		radioButton5->Checked = false;

		current = questions_list->end();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (current == questions_list->end()) {
			current--;
			show_question(*current);
		}
		else {
			questions_list->remove(*current);
			current = questions_list->begin();
			show_question(*current);
			module2.saveTestToFile(questions_list);
		}
	}

	private: System::Void btn_tests_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_history->Hide();
		pnl_settings->Hide();
		pnl_tests->Show();
	}

	private: System::Void btn_quit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void bt_save_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fileName;
		String^ contain;
		if (theoryrich->Visible) {
			fileName = "theory.txt";
			contain = theoryrich->Text;
		} else if (quenum->Visible) {
			fileName = "hwque.txt";
			contain = (quenum->Value).ToString();
		} else if (timernum->Visible) {
			fileName = "sec.txt";
			contain = (timernum->Value).ToString();
		} else if (marknum->Visible) {
			fileName = "maxRate.txt";
			contain = (marknum->Value).ToString();
		}
		module1.writeToFile(fileName, contain);
	}

	private: System::Void bt_theory_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ theorystr = module2.loadFile("theory.txt");
		theoryrich->Text = theorystr;
		theoryrich->Show();
		quenum->Hide();
		timernum->Hide();
		marknum->Hide();
	}

	private: System::Void bt_que_Click(System::Object^ sender, System::EventArgs^ e) {
		theoryrich->Hide();
		quenum->Show();
		timernum->Hide();
		marknum->Hide();
		int quenu = module3.readFile("hwque.txt");
		quenum->Value = quenu;
	}

	private: System::Void bt_timer_Click(System::Object^ sender, System::EventArgs^ e) {
		theoryrich->Hide();
		quenum->Hide();
		timernum->Show();
		marknum->Hide();
		int timernu = module3.readFile("sec.txt");
		timernum->Value = timernu;
	}

	private: System::Void bt_mark_Click(System::Object^ sender, System::EventArgs^ e) {
		theoryrich->Hide();
		quenum->Hide();
		timernum->Hide();
		marknum->Show();
		int marknu = module3.readFile("maxRate.txt");
		marknum->Value = marknu;
	}
	private: System::Void bt_settings_Click(System::Object^ sender, System::EventArgs^ e) {
		pnl_settings->Show();
		pnl_history->Hide();
		pnl_tests->Hide();
	}
	private: System::Void bt_history_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ resultstr = module2.loadFile("result.txt");
		historyrich->Text = resultstr;
		pnl_history->Show();
		pnl_settings->Hide();
		pnl_tests->Hide();
	}
	private: System::Void btn_clearh_Click(System::Object^ sender, System::EventArgs^ e) {
		historyrich->Text = "";
		module1.writeToFile("result.txt", "", true);
	}

};
}
