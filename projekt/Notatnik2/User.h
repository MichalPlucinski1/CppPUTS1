#pragma once
using namespace System;
#include <msclr\marshal_cppstd.h>
public ref class User {
public:
	int id;
	String^ email;
	String^ imie;
	String^ nazwisko;
	String^ haslo;

	void createUser(int _id, std::string _imie, std::string _nazwisko, String^ _email, String^ _haslo) {
		this->id = _id;
		this->email = _email;
		this->haslo = _haslo;
		this->imie = msclr::interop::marshal_as<System::String^>(_imie);
		this->nazwisko = msclr::interop::marshal_as<System::String^>(_nazwisko);
	}
};