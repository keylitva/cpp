#pragma once

namespace nd1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
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
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(205, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Gr��ti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(191, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(215, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Autorius: Leonardas Sottilotta";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 130);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(560, 60);
			this->label2->TabIndex = 2;
			this->label2->Text = L"U�duotis: sukurti program�, kuri vartotojui��vedus eil�ra�t� pagal �raid�i� skai�"
				L"i� \nir pasiskirstym�,surast�� artimiausi� eil�ra�t�i� duomen� baz�s(.txt failo)"
				L" \nir j� su duomenimis i�spausdint�.";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm2::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 227);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"1. �ra�yti eil�ra�t� � kair�j� lauk�. \n2. �ra�yti eil�ra��io autori� � laukel� po kairiuoju lauku(jei ne�inot autoriaus ra�yti � - �). \n3. Paspausti �Rasti� mygtuk�. \n \nEil�ra��iai yra saugomi  �duom.txt� faile.\n \nApribojim� n�ra.";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 529);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
