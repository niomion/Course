#pragma once
using namespace System;

[SerializableAttribute]
ref class Question
{
public:
	String^ question;
	String^ ans1;
	String^ ans2;
	String^ ans3;
	String^ ans4;
	String^ ans5;
	int c_ans;
	Question(String^, String^, String^, String^, String^, String^, int);
	Question();
};

