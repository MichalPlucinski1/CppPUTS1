#pragma once


 #include "Connection.h"
namespace Notatnik2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	/// 
	/// 

	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::TextBox^ tbLogin;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btnExit);
			this->panel1->Controls->Add(this->btnLogin);
			this->panel1->Controls->Add(this->tbPassword);
			this->panel1->Controls->Add(this->tbLogin);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(154, 59);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(541, 441);
			this->panel1->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnExit->Location = System::Drawing::Point(306, 348);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(101, 42);
			this->btnExit->TabIndex = 6;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &LoginForm::btnExit_Click);
			// 
			// btnLogin
			// 
			this->btnLogin->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->btnLogin->Location = System::Drawing::Point(111, 348);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(101, 42);
			this->btnLogin->TabIndex = 5;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = false;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbPassword->Location = System::Drawing::Point(213, 257);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(264, 26);
			this->tbPassword->TabIndex = 4;
			// 
			// tbLogin
			// 
			this->tbLogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbLogin->Location = System::Drawing::Point(213, 168);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(264, 26);
			this->tbLogin->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(65, 256);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(65, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"email";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(149, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(258, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Logowanie";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(70, 112);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Login: a haslo: 2134";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(832, 576);
			this->Controls->Add(this->panel1);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: Connection^ con1;
private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = this->tbLogin->Text;
	String^ haslo = this->tbPassword->Text;

	if (email->Length == 0 || haslo->Length == 0) {
		MessageBox::Show("Prosze uzupelnic wszystkie dane", "Email lub haslo puste");
		return;
	}
	
	try {
		con1 = gcnew Connection();
		String^ email = this->tbLogin->Text;
		String^ haslo = this->tbPassword->Text;
		
		String^ answer = con1->login(email, haslo);
		
		if (answer == "")
		{
			MessageBox::Show("Logowanie udane", "Sukces");
			this->Close();
		}
		else {
			MessageBox::Show(answer,"B³¹d1");
		}
		
	}
	catch (Exception^ e) {
		MessageBox::Show("Nie uda³o siê po³¹czyæ z baz¹ danych. Kod b³êdu:" + e,"B³¹d2");
	}
	
}
};
}
