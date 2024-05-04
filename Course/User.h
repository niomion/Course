#pragma once

using namespace System;
ref class User
{
	public:
		String^ login;
		String^ username;
		User();
		User(String^, String^, String^);
		void setPassword(String^);
		void WriteUser(String^, String^, String^, bool, String^);
		int Validate(String^, String^);
	private:
		String^ password;
		Boolean isAdmin;
};

