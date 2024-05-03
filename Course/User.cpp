#include "User.h"
#include "CurrentUser.h"
#include <string>

using namespace System::Windows::Forms;
using namespace System::IO;

std::string SystemStringToStdString(String^ managedString) {
	array<Char>^ charArray = managedString->ToCharArray();
	std::string nativeString;
	for each (Char c in charArray) {
		nativeString.push_back(static_cast<char>(c));
	}
	return nativeString;
}

User::User() {
	isAdmin = false;
}

User::User(String ^username, String ^login, String ^password) {
	this->username = username;
	this->login = login;
	this->setPassword(password);
}

void User::setPassword(String^ password) {
	this->password = password;
}

void User::WriteUser(String^ username, String^ login, String^ password, bool isAdmin, String^ filename) {
	StreamWriter^ writer = gcnew StreamWriter(filename, true);
	writer->WriteLine(username);
	writer->WriteLine(login);
	writer->WriteLine(password);
	writer->WriteLine(isAdmin ? "1" : "0");
	writer->Close();
}

int User::Validate(String^ fileLogin, String^ filePassword) {
	String^ filename = "userdata.txt";
	int Auth;
	StreamReader^ reader = gcnew StreamReader(filename);
	try {
		while (!reader->EndOfStream) {
			String^ nameFromFile = reader->ReadLine();
			String^ loginFromFile = reader->ReadLine();
			String^ passwordFromFile = reader->ReadLine();
			String^ isAdmin = reader->ReadLine();
			int isAdminInt = Convert::ToInt32(isAdmin);

			if (loginFromFile == fileLogin && passwordFromFile == filePassword) {
				if (isAdminInt == 1) {
					Auth = 2; 
					currentusername = SystemStringToStdString(nameFromFile);
					currentlogin = SystemStringToStdString(loginFromFile);
				}
				else {
					Auth = 1;
					currentusername = SystemStringToStdString(nameFromFile);
					currentlogin = SystemStringToStdString(loginFromFile);
				}
				break;
			}
		}
	}
	catch (Exception^ ex) {
	}
	finally {
		reader->Close();
	}
	return Auth;
}
