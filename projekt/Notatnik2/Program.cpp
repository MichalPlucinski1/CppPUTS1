#include "LoginForm.h"
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles;
	Application::SetCompatibleTextRenderingDefault(false);
	Notatnik2::LoginForm loginForm;

	loginForm.ShowDialog();
	Connection^ con = loginForm.con1;

	if (con->user != nullptr)
	{
		Notatnik2::MainForm mainForm(con);
		Application::Run(% mainForm);
	}
	else {
		MessageBox::Show(" Authenticatiuon canceled ");
	}

}