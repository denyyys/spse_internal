#pragma once
#include <cmath> //funkce pro matematicke operace (viz. tretiodmocnina_Click)

namespace kalkulacka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  displej;
	protected:

	private: System::Windows::Forms::Button^  cislo7;
	private: System::Windows::Forms::Button^  cislo8;
	private: System::Windows::Forms::Button^  cislo9;
	private: System::Windows::Forms::Button^  delete1;
	private: System::Windows::Forms::Button^  plus;




	private: System::Windows::Forms::Button^  cislo6;

	private: System::Windows::Forms::Button^  cislo5;

	private: System::Windows::Forms::Button^  cislo4;
	private: System::Windows::Forms::Button^  minus;


	private: System::Windows::Forms::Button^  cislo3;

	private: System::Windows::Forms::Button^  cislo2;

	private: System::Windows::Forms::Button^  cislo1;
	private: System::Windows::Forms::Button^  rovnase;
	private: System::Windows::Forms::Button^  carka;



	private: System::Windows::Forms::Button^  cislo0;
	private: System::Windows::Forms::Button^  plusminus;


	private: System::Windows::Forms::Button^  krat;
	private: System::Windows::Forms::Button^  deleno;
	private: System::Windows::Forms::Button^  pi;
	private: System::Windows::Forms::Button^  druhamocnina;
	private: System::Windows::Forms::Button^  factorial;
	private: System::Windows::Forms::Button^  odmocnina;
	private: System::Windows::Forms::Button^  tretimocnina;
	private: System::Windows::Forms::Button^  nantou;
	private: System::Windows::Forms::Button^  tretiodmocnina;
	private: System::Windows::Forms::Button^  mazani;
	private: System::Windows::Forms::Button^  tangens;
	private: System::Windows::Forms::Button^  logaritmus;
	private: System::Windows::Forms::Button^  cotangens;



	private: System::Windows::Forms::Button^  ln;
	private: System::Windows::Forms::Button^  cosinus;
	private: System::Windows::Forms::Button^  sinus;
	private: System::Windows::Forms::Button^  m_plus;
	private: System::Windows::Forms::Button^  m_recall;
	private: System::Windows::Forms::Button^  m_store;



	private: System::Windows::Forms::Button^  m_minus;
	private: System::Windows::Forms::Button^  m_clr;
	private: System::Windows::Forms::Button^  rad_deg;






	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->displej = (gcnew System::Windows::Forms::TextBox());
			this->cislo7 = (gcnew System::Windows::Forms::Button());
			this->cislo8 = (gcnew System::Windows::Forms::Button());
			this->cislo9 = (gcnew System::Windows::Forms::Button());
			this->delete1 = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->cislo6 = (gcnew System::Windows::Forms::Button());
			this->cislo5 = (gcnew System::Windows::Forms::Button());
			this->cislo4 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->cislo3 = (gcnew System::Windows::Forms::Button());
			this->cislo2 = (gcnew System::Windows::Forms::Button());
			this->cislo1 = (gcnew System::Windows::Forms::Button());
			this->rovnase = (gcnew System::Windows::Forms::Button());
			this->carka = (gcnew System::Windows::Forms::Button());
			this->cislo0 = (gcnew System::Windows::Forms::Button());
			this->plusminus = (gcnew System::Windows::Forms::Button());
			this->krat = (gcnew System::Windows::Forms::Button());
			this->deleno = (gcnew System::Windows::Forms::Button());
			this->pi = (gcnew System::Windows::Forms::Button());
			this->druhamocnina = (gcnew System::Windows::Forms::Button());
			this->factorial = (gcnew System::Windows::Forms::Button());
			this->odmocnina = (gcnew System::Windows::Forms::Button());
			this->tretimocnina = (gcnew System::Windows::Forms::Button());
			this->nantou = (gcnew System::Windows::Forms::Button());
			this->tretiodmocnina = (gcnew System::Windows::Forms::Button());
			this->mazani = (gcnew System::Windows::Forms::Button());
			this->tangens = (gcnew System::Windows::Forms::Button());
			this->logaritmus = (gcnew System::Windows::Forms::Button());
			this->cotangens = (gcnew System::Windows::Forms::Button());
			this->ln = (gcnew System::Windows::Forms::Button());
			this->cosinus = (gcnew System::Windows::Forms::Button());
			this->sinus = (gcnew System::Windows::Forms::Button());
			this->m_plus = (gcnew System::Windows::Forms::Button());
			this->m_recall = (gcnew System::Windows::Forms::Button());
			this->m_store = (gcnew System::Windows::Forms::Button());
			this->m_minus = (gcnew System::Windows::Forms::Button());
			this->m_clr = (gcnew System::Windows::Forms::Button());
			this->rad_deg = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// displej
			// 
			this->displej->BackColor = System::Drawing::SystemColors::MenuBar;
			this->displej->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->displej->Enabled = false;
			this->displej->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->displej->Location = System::Drawing::Point(58, 26);
			this->displej->Name = L"displej";
			this->displej->Size = System::Drawing::Size(400, 38);
			this->displej->TabIndex = 0;
			this->displej->Text = L"0";
			this->displej->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// cislo7
			// 
			this->cislo7->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo7->FlatAppearance->BorderSize = 0;
			this->cislo7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo7->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo7->Location = System::Drawing::Point(58, 159);
			this->cislo7->Name = L"cislo7";
			this->cislo7->Size = System::Drawing::Size(62, 57);
			this->cislo7->TabIndex = 1;
			this->cislo7->Text = L"7";
			this->cislo7->UseVisualStyleBackColor = false;
			this->cislo7->Click += gcnew System::EventHandler(this, &Form1::cislo7_Click);
			// 
			// cislo8
			// 
			this->cislo8->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo8->FlatAppearance->BorderSize = 0;
			this->cislo8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo8->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo8->Location = System::Drawing::Point(126, 159);
			this->cislo8->Name = L"cislo8";
			this->cislo8->Size = System::Drawing::Size(62, 57);
			this->cislo8->TabIndex = 2;
			this->cislo8->Text = L"8";
			this->cislo8->UseVisualStyleBackColor = false;
			this->cislo8->Click += gcnew System::EventHandler(this, &Form1::cislo8_Click);
			// 
			// cislo9
			// 
			this->cislo9->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo9->FlatAppearance->BorderSize = 0;
			this->cislo9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo9->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo9->Location = System::Drawing::Point(194, 159);
			this->cislo9->Name = L"cislo9";
			this->cislo9->Size = System::Drawing::Size(62, 57);
			this->cislo9->TabIndex = 3;
			this->cislo9->Text = L"9";
			this->cislo9->UseVisualStyleBackColor = false;
			this->cislo9->Click += gcnew System::EventHandler(this, &Form1::cislo9_Click);
			// 
			// delete1
			// 
			this->delete1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->delete1->FlatAppearance->BorderSize = 0;
			this->delete1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->delete1->Location = System::Drawing::Point(439, 159);
			this->delete1->Name = L"delete1";
			this->delete1->Size = System::Drawing::Size(64, 135);
			this->delete1->TabIndex = 4;
			this->delete1->Text = L"CE";
			this->delete1->UseVisualStyleBackColor = false;
			this->delete1->Click += gcnew System::EventHandler(this, &Form1::delete1_Click);
			// 
			// plus
			// 
			this->plus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plus->Location = System::Drawing::Point(304, 237);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(62, 57);
			this->plus->TabIndex = 8;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = false;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// cislo6
			// 
			this->cislo6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo6->FlatAppearance->BorderSize = 0;
			this->cislo6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo6->Location = System::Drawing::Point(194, 237);
			this->cislo6->Name = L"cislo6";
			this->cislo6->Size = System::Drawing::Size(62, 57);
			this->cislo6->TabIndex = 7;
			this->cislo6->Text = L"6";
			this->cislo6->UseVisualStyleBackColor = false;
			this->cislo6->Click += gcnew System::EventHandler(this, &Form1::cislo6_Click);
			// 
			// cislo5
			// 
			this->cislo5->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo5->FlatAppearance->BorderSize = 0;
			this->cislo5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo5->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo5->Location = System::Drawing::Point(126, 237);
			this->cislo5->Name = L"cislo5";
			this->cislo5->Size = System::Drawing::Size(62, 57);
			this->cislo5->TabIndex = 6;
			this->cislo5->Text = L"5";
			this->cislo5->UseVisualStyleBackColor = false;
			this->cislo5->Click += gcnew System::EventHandler(this, &Form1::cislo5_Click);
			// 
			// cislo4
			// 
			this->cislo4->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo4->FlatAppearance->BorderSize = 0;
			this->cislo4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo4->Location = System::Drawing::Point(58, 237);
			this->cislo4->Name = L"cislo4";
			this->cislo4->Size = System::Drawing::Size(62, 57);
			this->cislo4->TabIndex = 5;
			this->cislo4->Text = L"4";
			this->cislo4->UseVisualStyleBackColor = false;
			this->cislo4->Click += gcnew System::EventHandler(this, &Form1::cislo4_Click);
			// 
			// minus
			// 
			this->minus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->minus->Location = System::Drawing::Point(304, 315);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(62, 57);
			this->minus->TabIndex = 12;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = false;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// cislo3
			// 
			this->cislo3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo3->FlatAppearance->BorderSize = 0;
			this->cislo3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo3->Location = System::Drawing::Point(194, 315);
			this->cislo3->Name = L"cislo3";
			this->cislo3->Size = System::Drawing::Size(62, 57);
			this->cislo3->TabIndex = 11;
			this->cislo3->Text = L"3";
			this->cislo3->UseVisualStyleBackColor = false;
			this->cislo3->Click += gcnew System::EventHandler(this, &Form1::cislo3_Click);
			// 
			// cislo2
			// 
			this->cislo2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo2->FlatAppearance->BorderSize = 0;
			this->cislo2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo2->Location = System::Drawing::Point(126, 315);
			this->cislo2->Name = L"cislo2";
			this->cislo2->Size = System::Drawing::Size(62, 57);
			this->cislo2->TabIndex = 10;
			this->cislo2->Text = L"2";
			this->cislo2->UseVisualStyleBackColor = false;
			this->cislo2->Click += gcnew System::EventHandler(this, &Form1::cislo2_Click);
			// 
			// cislo1
			// 
			this->cislo1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo1->FlatAppearance->BorderSize = 0;
			this->cislo1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo1->Location = System::Drawing::Point(58, 315);
			this->cislo1->Name = L"cislo1";
			this->cislo1->Size = System::Drawing::Size(62, 57);
			this->cislo1->TabIndex = 9;
			this->cislo1->Text = L"1";
			this->cislo1->UseVisualStyleBackColor = false;
			this->cislo1->Click += gcnew System::EventHandler(this, &Form1::cislo1_Click);
			// 
			// rovnase
			// 
			this->rovnase->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->rovnase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rovnase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->rovnase->Location = System::Drawing::Point(79, 463);
			this->rovnase->Name = L"rovnase";
			this->rovnase->Size = System::Drawing::Size(153, 57);
			this->rovnase->TabIndex = 16;
			this->rovnase->Text = L"=";
			this->rovnase->UseVisualStyleBackColor = false;
			this->rovnase->Click += gcnew System::EventHandler(this, &Form1::rovnase_Click);
			// 
			// carka
			// 
			this->carka->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->carka->FlatAppearance->BorderSize = 0;
			this->carka->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->carka->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->carka->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->carka->Location = System::Drawing::Point(194, 393);
			this->carka->Name = L"carka";
			this->carka->Size = System::Drawing::Size(62, 57);
			this->carka->TabIndex = 15;
			this->carka->Text = L",";
			this->carka->UseVisualStyleBackColor = false;
			this->carka->Click += gcnew System::EventHandler(this, &Form1::carka_Click);
			// 
			// cislo0
			// 
			this->cislo0->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->cislo0->FlatAppearance->BorderSize = 0;
			this->cislo0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cislo0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cislo0->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->cislo0->Location = System::Drawing::Point(126, 393);
			this->cislo0->Name = L"cislo0";
			this->cislo0->Size = System::Drawing::Size(62, 57);
			this->cislo0->TabIndex = 14;
			this->cislo0->Text = L"0";
			this->cislo0->UseVisualStyleBackColor = false;
			this->cislo0->Click += gcnew System::EventHandler(this, &Form1::cislo0_Click);
			// 
			// plusminus
			// 
			this->plusminus->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->plusminus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->plusminus->FlatAppearance->BorderSize = 0;
			this->plusminus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->plusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->plusminus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->plusminus->Location = System::Drawing::Point(58, 393);
			this->plusminus->Name = L"plusminus";
			this->plusminus->Size = System::Drawing::Size(62, 57);
			this->plusminus->TabIndex = 13;
			this->plusminus->Text = L"+/-";
			this->plusminus->UseVisualStyleBackColor = false;
			this->plusminus->Click += gcnew System::EventHandler(this, &Form1::plusminus_Click);
			// 
			// krat
			// 
			this->krat->BackColor = System::Drawing::SystemColors::ControlLight;
			this->krat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->krat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->krat->Location = System::Drawing::Point(372, 237);
			this->krat->Name = L"krat";
			this->krat->Size = System::Drawing::Size(62, 57);
			this->krat->TabIndex = 17;
			this->krat->Text = L"x";
			this->krat->UseVisualStyleBackColor = false;
			this->krat->Click += gcnew System::EventHandler(this, &Form1::krat_Click);
			// 
			// deleno
			// 
			this->deleno->BackColor = System::Drawing::SystemColors::ControlLight;
			this->deleno->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->deleno->Location = System::Drawing::Point(372, 315);
			this->deleno->Name = L"deleno";
			this->deleno->Size = System::Drawing::Size(62, 57);
			this->deleno->TabIndex = 18;
			this->deleno->Text = L"÷";
			this->deleno->UseVisualStyleBackColor = false;
			this->deleno->Click += gcnew System::EventHandler(this, &Form1::deleno_Click);
			// 
			// pi
			// 
			this->pi->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pi->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->pi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->pi->Location = System::Drawing::Point(373, 159);
			this->pi->Name = L"pi";
			this->pi->Size = System::Drawing::Size(62, 57);
			this->pi->TabIndex = 19;
			this->pi->Text = L"π";
			this->pi->UseVisualStyleBackColor = false;
			this->pi->Click += gcnew System::EventHandler(this, &Form1::pi_Click);
			// 
			// druhamocnina
			// 
			this->druhamocnina->BackColor = System::Drawing::SystemColors::ControlLight;
			this->druhamocnina->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->druhamocnina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->druhamocnina->Location = System::Drawing::Point(373, 393);
			this->druhamocnina->Name = L"druhamocnina";
			this->druhamocnina->Size = System::Drawing::Size(62, 57);
			this->druhamocnina->TabIndex = 20;
			this->druhamocnina->Text = L"^2";
			this->druhamocnina->UseVisualStyleBackColor = false;
			this->druhamocnina->Click += gcnew System::EventHandler(this, &Form1::druhamocnina_Click);
			// 
			// factorial
			// 
			this->factorial->BackColor = System::Drawing::SystemColors::ControlLight;
			this->factorial->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->factorial->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->factorial->Location = System::Drawing::Point(304, 159);
			this->factorial->Name = L"factorial";
			this->factorial->Size = System::Drawing::Size(63, 57);
			this->factorial->TabIndex = 21;
			this->factorial->Text = L"!";
			this->factorial->UseVisualStyleBackColor = false;
			this->factorial->Click += gcnew System::EventHandler(this, &Form1::factorial_Click);
			// 
			// odmocnina
			// 
			this->odmocnina->BackColor = System::Drawing::SystemColors::ControlLight;
			this->odmocnina->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->odmocnina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->odmocnina->Location = System::Drawing::Point(371, 456);
			this->odmocnina->Name = L"odmocnina";
			this->odmocnina->Size = System::Drawing::Size(62, 57);
			this->odmocnina->TabIndex = 22;
			this->odmocnina->Text = L"√";
			this->odmocnina->UseVisualStyleBackColor = false;
			this->odmocnina->Click += gcnew System::EventHandler(this, &Form1::odmocnina_Click);
			// 
			// tretimocnina
			// 
			this->tretimocnina->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tretimocnina->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tretimocnina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tretimocnina->Location = System::Drawing::Point(439, 393);
			this->tretimocnina->Name = L"tretimocnina";
			this->tretimocnina->Size = System::Drawing::Size(62, 57);
			this->tretimocnina->TabIndex = 23;
			this->tretimocnina->Text = L"^3";
			this->tretimocnina->UseVisualStyleBackColor = false;
			this->tretimocnina->Click += gcnew System::EventHandler(this, &Form1::tretimocnina_Click);
			// 
			// nantou
			// 
			this->nantou->BackColor = System::Drawing::SystemColors::ControlLight;
			this->nantou->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nantou->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->nantou->Location = System::Drawing::Point(304, 393);
			this->nantou->Name = L"nantou";
			this->nantou->Size = System::Drawing::Size(62, 57);
			this->nantou->TabIndex = 24;
			this->nantou->Text = L"^y";
			this->nantou->UseVisualStyleBackColor = false;
			this->nantou->Click += gcnew System::EventHandler(this, &Form1::nantou_Click);
			// 
			// tretiodmocnina
			// 
			this->tretiodmocnina->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tretiodmocnina->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tretiodmocnina->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tretiodmocnina->Location = System::Drawing::Point(439, 456);
			this->tretiodmocnina->Name = L"tretiodmocnina";
			this->tretiodmocnina->Size = System::Drawing::Size(62, 57);
			this->tretiodmocnina->TabIndex = 25;
			this->tretiodmocnina->Text = L"3√";
			this->tretiodmocnina->UseVisualStyleBackColor = false;
			this->tretiodmocnina->Click += gcnew System::EventHandler(this, &Form1::tretiodmocnina_Click);
			// 
			// mazani
			// 
			this->mazani->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->mazani->FlatAppearance->BorderSize = 0;
			this->mazani->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->mazani->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->mazani->Location = System::Drawing::Point(440, 308);
			this->mazani->Name = L"mazani";
			this->mazani->Size = System::Drawing::Size(64, 64);
			this->mazani->TabIndex = 26;
			this->mazani->Text = L"C";
			this->mazani->UseVisualStyleBackColor = false;
			this->mazani->Click += gcnew System::EventHandler(this, &Form1::mazani_Click);
			// 
			// tangens
			// 
			this->tangens->BackColor = System::Drawing::SystemColors::ControlLight;
			this->tangens->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->tangens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tangens->Location = System::Drawing::Point(439, 659);
			this->tangens->Name = L"tangens";
			this->tangens->Size = System::Drawing::Size(62, 57);
			this->tangens->TabIndex = 29;
			this->tangens->Text = L"tg";
			this->tangens->UseVisualStyleBackColor = false;
			this->tangens->Click += gcnew System::EventHandler(this, &Form1::tangens_Click);
			// 
			// logaritmus
			// 
			this->logaritmus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->logaritmus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logaritmus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->logaritmus->Location = System::Drawing::Point(439, 533);
			this->logaritmus->Name = L"logaritmus";
			this->logaritmus->Size = System::Drawing::Size(62, 57);
			this->logaritmus->TabIndex = 28;
			this->logaritmus->Text = L"log";
			this->logaritmus->UseVisualStyleBackColor = false;
			this->logaritmus->Click += gcnew System::EventHandler(this, &Form1::logaritmus_Click);
			// 
			// cotangens
			// 
			this->cotangens->BackColor = System::Drawing::SystemColors::ControlLight;
			this->cotangens->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cotangens->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cotangens->Location = System::Drawing::Point(439, 596);
			this->cotangens->Name = L"cotangens";
			this->cotangens->Size = System::Drawing::Size(62, 57);
			this->cotangens->TabIndex = 27;
			this->cotangens->Text = L"cotg";
			this->cotangens->UseVisualStyleBackColor = false;
			this->cotangens->Click += gcnew System::EventHandler(this, &Form1::cotangens_Click);
			// 
			// ln
			// 
			this->ln->BackColor = System::Drawing::SystemColors::ControlLight;
			this->ln->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ln->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ln->Location = System::Drawing::Point(371, 659);
			this->ln->Name = L"ln";
			this->ln->Size = System::Drawing::Size(62, 57);
			this->ln->TabIndex = 32;
			this->ln->Text = L"ln";
			this->ln->UseVisualStyleBackColor = false;
			// 
			// cosinus
			// 
			this->cosinus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->cosinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cosinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->cosinus->Location = System::Drawing::Point(371, 533);
			this->cosinus->Name = L"cosinus";
			this->cosinus->Size = System::Drawing::Size(62, 57);
			this->cosinus->TabIndex = 31;
			this->cosinus->Text = L"cos";
			this->cosinus->UseVisualStyleBackColor = false;
			this->cosinus->Click += gcnew System::EventHandler(this, &Form1::cosinus_Click);
			// 
			// sinus
			// 
			this->sinus->BackColor = System::Drawing::SystemColors::ControlLight;
			this->sinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->sinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->sinus->Location = System::Drawing::Point(371, 596);
			this->sinus->Name = L"sinus";
			this->sinus->Size = System::Drawing::Size(62, 57);
			this->sinus->TabIndex = 30;
			this->sinus->Text = L"sin";
			this->sinus->UseVisualStyleBackColor = false;
			this->sinus->Click += gcnew System::EventHandler(this, &Form1::sinus_Click);
			// 
			// m_plus
			// 
			this->m_plus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->m_plus->FlatAppearance->BorderSize = 0;
			this->m_plus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->m_plus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_plus->Location = System::Drawing::Point(262, 70);
			this->m_plus->Name = L"m_plus";
			this->m_plus->Size = System::Drawing::Size(62, 57);
			this->m_plus->TabIndex = 35;
			this->m_plus->Text = L"M+";
			this->m_plus->UseVisualStyleBackColor = false;
			this->m_plus->Click += gcnew System::EventHandler(this, &Form1::m_plus_Click);
			// 
			// m_recall
			// 
			this->m_recall->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->m_recall->FlatAppearance->BorderSize = 0;
			this->m_recall->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_recall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->m_recall->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_recall->Location = System::Drawing::Point(126, 70);
			this->m_recall->Name = L"m_recall";
			this->m_recall->Size = System::Drawing::Size(62, 57);
			this->m_recall->TabIndex = 34;
			this->m_recall->Text = L"MR";
			this->m_recall->UseVisualStyleBackColor = false;
			this->m_recall->Click += gcnew System::EventHandler(this, &Form1::m_recall_Click);
			// 
			// m_store
			// 
			this->m_store->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->m_store->FlatAppearance->BorderSize = 0;
			this->m_store->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_store->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->m_store->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_store->Location = System::Drawing::Point(194, 70);
			this->m_store->Name = L"m_store";
			this->m_store->Size = System::Drawing::Size(62, 57);
			this->m_store->TabIndex = 33;
			this->m_store->Text = L"MS";
			this->m_store->UseVisualStyleBackColor = false;
			this->m_store->Click += gcnew System::EventHandler(this, &Form1::m_store_Click);
			// 
			// m_minus
			// 
			this->m_minus->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->m_minus->FlatAppearance->BorderSize = 0;
			this->m_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->m_minus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_minus->Location = System::Drawing::Point(330, 70);
			this->m_minus->Name = L"m_minus";
			this->m_minus->Size = System::Drawing::Size(62, 57);
			this->m_minus->TabIndex = 36;
			this->m_minus->Text = L"M-";
			this->m_minus->UseVisualStyleBackColor = false;
			this->m_minus->Click += gcnew System::EventHandler(this, &Form1::m_minus_Click);
			// 
			// m_clr
			// 
			this->m_clr->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->m_clr->FlatAppearance->BorderSize = 0;
			this->m_clr->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_clr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->m_clr->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_clr->Location = System::Drawing::Point(58, 70);
			this->m_clr->Name = L"m_clr";
			this->m_clr->Size = System::Drawing::Size(62, 57);
			this->m_clr->TabIndex = 37;
			this->m_clr->Text = L"MC";
			this->m_clr->UseVisualStyleBackColor = false;
			this->m_clr->Click += gcnew System::EventHandler(this, &Form1::m_clr_Click);
			// 
			// rad_deg
			// 
			this->rad_deg->BackColor = System::Drawing::SystemColors::HotTrack;
			this->rad_deg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rad_deg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->rad_deg->Location = System::Drawing::Point(442, 70);
			this->rad_deg->Name = L"rad_deg";
			this->rad_deg->Size = System::Drawing::Size(62, 57);
			this->rad_deg->TabIndex = 38;
			this->rad_deg->Text = L"R/D";
			this->rad_deg->UseVisualStyleBackColor = false;
			this->rad_deg->Click += gcnew System::EventHandler(this, &Form1::rad_deg_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(512, 731);
			this->Controls->Add(this->rad_deg);
			this->Controls->Add(this->m_clr);
			this->Controls->Add(this->m_minus);
			this->Controls->Add(this->m_plus);
			this->Controls->Add(this->m_recall);
			this->Controls->Add(this->m_store);
			this->Controls->Add(this->ln);
			this->Controls->Add(this->cosinus);
			this->Controls->Add(this->sinus);
			this->Controls->Add(this->tangens);
			this->Controls->Add(this->logaritmus);
			this->Controls->Add(this->cotangens);
			this->Controls->Add(this->mazani);
			this->Controls->Add(this->tretiodmocnina);
			this->Controls->Add(this->nantou);
			this->Controls->Add(this->tretimocnina);
			this->Controls->Add(this->odmocnina);
			this->Controls->Add(this->factorial);
			this->Controls->Add(this->druhamocnina);
			this->Controls->Add(this->pi);
			this->Controls->Add(this->deleno);
			this->Controls->Add(this->krat);
			this->Controls->Add(this->rovnase);
			this->Controls->Add(this->carka);
			this->Controls->Add(this->cislo0);
			this->Controls->Add(this->plusminus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->cislo3);
			this->Controls->Add(this->cislo2);
			this->Controls->Add(this->cislo1);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->cislo6);
			this->Controls->Add(this->cislo5);
			this->Controls->Add(this->cislo4);
			this->Controls->Add(this->delete1);
			this->Controls->Add(this->cislo9);
			this->Controls->Add(this->cislo8);
			this->Controls->Add(this->cislo7);
			this->Controls->Add(this->displej);
			this->HelpButton = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(528, 769);
			this->MinimumSize = System::Drawing::Size(525, 769);
			this->Name = L"Form1";
			this->Text = L"Myn_kalk";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double prvni, druhe, vysledek;
		int op;
		float memory=0;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void cislo7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "7";
	else displej->Text += "7";
	}
private: System::Void cislo8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "8";
	else displej->Text += "8";
}
private: System::Void cislo9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "9";
	else displej->Text += "9";
}
private: System::Void cislo4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "4";
	else displej->Text += "4";
}
private: System::Void cislo5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "5";
	else displej->Text += "5";
}
private: System::Void cislo6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "6";
	else displej->Text += "6";
}
private: System::Void cislo1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "1";
	else displej->Text += "1";
}
private: System::Void cislo2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "2";
	else displej->Text += "2";
}
private: System::Void cislo3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "3";
	else displej->Text += "3";
}
private: System::Void cislo0_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text == "0")displej->Text = "0";
	else displej->Text += "0";
}
private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		displej->Text = "0";
		op = 1; // scitani
	}
}
private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		displej->Text = "0";
		op = 2; // odcitani
	}
}
private: System::Void krat_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		displej->Text = "0";
		op = 3; // nasobeni
	}
}
private: System::Void deleno_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		displej->Text = "0";
		op = 4; // deleni
	}
}
private: System::Void rovnase_Click(System::Object^  sender, System::EventArgs^  e) {
	druhe = Convert::ToDouble(displej->Text);
	displej->Text = "0";
	switch (op)
	{
	case 1: 
			vysledek = prvni + druhe;
			displej->Text = Convert::ToString(vysledek);
			break;
		

	case 2:
		vysledek = prvni - druhe;
		displej->Text = Convert::ToString(vysledek);
		break;

	case 3:
		vysledek = prvni * druhe;
		displej->Text = Convert::ToString(vysledek);
		break;

	case 4:
		if (druhe == 0) {
			MessageBox::Show("nelze delit nulou");
		}
		else {
			vysledek = prvni / druhe;
			displej->Text = Convert::ToString(vysledek);
		}
		break;

	case 5:
		vysledek = Math::Pow(prvni, druhe);
		displej->Text = Convert::ToString(vysledek);
		break;


	
	}
}
private: System::Void plusminus_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	vysledek = -prvni;
	displej->Text = Convert::ToString(vysledek);
}
private: System::Void carka_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Contains(",") == false)displej->Text += ",";
	else MessageBox::Show("nemuzou byt dve desetinne carky!");
}
private: System::Void pi_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		vysledek = Math::PI;
		displej->Text = Convert::ToString(vysledek);
	}
}

private: System::Void druhamocnina_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = prvni * prvni;
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void tretimocnina_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = prvni * prvni * prvni;
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void nantou_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		displej->Text = "0";
		op = 5; // na ntou
	}
}
private: System::Void factorial_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToInt32(displej->Text);
		if ((prvni < 0) || displej->Text->Contains(",")) {
			MessageBox::Show("nesmi byt mensi nez nula nebo obsahovat desetinnou carku");
		}
		else {
			if (prvni == 0)vysledek = 1;
			else {
				int i, vysledek = 1;
				for (i = 2; i <= prvni; i++) {
					vysledek *= i;
				}
				displej->Text = Convert::ToString(vysledek);
			}
		}
	}
}
private: System::Void odmocnina_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = Math::Sqrt(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void tretiodmocnina_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = cbrt(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void delete1_Click(System::Object^  sender, System::EventArgs^  e) {
	displej->Text = "0";
}

private: System::Void mazani_Click(System::Object^  sender, System::EventArgs^  e) {
	int p;
	p = displej->Text->Length;
		displej->Text = displej->Text->Remove(p - 1, 1);
	
}
private: System::Void cosinus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = cos(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}

private: System::Void sinus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = sin(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void logaritmus_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = Math::Log10(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void cotangens_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = cos(prvni) / sin(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
private: System::Void tangens_Click(System::Object^  sender, System::EventArgs^  e) {
	if (displej->Text->Equals("-")) {
		MessageBox::Show("chybi cislo!");
		displej->Text = "0";
	}
	else {
		prvni = Convert::ToDouble(displej->Text);
		vysledek = tan(prvni);
		displej->Text = Convert::ToString(vysledek);
	}
}
		 // Memory //
private: System::Void m_plus_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	memory += prvni;
}
private: System::Void m_recall_Click(System::Object^  sender, System::EventArgs^  e) {
	displej->Text = Convert::ToString(memory);
}
private: System::Void m_clr_Click(System::Object^  sender, System::EventArgs^  e) {
	memory = 0;
}
private: System::Void m_store_Click(System::Object^  sender, System::EventArgs^  e) {
	memory = Convert::ToDouble(displej->Text);
}
private: System::Void m_minus_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	memory -= prvni;
}
private: System::Void rad_deg_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
};
}
