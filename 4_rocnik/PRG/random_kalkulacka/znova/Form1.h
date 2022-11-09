#pragma once

namespace znova {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  c1;
	private: System::Windows::Forms::TextBox^  c2;
	private: System::Windows::Forms::TextBox^  vys;




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  op;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->c1 = (gcnew System::Windows::Forms::TextBox());
			this->c2 = (gcnew System::Windows::Forms::TextBox());
			this->vys = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->op = (gcnew System::Windows::Forms::ComboBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"cislo1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(264, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"cislo2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(486, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"vysledek";
			// 
			// c1
			// 
			this->c1->Location = System::Drawing::Point(28, 76);
			this->c1->Name = L"c1";
			this->c1->Size = System::Drawing::Size(100, 20);
			this->c1->TabIndex = 3;
			// 
			// c2
			// 
			this->c2->Location = System::Drawing::Point(232, 76);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(100, 20);
			this->c2->TabIndex = 4;
			// 
			// vys
			// 
			this->vys->Location = System::Drawing::Point(457, 76);
			this->vys->Name = L"vys";
			this->vys->Size = System::Drawing::Size(100, 20);
			this->vys->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 135);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(67, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 164);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(67, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"/";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(101, 135);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(67, 23);
			this->button3->TabIndex = 8;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(101, 164);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(67, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"-";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// op
			// 
			this->op->FormattingEnabled = true;
			this->op->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"+", L"-", L"*", L"/" });
			this->op->Location = System::Drawing::Point(223, 135);
			this->op->Name = L"op";
			this->op->Size = System::Drawing::Size(121, 21);
			this->op->TabIndex = 10;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(244, 162);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 11;
			this->button5->Text = L"=";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(471, 135);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 12;
			this->button6->Text = L"factorial";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(587, 196);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->op);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->vys);
			this->Controls->Add(this->c2);
			this->Controls->Add(this->c1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"pecka program";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double a, b, c;
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		a = System::Convert::ToDouble(c1->Text);
		b = System::Convert::ToDouble(c2->Text);
		c = a + b;
		vys->Text = Convert::ToString(c);
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Convert::ToDouble(c1->Text);
	b = System::Convert::ToDouble(c2->Text);
	if (b == 0) {
		MessageBox::Show("nelze delit nulou!");
	}else {
		c = a / b;
		vys->Text = Convert::ToString(c);
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Convert::ToDouble(c1->Text);
	b = System::Convert::ToDouble(c2->Text);
	c = a * b;
	vys->Text = Convert::ToString(c);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Convert::ToDouble(c1->Text);
	b = System::Convert::ToDouble(c2->Text);
	c = a - b;
	vys->Text = Convert::ToString(c);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	char oper;
	int p=0;
	oper = Convert::ToChar(op->Text);
	a = System::Convert::ToDouble(c1->Text);
	b = System::Convert::ToDouble(c2->Text);
	switch (oper)
	{
	case '+': c = a + b;
		vys->Text = Convert::ToString(c);
		break;

	case '-': c = a - b;
		vys->Text = Convert::ToString(c);
		break;

	case '*': c = a * b;
		vys->Text = Convert::ToString(c);
		break;

	case '/': if (b == 0)
	{
		MessageBox::Show("nelze delit nulou");
	}else {
		c = a / b;
		vys->Text = Convert::ToString(c);
	}
		break;
			
	default:
		break;
	}

}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	a = System::Convert::ToDouble(c1->Text);
	float factorial = 1;
	int i;

	if (a < 0) {
		MessageBox::Show("nesmi byt mensi nez nula!");
	}
	else {
		for (i = 1; i <= a; i++) {
			factorial = factorial * i;
		}
	vys->Text = Convert::ToString(factorial);
	}
}
};
}
