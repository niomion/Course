#pragma once
#include "CurrentUser.h"
#include "Question.h"
#include <list>
#include <cliext/list>
#include <cliext/vector>
#include <cliext/algorithm>
#include <string>

using namespace System;
using namespace System::Collections::Generic;
using namespace System::IO;
using namespace System::Runtime::Serialization;
using namespace System::Runtime::Serialization::Formatters::Binary;
using namespace cliext;
using namespace System::Threading;
extern std::string currentusername;

ref class Module3
{
private:
    static System::Random^ rng = gcnew System::Random();
    String^ userName = gcnew String(currentusername.c_str());
public:
    System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
    System::Windows::Forms::Button^ button5;
    System::Windows::Forms::Label^ label4; 
    int seconds = readFile("sec.txt");
    
    Module3() 
    {
        timer->Interval = 1000;
        timer->Tick += gcnew System::EventHandler(this, &Module3::OnTimerElapsed);
    }

    Module3(System::Windows::Forms::Button^ button5, System::Windows::Forms::Label^ label4) 
        : Module3() 
    {
        this->button5 = button5;
        this->label4 = label4;
    }

    void OnTimerElapsed(System::Object^ sender, System::EventArgs^ e)
    {
        seconds--;
        label4->Text = "Залишилось: " + seconds.ToString() + " секунд";

        if (seconds == 0)
        {
            button5->PerformClick();
            timer->Stop(); 
        }
    }

    int que = loadQuestions(que);

    int loadQuestions(int% que) {
        String^ fileName1 = "hwque.txt";
            StreamReader^ sr = gcnew StreamReader(fileName1);
            String^ line = sr->ReadLine();
            que = Convert::ToInt32(line);
            sr->Close();
            return que;
    }

    void shuffle(cliext::list<Question^>^ list) {
        cliext::vector<Question^>^ vec = gcnew cliext::vector<Question^>(list->begin(), list->end());

        for (int i = vec->size() - 1; i > 0; --i) {
            int j = rng->Next(i + 1);
            Question^ temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }

        list->clear();
        for each (Question ^ q in vec) {
            list->push_back(q);
        }

        for each (Question^ q in list) {
            ShuffleAnswers(q);
            }
        }

    void ShuffleAnswers(Question^ question) {
        cliext::vector<cliext::pair<String^, int>^>^ vec = gcnew cliext::vector<cliext::pair<String^, int>^>();
        vec->push_back(gcnew cliext::pair<System::String^, int>(question->ans1, 1));
        vec->push_back(gcnew cliext::pair<System::String^, int>(question->ans2, 2));
        vec->push_back(gcnew cliext::pair<System::String^, int>(question->ans3, 3));
        vec->push_back(gcnew cliext::pair<System::String^, int>(question->ans4, 4));
        vec->push_back(gcnew cliext::pair<System::String^, int>(question->ans5, 5));


        for (int i = vec->size() - 1; i > 0; --i) {
            int j = rng->Next(i + 1);
            cliext::pair<String^, int>^ temp = vec[i];
            vec[i] = vec[j];
            vec[j] = temp;
        }

        question->ans1 = vec[0]->first;
        question->ans2 = vec[1]->first;
        question->ans3 = vec[2]->first;
        question->ans4 = vec[3]->first;
        question->ans5 = vec[4]->first;
        for (int i = 0; i < vec->size(); ++i) {
            if (vec[i]->second == question->c_ans) {
                question->c_ans = i + 1;
                break;
            }
        }
    }

    void writeResult(array<int>^ arrayanswers) {
        for (int i = 0; i < que; i++) {
            if (arrayanswers[i] == -1) {
                arrayanswers[i] = 0;
            }
        }
        double totalresult = sumAnswers(arrayanswers);
        DateTime currentTime = DateTime::Now;
        String^ fileName = "result.txt";
        StreamWriter^ sw = gcnew StreamWriter(fileName, true);
        sw->WriteLine("Користувач: " + userName);
        sw->WriteLine("Оцінка: " + totalresult.ToString());
        for (int i = 0; i < que; i++) {
            if (arrayanswers[i] == 0) {
                sw->WriteLine("Питання " + (i+1) + ": Неправильно");
            }
            else {
                sw->WriteLine("Питання " + (i+1) + ": Правильно");
            }
        }
        sw->WriteLine("Дата: " + currentTime.ToString());
        sw->WriteLine("----------------------------");
        sw->Close();
    }

    int readFile(String^ fileName) {
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

    double sumAnswers(array<int>^ arrayanswers) {
        String^ fileName = "maxRate.txt";
        int maxRate = readFile(fileName);
        int result = 0;
        for (int i = 0; i < que; i++) {
            result += arrayanswers[i];
        }
        double totalresult = (static_cast<double>(result) / static_cast<double>(que)) * maxRate;
        totalresult = round(totalresult * 10) / 10;
        return totalresult;
    }



};

