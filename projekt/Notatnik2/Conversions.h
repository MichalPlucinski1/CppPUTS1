#pragma once
#include<iostream>
#include <msclr\marshal_cppstd.h>


class Conversion
{
public:
	static std::string cli2std(System::String^ aString)
	{
		return msclr::interop::marshal_as<std::string>(aString);
	}
	static System::String^ std2cli(std::string aString)
	{
		return msclr::interop::marshal_as<System::String^>(aString);
	}
};

