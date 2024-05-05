#pragma once
#include "Question.h"
#include <cliext/list>
#include "Module2.h"
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
	/// —водка дл€ Test
	/// </summary>
	public ref class Test : public System::Windows::Forms::Form
	{
	public:
		Test(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			questions_list = gcnew list<Question^>();
			current = questions_list->begin();
		}
		Module2 module;
		list<Question^>^ questions_list;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel1;
	public:
		list<Question^>::iterator current;

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Test()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(116, 21);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 20);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(65, 75);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(259, 20);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(65, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(259, 20);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(65, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(259, 20);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(65, 153);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(259, 20);
			this->textBox5->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(10, 221);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"<";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Test::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(45, 78);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(14, 13);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(45, 104);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(14, 13);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(45, 130);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(14, 13);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->TabStop = true;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(45, 156);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(14, 13);
			this->radioButton4->TabIndex = 9;
			this->radioButton4->TabStop = true;
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(436, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 10;
			this->button2->Text = L">";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Test::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(188, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Save";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Test::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(278, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Add new";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Test::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(107, 221);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Test::button5_Click);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(45, 182);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(14, 13);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(65, 179);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(259, 20);
			this->textBox6->TabIndex = 14;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Controls->Add(this->radioButton3);
			this->panel1->Controls->Add(this->radioButton2);
			this->panel1->Controls->Add(this->radioButton1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Location = System::Drawing::Point(2, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(522, 253);
			this->panel1->TabIndex = 16;
			// 
			// Test
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(525, 261);
			this->Controls->Add(this->panel1);
			this->Name = L"Test";
			this->Text = L"Test";
			this->Load += gcnew System::EventHandler(this, &Test::Test_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Test_Load(System::Object^ sender, System::EventArgs^ e) {
		if (questions_list->empty()) {
			module.readTestFromFile(questions_list);
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

		module.saveTestToFile(questions_list);
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
			module.saveTestToFile(questions_list);
		}
	}
	};
}
