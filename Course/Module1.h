#pragma once

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Threading;
ref class Module1
{
public:

    void writeToFile(String^ fileName, String^ contain) {
        StreamWriter^ sw = gcnew StreamWriter(fileName);
        sw->WriteLine(contain);
        sw->Close();
    }
    void writeToFile(String^ fileName, String^ contain, bool yes) {
        StreamWriter^ sw = gcnew StreamWriter(fileName);
        sw->Write(contain);
        sw->Close();
    }
};

