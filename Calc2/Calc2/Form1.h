#pragma once
#include <cmath>
double a,b,Result;
int Zastavica=0;
namespace Calc2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textUnos;
	protected: 
	private: System::Windows::Forms::Button^  btnSaberi;
	private: System::Windows::Forms::Button^  btnOduzmi;
	private: System::Windows::Forms::Button^  btnPomnozi;
	private: System::Windows::Forms::Button^  btnKvadriraj;



	private: System::Windows::Forms::Button^  btnPodijeli;
	private: System::Windows::Forms::Button^  btnKorijenuj;


	private: System::Windows::Forms::Button^  btnJednako;
	private: System::Windows::Forms::Button^  btnSin;
	private: System::Windows::Forms::Button^  btnCos;
	private: System::Windows::Forms::Button^  btnTan;



	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;

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
			this->textUnos = (gcnew System::Windows::Forms::TextBox());
			this->btnSaberi = (gcnew System::Windows::Forms::Button());
			this->btnOduzmi = (gcnew System::Windows::Forms::Button());
			this->btnPomnozi = (gcnew System::Windows::Forms::Button());
			this->btnKvadriraj = (gcnew System::Windows::Forms::Button());
			this->btnPodijeli = (gcnew System::Windows::Forms::Button());
			this->btnKorijenuj = (gcnew System::Windows::Forms::Button());
			this->btnJednako = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textUnos
			// 
			this->textUnos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textUnos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textUnos->Location = System::Drawing::Point(11, 28);
			this->textUnos->Multiline = true;
			this->textUnos->Name = L"textUnos";
			this->textUnos->Size = System::Drawing::Size(263, 47);
			this->textUnos->TabIndex = 0;
			this->textUnos->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textUnos->TextChanged += gcnew System::EventHandler(this, &Form1::textUnos_TextChanged);
			// 
			// btnSaberi
			// 
			this->btnSaberi->FlatAppearance->BorderSize = 3;
			this->btnSaberi->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSaberi->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSaberi->Location = System::Drawing::Point(12, 90);
			this->btnSaberi->Name = L"btnSaberi";
			this->btnSaberi->Size = System::Drawing::Size(83, 45);
			this->btnSaberi->TabIndex = 1;
			this->btnSaberi->Text = L"+";
			this->btnSaberi->UseVisualStyleBackColor = true;
			this->btnSaberi->Click += gcnew System::EventHandler(this, &Form1::btnSaberi_Click);
			// 
			// btnOduzmi
			// 
			this->btnOduzmi->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnOduzmi->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnOduzmi->Location = System::Drawing::Point(11, 140);
			this->btnOduzmi->Name = L"btnOduzmi";
			this->btnOduzmi->Size = System::Drawing::Size(84, 45);
			this->btnOduzmi->TabIndex = 2;
			this->btnOduzmi->Text = L"-";
			this->btnOduzmi->UseVisualStyleBackColor = true;
			this->btnOduzmi->Click += gcnew System::EventHandler(this, &Form1::btnOduzmi_Click);
			// 
			// btnPomnozi
			// 
			this->btnPomnozi->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPomnozi->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPomnozi->Location = System::Drawing::Point(104, 90);
			this->btnPomnozi->Name = L"btnPomnozi";
			this->btnPomnozi->Size = System::Drawing::Size(83, 45);
			this->btnPomnozi->TabIndex = 3;
			this->btnPomnozi->Text = L"*";
			this->btnPomnozi->UseVisualStyleBackColor = true;
			this->btnPomnozi->Click += gcnew System::EventHandler(this, &Form1::btnPomnozi_Click);
			// 
			// btnKvadriraj
			// 
			this->btnKvadriraj->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnKvadriraj->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnKvadriraj->Location = System::Drawing::Point(191, 90);
			this->btnKvadriraj->Name = L"btnKvadriraj";
			this->btnKvadriraj->Size = System::Drawing::Size(83, 45);
			this->btnKvadriraj->TabIndex = 4;
			this->btnKvadriraj->Text = L"^2";
			this->btnKvadriraj->UseVisualStyleBackColor = true;
			this->btnKvadriraj->Click += gcnew System::EventHandler(this, &Form1::btnKvadriraj_Click);
			// 
			// btnPodijeli
			// 
			this->btnPodijeli->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnPodijeli->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnPodijeli->Location = System::Drawing::Point(103, 140);
			this->btnPodijeli->Name = L"btnPodijeli";
			this->btnPodijeli->Size = System::Drawing::Size(84, 45);
			this->btnPodijeli->TabIndex = 5;
			this->btnPodijeli->Text = L"/";
			this->btnPodijeli->UseVisualStyleBackColor = true;
			this->btnPodijeli->Click += gcnew System::EventHandler(this, &Form1::btnPodijeli_Click);
			// 
			// btnKorijenuj
			// 
			this->btnKorijenuj->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnKorijenuj->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnKorijenuj->Location = System::Drawing::Point(191, 140);
			this->btnKorijenuj->Name = L"btnKorijenuj";
			this->btnKorijenuj->Size = System::Drawing::Size(83, 45);
			this->btnKorijenuj->TabIndex = 6;
			this->btnKorijenuj->Text = L"√";
			this->btnKorijenuj->UseVisualStyleBackColor = true;
			this->btnKorijenuj->Click += gcnew System::EventHandler(this, &Form1::btnKorijenuj_Click);
			// 
			// btnJednako
			// 
			this->btnJednako->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnJednako->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnJednako->Location = System::Drawing::Point(191, 191);
			this->btnJednako->Name = L"btnJednako";
			this->btnJednako->Size = System::Drawing::Size(83, 96);
			this->btnJednako->TabIndex = 7;
			this->btnJednako->Text = L"=";
			this->btnJednako->UseVisualStyleBackColor = true;
			this->btnJednako->Click += gcnew System::EventHandler(this, &Form1::btnJednako_Click);
			// 
			// btnSin
			// 
			this->btnSin->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSin->Location = System::Drawing::Point(11, 191);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(84, 45);
			this->btnSin->TabIndex = 8;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = true;
			this->btnSin->Click += gcnew System::EventHandler(this, &Form1::btnSin_Click);
			// 
			// btnCos
			// 
			this->btnCos->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnCos->Location = System::Drawing::Point(103, 191);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(84, 45);
			this->btnCos->TabIndex = 9;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = true;
			this->btnCos->Click += gcnew System::EventHandler(this, &Form1::btnCos_Click);
			// 
			// btnTan
			// 
			this->btnTan->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnTan->Location = System::Drawing::Point(11, 242);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(84, 45);
			this->btnTan->TabIndex = 10;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = true;
			this->btnTan->Click += gcnew System::EventHandler(this, &Form1::btnTan_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(103, 242);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 45);
			this->button8->TabIndex = 11;
			this->button8->Text = L"-";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->menuToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(279, 24);
			this->menuStrip1->TabIndex = 12;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->exitToolStripMenuItem});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(45, 20);
			this->menuToolStripMenuItem->Text = L"Menu";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 295);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnJednako);
			this->Controls->Add(this->btnKorijenuj);
			this->Controls->Add(this->btnPodijeli);
			this->Controls->Add(this->btnKvadriraj);
			this->Controls->Add(this->btnPomnozi);
			this->Controls->Add(this->btnOduzmi);
			this->Controls->Add(this->btnSaberi);
			this->Controls->Add(this->textUnos);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void Funkcija()
		{
			
			switch(Zastavica)
			{
			case 1:
				Result=a+b;
				textUnos->Text = Convert::ToString(Result); 
				break;
			case 2:
				Result=a-b;
				textUnos->Text = Convert::ToString(Result); 
				break;
			case 3:
				Result=a*b;
				textUnos->Text = Convert::ToString(Result);
				break;
			case 4:
				if(b==0){textUnos->Text="Nemoguce dijeliti sa Nulom";}
				Result=a/b;
				textUnos->Text = Convert::ToString(Result);
				break;
			}
			
		 
		}

#pragma endregion
	private: System::Void textUnos_TextChanged(System::Object^  sender, System::EventArgs^  e) 
		 {
		     int temp;
			 if(Int32::TryParse(textUnos->Text, temp))
			 a = float::Parse(textUnos->Text);
		 }
private: System::Void btnSaberi_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Zastavica = 1;
			 b = double::Parse(textUnos->Text);
		 }
private: System::Void btnOduzmi_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Zastavica = 2;
			 b = double::Parse(textUnos->Text);
		 }
private: System::Void btnJednako_Click(System::Object^  sender, System::EventArgs^  e) {
			if(a==0 && b==0)
			{textUnos->Text="Unesi brojeve";}
			 Funkcija();
		 }
private: System::Void btnPomnozi_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Zastavica=3;
			 b=double::Parse(textUnos->Text);
		 }
private: System::Void btnPodijeli_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Zastavica=4;
			 b=double::Parse(textUnos->Text);
		 }
private: System::Void btnKvadriraj_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Result=a*a;
			 textUnos->Text=Convert::ToString(Result);
		 }
private: System::Void btnKorijenuj_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			 Result=sqrt(a);
			 textUnos->Text=Convert::ToString(Result);
		 }
private: System::Void btnSin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Result=sin(a);
			 textUnos->Text=Convert::ToString(Result);
		 }
private: System::Void btnCos_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Result=cos(a);
			 textUnos->Text=Convert::ToString(Result);
		 }
private: System::Void btnTan_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 Result=tan(a);
			 textUnos->Text=Convert::ToString(Result);
		 }
};
}

