#pragma once
#include "Connection.h"
#include "Folder.h"

namespace Notatnik2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		public: Connection^ con = gcnew Connection();
		public: Folder^ folder = gcnew Folder();

	public:
		MainForm(Connection^ _con)
		{
			
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			con = _con;
			
			lbUser->Text = "ID= " + con->user->id + ",name= " + con->user->imie + ", nazwisko= " + con->user->nazwisko + ", email= " + con->user->email;
			
			LoadNotes();
	
			fillComboFolders(0); //glowny folder id=0
			
			
			
		}
		
		void LoadNotes() {
			try {
				Note^ MainPublicNote = con->GetMainNote(0);
				rtbMainPublicNote->Text = MainPublicNote->zawartosc;
			}
			catch (...) {
				MessageBox::Show("Blad pobierania publicznej notatki glownej");
			}
			try {
				Note^ MainPrivateNote = con->GetMainNote(1);
				rtbMainPrivateNote->Text = MainPrivateNote->zawartosc;
			}
			catch (...) {
				MessageBox::Show("Blad pobierania prywatnej notatki glownej");
			}
		}
		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ lbUser;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RichTextBox^ rtbMainPublicNote;
	private: System::Windows::Forms::Button^ btnEditPublicNote;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ rtbMainPrivateNote;
	private: System::Windows::Forms::ListBox^ lbFolderBox;
	private: System::Windows::Forms::GroupBox^ gbNote;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::RichTextBox^ rtbNote;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ListBox^ lbNotesBox;







	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbUser = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnEditPublicNote = (gcnew System::Windows::Forms::Button());
			this->rtbMainPublicNote = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->rtbMainPrivateNote = (gcnew System::Windows::Forms::RichTextBox());
			this->lbFolderBox = (gcnew System::Windows::Forms::ListBox());
			this->gbNote = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->rtbNote = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lbNotesBox = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->gbNote->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(195, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(346, 85);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbUser
			// 
			this->lbUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbUser->Location = System::Drawing::Point(39, 76);
			this->lbUser->Name = L"lbUser";
			this->lbUser->Size = System::Drawing::Size(599, 76);
			this->lbUser->TabIndex = 1;
			this->lbUser->Text = L"User";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->btnEditPublicNote);
			this->groupBox1->Controls->Add(this->rtbMainPublicNote);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox1->Location = System::Drawing::Point(384, 155);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(290, 184);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Publiczna notatka glowna";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(147, 140);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 38);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Wyczyœæ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// btnEditPublicNote
			// 
			this->btnEditPublicNote->Location = System::Drawing::Point(36, 140);
			this->btnEditPublicNote->Name = L"btnEditPublicNote";
			this->btnEditPublicNote->Size = System::Drawing::Size(88, 38);
			this->btnEditPublicNote->TabIndex = 1;
			this->btnEditPublicNote->Text = L"ZatwierdŸ zmiane";
			this->btnEditPublicNote->UseVisualStyleBackColor = true;
			this->btnEditPublicNote->Click += gcnew System::EventHandler(this, &MainForm::btnEditPublicNote_Click);
			// 
			// rtbMainPublicNote
			// 
			this->rtbMainPublicNote->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbMainPublicNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->rtbMainPublicNote->ForeColor = System::Drawing::Color::Cornsilk;
			this->rtbMainPublicNote->Location = System::Drawing::Point(20, 24);
			this->rtbMainPublicNote->Name = L"rtbMainPublicNote";
			this->rtbMainPublicNote->Size = System::Drawing::Size(249, 110);
			this->rtbMainPublicNote->TabIndex = 0;
			this->rtbMainPublicNote->Text = L"";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->rtbMainPrivateNote);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox2->Location = System::Drawing::Point(55, 155);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(290, 184);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Prywatna notatka glowna";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(147, 140);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 38);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Wyczyœæ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(36, 140);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(88, 38);
			this->button3->TabIndex = 1;
			this->button3->Text = L"ZatwierdŸ zmiane";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// rtbMainPrivateNote
			// 
			this->rtbMainPrivateNote->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbMainPrivateNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->rtbMainPrivateNote->ForeColor = System::Drawing::Color::Cornsilk;
			this->rtbMainPrivateNote->Location = System::Drawing::Point(20, 24);
			this->rtbMainPrivateNote->Name = L"rtbMainPrivateNote";
			this->rtbMainPrivateNote->Size = System::Drawing::Size(249, 110);
			this->rtbMainPrivateNote->TabIndex = 0;
			this->rtbMainPrivateNote->Text = L"";
			// 
			// lbFolderBox
			// 
			this->lbFolderBox->FormattingEnabled = true;
			this->lbFolderBox->ItemHeight = 18;
			this->lbFolderBox->Location = System::Drawing::Point(26, 23);
			this->lbFolderBox->Name = L"lbFolderBox";
			this->lbFolderBox->Size = System::Drawing::Size(278, 76);
			this->lbFolderBox->TabIndex = 4;
			this->lbFolderBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lbFolderBox_SelectedIndexChanged);
			// 
			// gbNote
			// 
			this->gbNote->Controls->Add(this->button4);
			this->gbNote->Controls->Add(this->button5);
			this->gbNote->Controls->Add(this->rtbNote);
			this->gbNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gbNote->Location = System::Drawing::Point(420, 465);
			this->gbNote->Name = L"gbNote";
			this->gbNote->Size = System::Drawing::Size(290, 214);
			this->gbNote->TabIndex = 3;
			this->gbNote->TabStop = false;
			this->gbNote->Text = L"Wybrana Notatka";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(147, 151);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 38);
			this->button4->TabIndex = 2;
			this->button4->Text = L"Wyczyœæ";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(36, 151);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(88, 38);
			this->button5->TabIndex = 1;
			this->button5->Text = L"ZatwierdŸ zmiane";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// rtbNote
			// 
			this->rtbNote->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->rtbNote->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->rtbNote->ForeColor = System::Drawing::Color::Cornsilk;
			this->rtbNote->Location = System::Drawing::Point(20, 24);
			this->rtbNote->Name = L"rtbNote";
			this->rtbNote->Size = System::Drawing::Size(249, 110);
			this->rtbNote->TabIndex = 0;
			this->rtbNote->Text = L"";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->lbNotesBox);
			this->groupBox4->Controls->Add(this->lbFolderBox);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->groupBox4->Location = System::Drawing::Point(55, 465);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(328, 282);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Folder";
			// 
			// lbNotesBox
			// 
			this->lbNotesBox->FormattingEnabled = true;
			this->lbNotesBox->ItemHeight = 18;
			this->lbNotesBox->Location = System::Drawing::Point(26, 140);
			this->lbNotesBox->Name = L"lbNotesBox";
			this->lbNotesBox->Size = System::Drawing::Size(278, 94);
			this->lbNotesBox->TabIndex = 5;
			this->lbNotesBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::lbNotesBox_SelectedIndexChanged);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(755, 752);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->gbNote);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lbUser);
			this->Controls->Add(this->label1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->gbNote->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void btnEditPublicNote_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (
			MessageBox::Show(
				L"Are you sure you want to do this?",
				L"Continue?",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Exclamation
			) == System::Windows::Forms::DialogResult::Yes)
		{
			String^ content = this->rtbMainPublicNote->Text;
			
			if(!(con->UpdateMainNoteContent(0, content)))
			{
				MessageBox::Show("Wyskoczyl blad, ale zaufaj mi, dziala");
			}
			LoadNotes();

			
		}
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (
		MessageBox::Show(
			L"Are you sure you want to do this?",
			L"Continue?",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Exclamation
		) == System::Windows::Forms::DialogResult::Yes)
	{
		this->rtbMainPrivateNote->Text = "";
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (
		MessageBox::Show(
			L"Are you sure you want to do this?",
			L"Continue?",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Exclamation
		) == System::Windows::Forms::DialogResult::Yes)
	{
		this->rtbMainPublicNote->Text = "";
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (
		MessageBox::Show(
			L"Are you sure you want to do this?",
			L"Continue?",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Exclamation
		) == System::Windows::Forms::DialogResult::Yes)
	{
		String^ content = this->rtbMainPrivateNote->Text;
		
		if (!(con->UpdateMainNoteContent(con->user->id, content))){
			MessageBox::Show("Wyskoczyl blad, ale zaufaj mi, dziala");
		}
		LoadNotes();

		
	}
	
}
	   //filling selector with folders
	   private: void fillComboFolders(int id) {
		  
		   this->lbFolderBox->Items->Clear();
		   
		   if (id == 0){
			   this->groupBox4->Text = "Folder g³ówny";
			   con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Id, Name, IsPublic, Owner_Id FROM `Folders` WHERE  (Owner_Id = " + con->user->id +" or Owner_Id is null) and Previous is null;"));
			   folder->previous = 0;
		   }
		   else {
			   con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Name FROM `Folders` WHERE Id = "+ folder->current+";"));
			   con->res->next();
			   folder->nazwa = Conversion::std2cli(con->res->getString("Name"));
			   this->groupBox4->Text = folder->nazwa;

			   con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Id, Name, IsPublic, Owner_Id, CAST(if(Previous is null, 0, Previous)as signed) as Previous FROM `Folders` WHERE (Owner_Id = " + con->user->id + " or Owner_Id is null) and Previous =" + folder->current + ";"));
			  
			   this->lbFolderBox->Items->Add("/.");
			   this->lbFolderBox->Items->Add("..");
			   
			   
		   }
		   while (con->res->next()) {
			   
			   //folder->previous = con->res->getInt("Previous");
			   folder->nazwa = Conversion::std2cli(con->res->getString("Name"));
			   folder->isPublic =(con->res->getInt("IsPublic"));
			  
			   folder->id = con->res->getInt("Id");
			  //folder->previous = con->res->getInt("Previous"); // to nie dzia³A
			   String^ fPublic = "Prywatny";
			   if (folder->isPublic == 1)
				   fPublic = "Publiczny";
			   
			   this->lbFolderBox->Items->Add(folder->id + " " + folder->nazwa + "," + fPublic);
			   
			   // You can use either numeric offsets...
			   //cout << "id = " << res->getInt(1); // getInt(1) returns the first column
			   // ... or column names for accessing results.
			   // The latter is recommended.
			   //cout << ", label = '" << res->getString("label") << "'" << endl;
			   
		   }
		   fillComboNotes(id);
		   
	   }
		// filling selector with notes
		private: void fillComboNotes(int id) {
			
			this->lbNotesBox->Items->Clear();
			if (id == 0)
			{
				std::string _id = std::to_string(con->user->id);

				//MessageBox::Show(Conversion::std2cli(_id));
				con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Id, nazwa, content, IsPublic, IsImportant FROM Notes WHERE folder_id IS NULL AND(User_Id = " + con->user->id + " OR  User_Id IS NULL);"));

			}
			else
			{
				// nie dziala
				con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Id, nazwa, content, IsPublic, IsImportant FROM Notes WHERE folder_id ="+folder->current+" AND(User_Id = " + con->user->id + " OR user_id IS NULL)")); // nie dziala
			}
			
			StandardNote^ note = gcnew StandardNote();
			while (con->res->next()) {
				note->id = con->res->getInt("Id");
				note->Nazwa = Conversion::std2cli(con->res->getString("nazwa"));
				//MessageBox::Show(note->Nazwa);
				note->zawartosc = Conversion::std2cli(con->res->getString("content"));
				note->is_Public = con->res->getInt("IsPublic");
				String^ _public = note->is_Public == 1 ? "publiczna" : "prywatna";
				note->is_Important = con->res->getInt("IsImportant");
				this->lbNotesBox->Items->Add(note->id + "  " +note->Nazwa + " " + _public); // + "," + note->is_Public ? "publiczna": "prywatna"
			}
			
		}

			   //selecting folders, getting into them
private: System::Void lbFolderBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
	String^ Item =  this->lbFolderBox->SelectedItem->ToString();
	
	std::string num = Conversion::cli2std(Item->Substring(0, 2));
	if (num == "..")
	{
		//fillComboFolders(folder->previous);
		MessageBox::Show("przepraszamy, funkcja jeszcze nie dzia³a", "b³¹d");
	}
	else if (num == "/.")
	{
		fillComboFolders(0);
	}
	else
	{
		//MessageBox::Show(Conversion::std2cli(num));
		int _nb = stoi(num);
		//MessageBox::Show(Conversion::std2cli(num));
		folder->current = _nb;
		fillComboFolders(_nb);
	}
	
}
	   //selectiong notes, appearing them in rtbNote
private: System::Void lbNotesBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	String^ Item = this->lbNotesBox->SelectedItem->ToString();
	Item = Item->Substring(0, 2);
	con->res = con->stmt->executeQuery(Conversion::cli2std("SELECT Id, nazwa, content, IsPublic, IsImportant FROM Notes WHERE Id = " + Item + ";"));
	StandardNote^ note = gcnew StandardNote();
	con->res->next();
	note->zawartosc = Conversion::std2cli(con->res->getString("content"));
	note->Nazwa = Conversion::std2cli(con->res->getString("nazwa"));
	this->rtbNote->Text = note->zawartosc;
	this->gbNote->Text = note->Nazwa;
	
}
	   //clear
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (
		MessageBox::Show(
			L"Are you sure you want to do this?",
			L"Continue?",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Exclamation
		) == System::Windows::Forms::DialogResult::Yes)
	{
		this->rtbNote->Text = "";
	}
}
	   //update note from bottom box
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (
		MessageBox::Show(
			L"Are you sure you want to do this?",
			L"Continue?",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Exclamation
		) == System::Windows::Forms::DialogResult::Yes)
	{
		String^ content = this->rtbNote->Text;
		
		String^ Item = this->lbNotesBox->SelectedItem->ToString();
		Item = Item->Substring(0, 2);
		con->stmt->execute(Conversion::cli2std("UPDATE `Notes` SET `Content` = '" + content + "' WHERE `Notes`.`Id` = "+ Item+";"));
		
		LoadNotes();

	}
}
};
}
