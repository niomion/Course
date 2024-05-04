#pragma once
#include "User.h"
#include "Test.h"
#include "Module2.h"
#include "Module1.h"
#include "Module3.h"
#include "CurrentUser.h"

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
			this->pnl_settings->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marknum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timernum))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quenum))->BeginInit();
			this->pnl_history->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->bt_test->Click += gcnew System::EventHandler(this, &Admin::button1_Click);
			// 
			// bt_quit
			// 
			this->bt_quit->Location = System::Drawing::Point(497, 12);
			this->bt_quit->Name = L"bt_quit";
			this->bt_quit->Size = System::Drawing::Size(125, 31);
			this->bt_quit->TabIndex = 1;
			this->bt_quit->Text = L"Вийти";
			this->bt_quit->UseVisualStyleBackColor = true;
			this->bt_quit->Click += gcnew System::EventHandler(this, &Admin::button2_Click);
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
			// 
			// timernum
			// 
			this->timernum->Location = System::Drawing::Point(211, 82);
			this->timernum->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99999, 0, 0, 0 });
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
			// Admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 306);
			this->Controls->Add(this->pnl_history);
			this->Controls->Add(this->bt_history);
			this->Controls->Add(this->pnl_settings);
			this->Controls->Add(this->bt_settings);
			this->Controls->Add(this->bt_quit);
			this->Controls->Add(this->bt_test);
			this->Name = L"Admin";
			this->Text = L"Admin";
			this->pnl_settings->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->marknum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->timernum))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quenum))->EndInit();
			this->pnl_history->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Test^ createtest = gcnew Test;
		this->Hide();
		createtest->ShowDialog();
		this->Show();
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
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
	}
	private: System::Void bt_history_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ resultstr = module2.loadFile("result.txt");
		historyrich->Text = resultstr;
		pnl_history->Show();
		pnl_settings->Hide();
	}
	private: System::Void btn_clearh_Click(System::Object^ sender, System::EventArgs^ e) {
		historyrich->Text = "";
		module1.writeToFile("result.txt", "", true);
	}
};
}
