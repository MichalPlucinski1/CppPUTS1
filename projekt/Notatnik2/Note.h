#pragma once
using namespace System;


ref class Note
{
public:
	
	String^ zawartosc;
	String^ ostatniaedycja;
	int id;
	int id_user;
};

ref class StandardNote : public Note{
public:
	
	
	String^ Nazwa;
	int id_Folder;
	int is_Important;
	String^ CreationDate;
	int is_Public;

};