#pragma once

namespace FinalePOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button9;

	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(486, 70);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Bienvenue";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Location = System::Drawing::Point(474, 163);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(219, 56);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Gestion Client";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(474, 248);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(219, 56);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Gestion Personnel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(474, 339);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion Stock";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(474, 431);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(219, 56);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Gestion Commandes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(474, 524);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(219, 56);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Statistiques";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1189, 686);
			this->panel1->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(448, 55);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(281, 39);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Gestion du Stock";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(748, 208);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(142, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Référence (ID) :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(815, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Libellé :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(800, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Quantité :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(618, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(272, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Seuil de réapprovisionnement :";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(795, 374);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(95, 24);
			this->label7->TabIndex = 12;
			this->label7->Text = L"prix UHT :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(832, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 24);
			this->label8->TabIndex = 13;
			this->label8->Text = L"TVA :";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(896, 209);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(188, 24);
			this->textBox1->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(896, 249);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(188, 24);
			this->textBox2->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(896, 291);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(188, 24);
			this->textBox3->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(896, 375);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(188, 24);
			this->textBox4->TabIndex = 17;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(896, 334);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(188, 24);
			this->textBox5->TabIndex = 18;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(896, 418);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(188, 24);
			this->textBox6->TabIndex = 19;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(55, 123);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(533, 489);
			this->dataGridView1->TabIndex = 20;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(799, 475);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(138, 36);
			this->button6->TabIndex = 21;
			this->button6->Text = L"Modifier";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(946, 475);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 36);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Ajouter";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(655, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 36);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Retirer";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->textBox4);
			this->panel2->Controls->Add(this->textBox3);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1189, 686);
			this->panel2->TabIndex = 24;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(3, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 22);
			this->button9->TabIndex = 24;
			this->button9->Text = L"Retour";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 686);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->panel2->Visible = false;
		this->panel1->Visible = true;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->panel1->Visible = false;
		//Apparition
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->panel1->Visible = false;
		//Apparition
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->panel1->Visible = false;
		//Apparition
		this->panel2->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->panel1->Visible = false;
		//Apparition
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->panel1->Visible = false;
		//Apparition
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		this->panel2->Visible = false;
		this->panel1->Visible = true;
	}
};
}
