#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
ref class Module1
{
public:
    int writeTheory(String^ fileName) {
        StreamReader^ sr = gcnew StreamReader(fileName);
        String^ line = sr->ReadLine();
        sr->Close();
        int number = 0;
        if (!String::IsNullOrEmpty(line)) {
            if (Int32::TryParse(line, number)) {
                return number;
            }
            else {
                return -1;
            }
        }
        else {
            return -1;
        }
    }
};

