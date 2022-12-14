#pragma once
#include <cmath>

namespace mynari_test {

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
	private: System::Windows::Forms::Button^  zpet;
	private: System::Windows::Forms::Button^  sinus;
	private: System::Windows::Forms::Button^  faktorial;
	private: System::Windows::Forms::Button^  plus_minus;
	private: System::Windows::Forms::Button^  treti_odmocnina;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->displej = (gcnew System::Windows::Forms::TextBox());
			this->zpet = (gcnew System::Windows::Forms::Button());
			this->sinus = (gcnew System::Windows::Forms::Button());
			this->faktorial = (gcnew System::Windows::Forms::Button());
			this->plus_minus = (gcnew System::Windows::Forms::Button());
			this->treti_odmocnina = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// displej
			// 
			this->displej->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->displej->Location = System::Drawing::Point(132, 50);
			this->displej->Name = L"displej";
			this->displej->Size = System::Drawing::Size(230, 31);
			this->displej->TabIndex = 0;
			this->displej->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// zpet
			// 
			this->zpet->Location = System::Drawing::Point(56, 98);
			this->zpet->Name = L"zpet";
			this->zpet->Size = System::Drawing::Size(71, 68);
			this->zpet->TabIndex = 1;
			this->zpet->Text = L"<-";
			this->zpet->UseVisualStyleBackColor = true;
			this->zpet->Click += gcnew System::EventHandler(this, &Form1::zpet_Click);
			// 
			// sinus
			// 
			this->sinus->Location = System::Drawing::Point(133, 98);
			this->sinus->Name = L"sinus";
			this->sinus->Size = System::Drawing::Size(71, 68);
			this->sinus->TabIndex = 2;
			this->sinus->Text = L"sin";
			this->sinus->UseVisualStyleBackColor = true;
			this->sinus->Click += gcnew System::EventHandler(this, &Form1::sinus_Click);
			// 
			// faktorial
			// 
			this->faktorial->Location = System::Drawing::Point(210, 98);
			this->faktorial->Name = L"faktorial";
			this->faktorial->Size = System::Drawing::Size(71, 68);
			this->faktorial->TabIndex = 3;
			this->faktorial->Text = L"!";
			this->faktorial->UseVisualStyleBackColor = true;
			this->faktorial->Click += gcnew System::EventHandler(this, &Form1::faktorial_Click);
			// 
			// plus_minus
			// 
			this->plus_minus->Location = System::Drawing::Point(287, 98);
			this->plus_minus->Name = L"plus_minus";
			this->plus_minus->Size = System::Drawing::Size(71, 68);
			this->plus_minus->TabIndex = 4;
			this->plus_minus->Text = L"+/-";
			this->plus_minus->UseVisualStyleBackColor = true;
			this->plus_minus->Click += gcnew System::EventHandler(this, &Form1::plus_minus_Click);
			// 
			// treti_odmocnina
			// 
			this->treti_odmocnina->Location = System::Drawing::Point(364, 98);
			this->treti_odmocnina->Name = L"treti_odmocnina";
			this->treti_odmocnina->Size = System::Drawing::Size(71, 68);
			this->treti_odmocnina->TabIndex = 5;
			this->treti_odmocnina->Text = L"treti_odmocnina";
			this->treti_odmocnina->UseVisualStyleBackColor = true;
			this->treti_odmocnina->Click += gcnew System::EventHandler(this, &Form1::treti_odmocnina_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 267);
			this->Controls->Add(this->treti_odmocnina);
			this->Controls->Add(this->plus_minus);
			this->Controls->Add(this->faktorial);
			this->Controls->Add(this->sinus);
			this->Controls->Add(this->zpet);
			this->Controls->Add(this->displej);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double prvni=0, druhe=0, vysledek=0;
private: System::Void zpet_Click(System::Object^  sender, System::EventArgs^  e) {
	int p;
	p = displej->Text->Length;
	displej->Text = displej->Text->Remove(p - 1, 1);
}
private: System::Void sinus_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	vysledek = sin(prvni);
	displej->Text = Convert::ToString(vysledek);
}
private: System::Void faktorial_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToInt32(displej->Text);
	if ((prvni < 0) || displej->Text->Contains(",")) {
		MessageBox::Show("nesmi byt 0 nebo carka");
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
private: System::Void plus_minus_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	vysledek = -prvni;
	displej->Text = Convert::ToString(vysledek);
}
private: System::Void treti_odmocnina_Click(System::Object^  sender, System::EventArgs^  e) {
	prvni = Convert::ToDouble(displej->Text);
	vysledek = cbrt(prvni);
	displej->Text = Convert::ToString(vysledek);
}
};
}
