#pragma once

namespace kalkulator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Double liczba, liczba_1, liczba_2;
		Double suma, roznica, iloczyn, iloraz;
		Double bufor;
		Char operacja;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dodawanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ odejmowanieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mnozenieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dzielenieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zamknijToolStripMenuItem;
	public:
		Boolean przecinek;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbInput;
	private: System::Windows::Forms::TextBox^ tbScore;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lbMemory;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnEq;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnPM;
	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnMp;
	private: System::Windows::Forms::Button^ btnMin;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnMC;
	private: System::Windows::Forms::Button^ btnMulti;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnMR;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::TextBox^ tb;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbInput = (gcnew System::Windows::Forms::TextBox());
			this->tbScore = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lbMemory = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnEq = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnPM = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnMp = (gcnew System::Windows::Forms::Button());
			this->btnMin = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnMC = (gcnew System::Windows::Forms::Button());
			this->btnMulti = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnMR = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->tb = (gcnew System::Windows::Forms::TextBox());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dodawanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->odejmowanieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnozenieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dzielenieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 81);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"input";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(233, 81);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"score";
			// 
			// tbInput
			// 
			this->tbInput->Location = System::Drawing::Point(141, 74);
			this->tbInput->Margin = System::Windows::Forms::Padding(2);
			this->tbInput->Name = L"tbInput";
			this->tbInput->Size = System::Drawing::Size(76, 20);
			this->tbInput->TabIndex = 2;
			// 
			// tbScore
			// 
			this->tbScore->Location = System::Drawing::Point(279, 74);
			this->tbScore->Margin = System::Windows::Forms::Padding(2);
			this->tbScore->Name = L"tbScore";
			this->tbScore->Size = System::Drawing::Size(76, 20);
			this->tbScore->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(375, 81);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"memory";
			// 
			// lbMemory
			// 
			this->lbMemory->AutoSize = true;
			this->lbMemory->Location = System::Drawing::Point(422, 81);
			this->lbMemory->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbMemory->Name = L"lbMemory";
			this->lbMemory->Size = System::Drawing::Size(13, 13);
			this->lbMemory->TabIndex = 5;
			this->lbMemory->Text = L"0";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->btnEq, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnPlus, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnDot, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnPM, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->btn0, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnMp, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnMin, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn1, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn2, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->btn3, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnMC, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnMulti, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn6, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn5, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->btn4, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnMR, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnDiv, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn9, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn8, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btn7, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(108, 146);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 4;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(318, 150);
			this->tableLayoutPanel1->TabIndex = 6;
			// 
			// btnEq
			// 
			this->btnEq->Location = System::Drawing::Point(254, 113);
			this->btnEq->Margin = System::Windows::Forms::Padding(2);
			this->btnEq->Name = L"btnEq";
			this->btnEq->Size = System::Drawing::Size(56, 19);
			this->btnEq->TabIndex = 19;
			this->btnEq->Text = L"=";
			this->btnEq->UseVisualStyleBackColor = true;
			this->btnEq->Click += gcnew System::EventHandler(this, &MyForm::btnEq_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(191, 113);
			this->btnPlus->Margin = System::Windows::Forms::Padding(2);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(56, 19);
			this->btnPlus->TabIndex = 18;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnDot
			// 
			this->btnDot->Location = System::Drawing::Point(128, 113);
			this->btnDot->Margin = System::Windows::Forms::Padding(2);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(56, 19);
			this->btnDot->TabIndex = 17;
			this->btnDot->Text = L".";
			this->btnDot->UseVisualStyleBackColor = true;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::btnDot_Click);
			// 
			// btnPM
			// 
			this->btnPM->Location = System::Drawing::Point(65, 113);
			this->btnPM->Margin = System::Windows::Forms::Padding(2);
			this->btnPM->Name = L"btnPM";
			this->btnPM->Size = System::Drawing::Size(56, 19);
			this->btnPM->TabIndex = 16;
			this->btnPM->Text = L"+/-";
			this->btnPM->UseVisualStyleBackColor = true;
			this->btnPM->Click += gcnew System::EventHandler(this, &MyForm::btnPM_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(2, 113);
			this->btn0->Margin = System::Windows::Forms::Padding(2);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(56, 19);
			this->btn0->TabIndex = 15;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::btn0_Click);
			// 
			// btnMp
			// 
			this->btnMp->Location = System::Drawing::Point(254, 76);
			this->btnMp->Margin = System::Windows::Forms::Padding(2);
			this->btnMp->Name = L"btnMp";
			this->btnMp->Size = System::Drawing::Size(56, 19);
			this->btnMp->TabIndex = 14;
			this->btnMp->Text = L"M+";
			this->btnMp->UseVisualStyleBackColor = true;
			this->btnMp->Click += gcnew System::EventHandler(this, &MyForm::btnMp_Click);
			// 
			// btnMin
			// 
			this->btnMin->Location = System::Drawing::Point(191, 76);
			this->btnMin->Margin = System::Windows::Forms::Padding(2);
			this->btnMin->Name = L"btnMin";
			this->btnMin->Size = System::Drawing::Size(56, 19);
			this->btnMin->TabIndex = 13;
			this->btnMin->Text = L"-";
			this->btnMin->UseVisualStyleBackColor = true;
			this->btnMin->Click += gcnew System::EventHandler(this, &MyForm::btnMin_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(128, 76);
			this->btn1->Margin = System::Windows::Forms::Padding(2);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(56, 19);
			this->btn1->TabIndex = 12;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(65, 76);
			this->btn2->Margin = System::Windows::Forms::Padding(2);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(56, 19);
			this->btn2->TabIndex = 11;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(2, 76);
			this->btn3->Margin = System::Windows::Forms::Padding(2);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(56, 19);
			this->btn3->TabIndex = 10;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::btn3_Click);
			// 
			// btnMC
			// 
			this->btnMC->Location = System::Drawing::Point(254, 39);
			this->btnMC->Margin = System::Windows::Forms::Padding(2);
			this->btnMC->Name = L"btnMC";
			this->btnMC->Size = System::Drawing::Size(56, 19);
			this->btnMC->TabIndex = 9;
			this->btnMC->Text = L"MC";
			this->btnMC->UseVisualStyleBackColor = true;
			this->btnMC->Click += gcnew System::EventHandler(this, &MyForm::btnMC_Click);
			// 
			// btnMulti
			// 
			this->btnMulti->Location = System::Drawing::Point(191, 39);
			this->btnMulti->Margin = System::Windows::Forms::Padding(2);
			this->btnMulti->Name = L"btnMulti";
			this->btnMulti->Size = System::Drawing::Size(56, 19);
			this->btnMulti->TabIndex = 8;
			this->btnMulti->Text = L"*";
			this->btnMulti->UseVisualStyleBackColor = true;
			this->btnMulti->Click += gcnew System::EventHandler(this, &MyForm::btnMulti_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(128, 39);
			this->btn6->Margin = System::Windows::Forms::Padding(2);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(56, 19);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(65, 39);
			this->btn5->Margin = System::Windows::Forms::Padding(2);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(56, 19);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(2, 39);
			this->btn4->Margin = System::Windows::Forms::Padding(2);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(56, 19);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::btn4_Click);
			// 
			// btnMR
			// 
			this->btnMR->Location = System::Drawing::Point(254, 2);
			this->btnMR->Margin = System::Windows::Forms::Padding(2);
			this->btnMR->Name = L"btnMR";
			this->btnMR->Size = System::Drawing::Size(56, 19);
			this->btnMR->TabIndex = 4;
			this->btnMR->Text = L"MR";
			this->btnMR->UseVisualStyleBackColor = true;
			this->btnMR->Click += gcnew System::EventHandler(this, &MyForm::btnMR_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(191, 2);
			this->btnDiv->Margin = System::Windows::Forms::Padding(2);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(56, 19);
			this->btnDiv->TabIndex = 3;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(128, 2);
			this->btn9->Margin = System::Windows::Forms::Padding(2);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(56, 19);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(65, 2);
			this->btn8->Margin = System::Windows::Forms::Padding(2);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(56, 19);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(2, 2);
			this->btn7->Margin = System::Windows::Forms::Padding(2);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(56, 19);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::btn7_Click);
			// 
			// tb
			// 
			this->tb->Location = System::Drawing::Point(107, 339);
			this->tb->Margin = System::Windows::Forms::Padding(2);
			this->tb->Multiline = true;
			this->tb->Name = L"tb";
			this->tb->Size = System::Drawing::Size(319, 57);
			this->tb->TabIndex = 7;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Location = System::Drawing::Point(0, 24);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(614, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuStrip2
			// 
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Size = System::Drawing::Size(614, 24);
			this->menuStrip2->TabIndex = 9;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dodawanieToolStripMenuItem,
					this->odejmowanieToolStripMenuItem, this->mnozenieToolStripMenuItem, this->dzielenieToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->plikToolStripMenuItem->Text = L"Plik";
			// 
			// dodawanieToolStripMenuItem
			// 
			this->dodawanieToolStripMenuItem->Name = L"dodawanieToolStripMenuItem";
			this->dodawanieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->dodawanieToolStripMenuItem->Text = L"Dodawanie";
			// 
			// odejmowanieToolStripMenuItem
			// 
			this->odejmowanieToolStripMenuItem->Name = L"odejmowanieToolStripMenuItem";
			this->odejmowanieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->odejmowanieToolStripMenuItem->Text = L"Odejmowanie";
			// 
			// mnozenieToolStripMenuItem
			// 
			this->mnozenieToolStripMenuItem->Name = L"mnozenieToolStripMenuItem";
			this->mnozenieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mnozenieToolStripMenuItem->Text = L"Mnozenie";
			// 
			// dzielenieToolStripMenuItem
			// 
			this->dzielenieToolStripMenuItem->Name = L"dzielenieToolStripMenuItem";
			this->dzielenieToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->dzielenieToolStripMenuItem->Text = L"Dzielenie";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(62, 20);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 442);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->menuStrip2);
			this->Controls->Add(this->tb);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbMemory);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbScore);
			this->Controls->Add(this->tbInput);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		bufor = 0;
	}

	private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 0;
	}
	private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 1;
	}
	private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 2;
	}
	private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 3;
	}
	private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 4;
	}
	private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 5;
	}
	private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 6;
	}
	private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 7;
	}
	private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 8;
	}
	private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbInput->Text = this->tbInput->Text + 9;
	}

	private: System::Void btnDot_Click(System::Object^ sender, System::EventArgs^ e) {
		if (przecinek == false)
		{
			if (this->tbInput->Text != "")
			{
				this->tbInput->Text = this->tbInput->Text + ",";
				przecinek = true;
			}
		}
	}
	private: System::Void btnPM_Click(System::Object^ sender, System::EventArgs^ e) {
		liczba = Convert::ToDouble(this->tbInput->Text);
		if (liczba > 0)
		{
			this->tbInput->Text = "-" + this->tbInput->Text;
		}
		if (liczba < 0)
		{
			liczba = liczba * (-1);
			tbInput->Text = liczba.ToString();
		}
	}
private: System::Void btnMR_Click(System::Object^ sender, System::EventArgs^ e) {
	tbInput->Text = bufor.ToString();
}
private: System::Void btnMC_Click(System::Object^ sender, System::EventArgs^ e) {
	bufor = 0;
	lbMemory->Text = bufor.ToString();

}
private: System::Void btnMp_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbInput->Text != "")
	{
		bufor = bufor + Convert::ToDouble(tbInput->Text);
		this->lbMemory->Text = bufor.ToString();
	}
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbInput->Text != "")
	{
		liczba_1 = Convert::ToDouble(tbInput->Text);
		operacja = '+';
		tbInput->Text = "";
		przecinek = false;
	}
	else
	{
		MessageBox::Show("Wprowadz liczbe!!",
			"B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnMin_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbInput->Text != "")
	{
		liczba_1 = Convert::ToDouble(tbInput->Text);
		operacja = '-';
		tbInput->Text = "";
		przecinek = false;
	}
	else
	{
		MessageBox::Show("Wprowadz liczbe!!",
			"B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnMulti_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbInput->Text != "")
	{
		liczba_1 = Convert::ToDouble(tbInput->Text);
		operacja = '*';
		tbInput->Text = "";
		przecinek = false;
	}
	else
	{
		MessageBox::Show("Wprowadz liczbe!!",
			"B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbInput->Text != "")
	{
		liczba_1 = Convert::ToDouble(tbInput->Text);
		operacja = '/';
		tbInput->Text = "";
		przecinek = false;
	}
	else
	{
		MessageBox::Show("Wprowadz liczbe!!",
			"B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void btnEq_Click(System::Object^ sender, System::EventArgs^ e) {
	if (operacja == '/')
	{
		if (Convert::ToDouble(tbInput->Text) != 0)
		{
			liczba_2 = Convert::ToDouble(tbInput->Text);
			iloraz = liczba_1 / liczba_2;
			tbScore->Text = iloraz.ToString();
			przecinek = false;
			tbInput->Text = "";
	
		}
		else
		{
			MessageBox::Show("Nie dziel przez zero !!",
				"B³ad", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	if (operacja == '*')
	{
			liczba_2 = Convert::ToDouble(tbInput->Text);
			iloczyn = liczba_1 * liczba_2;
			tbScore->Text = iloczyn.ToString();
			przecinek = false;
			tbInput->Text = "";
	}
	if (operacja == '+')
	{
		liczba_2 = Convert::ToDouble(tbInput->Text);
		iloczyn = liczba_1 + liczba_2;
		tbScore->Text = iloczyn.ToString();
		przecinek = false;
		tbInput->Text = "";
	}
	if (operacja == '-')
	{
		liczba_2 = Convert::ToDouble(tbInput->Text);
		iloczyn = liczba_1 - liczba_2;
		tbScore->Text = iloczyn.ToString();
		przecinek = false;
		tbInput->Text = "";
	}
	operacja = ' ';
}



private: System::Void zamknijToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult odp =
		MessageBox::Show("Chceszzz zamknac aplikacje", "PYTANIE",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question,
			MessageBoxDefaultButton::Button2);
	switch (odp)
	{
	case System::Windows::Forms::DialogResult::Yes:
		Close();
	case System::Windows::Forms::DialogResult::No:
		break;
	}
}
};
}
