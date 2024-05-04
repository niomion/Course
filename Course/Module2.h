#pragma once
#include "Question.h"
#include <cliext/list>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::Threading;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace cliext;

[SerializableAttribute]
ref class Module2
{
public:
	System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
	System::Windows::Forms::Panel^ pnl_auto;
	System::Windows::Forms::Panel^ pnl_loading;

	Module2()
	{
		timer->Interval = 2500;
		timer->Tick += gcnew System::EventHandler(this, &Module2::OnTimerElapsed);
	}

	Module2(System::Windows::Forms::Panel^ panell, System::Windows::Forms::Panel^ panela) 
	: Module2() {
		this->pnl_loading = panell;
		this->pnl_auto = panela;
	}

	void OnTimerElapsed(System::Object^ sender, System::EventArgs^ e)
	{
			timer->Stop();
			pnl_auto->Show();
			pnl_loading->Hide();
	}

	void saveTestToFile(list<Question^>^ questions_list) {
		String^ fileName = "test.dat";
		FileStream^ file = gcnew FileStream(fileName, FileMode::Create);
		BinaryFormatter^ formatter = gcnew BinaryFormatter();

		for each (Question ^ obj in questions_list) {
			formatter->Serialize(file, obj);
		}

		file->Close();
	}

	void readTestFromFile(list<Question^>^ questions_list) {
	String^ fileName = "test.dat";
	FileStream^ file = gcnew FileStream(fileName, FileMode::Open);
	BinaryFormatter^ formatter = gcnew BinaryFormatter();
	questions_list->clear();

	while (file->Position < file->Length)
	{
		Question^ item = dynamic_cast<Question^>(formatter->Deserialize(file));
		questions_list->push_back(item);
	}
	file->Close();
	}

	String^ loadFile(String^ fileName) {
		StreamReader^ sr = gcnew StreamReader(fileName);
		String^ line = sr->ReadToEnd();
		sr->Close();
		String^ text;
		if (!String::IsNullOrEmpty(line)) {
			text = line;
			return text;
		}
		else {
			return "";
		}
	}



};