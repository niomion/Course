#pragma once
#include "Question.h"
#include <cliext/list>
using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace cliext;

[SerializableAttribute]
ref class Module2
{
public:
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

	String^ loadTheory(String^ fileName) {
		StreamReader^ sr = gcnew StreamReader(fileName);
		String^ line = sr->ReadLine();
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