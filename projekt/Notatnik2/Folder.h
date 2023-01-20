#pragma once
#include <msclr\marshal_cppstd.h>
using namespace System;
public ref class Folder {
public:
	String^ nazwa;
	int^ id;
	static int previous;
	int^ ownerId;
	String^ CreationDate;
	int isPublic;


	/*
	Folder(int _id, int _previous, std::string _nazwa) {
		this->id = id; this->previous = _previous; this->nazwa = msclr::interop::marshal_as<System::String^>(_nazwa);}
		*/
};