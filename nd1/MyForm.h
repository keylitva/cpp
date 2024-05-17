#pragma once
#include <iostream>
#include "funk.h"
#include <string>
#include <msclr/marshal_cppstd.h>


namespace nd1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(671, 433);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Rasti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->richTextBox1->Location = System::Drawing::Point(960, 50);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(465, 413);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox3
			// 
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->richTextBox3->Location = System::Drawing::Point(16, 50);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(4);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->Size = System::Drawing::Size(460, 413);
			this->richTextBox3->TabIndex = 3;
			this->richTextBox3->Text = L"";
			this->richTextBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox2_TextChanged_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(789, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(155, 21);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Laukiama duomenu";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(483, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(155, 21);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Laukiama duomenu";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(1456, 485);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox3);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Times New Roman", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		eilerastis m;
		int maznr = 0;
		std::wstring ruodmenis, ruodmenismain;
		duomeilerastis n[200];
		duomeilerastis arciausias[3];
		String^ managedString = richTextBox3->Text;
		String^ str;
		String^ raidduom;
		String^ raidduommain;
		m.eil = marshal_as<std::wstring>(managedString);;
		skaitytiDuomenis(m);
		artaspats(m, n);
		rastiarciausia(n, 200, m, arciausias);
		raiddiff(arciausias, m, maznr);
		duomrodimas(arciausias, maznr, ruodmenis, m, ruodmenismain);
		std::locale::global(std::locale("lt_LT.UTF-8"));
		str = gcnew System::String(arciausias[maznr].eil.c_str());
		raidduom = gcnew System::String(ruodmenis.c_str());
		raidduommain = gcnew System::String(ruodmenismain.c_str());
		richTextBox1->Text = str;
		label1->Text = raidduom;
		label2->Text = raidduommain;
	}

	private: System::Void richTextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
