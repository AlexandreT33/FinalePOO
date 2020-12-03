#pragma once
#include "ClasseStock.h"
#include "Client.h"

namespace FinalePOO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm
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
		/// Nettoyage des ressources utilis�es.
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
	private: System::Windows::Forms::Panel^ Panel_Bienvenue;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ Ref;
	private: System::Windows::Forms::TextBox^ libelle;
	private: System::Windows::Forms::TextBox^ quantite;
	private: System::Windows::Forms::TextBox^ prix;




	private: System::Windows::Forms::TextBox^ seuil;
	private: System::Windows::Forms::TextBox^ TVA;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ Panel_Stock;


	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button_afficher_stock;
	private: System::Windows::Forms::Panel^ Panel_Client;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::TextBox^ client_date_naissance;
	private: System::Windows::Forms::TextBox^ client_nombre_achat;



	private: System::Windows::Forms::TextBox^ client_prenom;

	private: System::Windows::Forms::TextBox^ client_nom;


	private: System::Windows::Forms::TextBox^ client_numero;





	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::TextBox^ adresse_numero;
	private: System::Windows::Forms::TextBox^ adresse_type_de_voie;




	private: System::Windows::Forms::TextBox^ adresse_code_postal;

	private: System::Windows::Forms::TextBox^ adresse_ville;

	private: System::Windows::Forms::TextBox^ adresse_id;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ adresse_numero_de_client;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ adresse_libelle_de_voie;


	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ client_afficher;
	private: System::Windows::Forms::Button^ button17;


	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->Panel_Bienvenue = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->Ref = (gcnew System::Windows::Forms::TextBox());
			this->libelle = (gcnew System::Windows::Forms::TextBox());
			this->quantite = (gcnew System::Windows::Forms::TextBox());
			this->prix = (gcnew System::Windows::Forms::TextBox());
			this->seuil = (gcnew System::Windows::Forms::TextBox());
			this->TVA = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->Panel_Stock = (gcnew System::Windows::Forms::Panel());
			this->button_afficher_stock = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Panel_Client = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->client_afficher = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->adresse_numero_de_client = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->adresse_libelle_de_voie = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->adresse_numero = (gcnew System::Windows::Forms::TextBox());
			this->adresse_type_de_voie = (gcnew System::Windows::Forms::TextBox());
			this->adresse_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->adresse_ville = (gcnew System::Windows::Forms::TextBox());
			this->adresse_id = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->client_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->client_nombre_achat = (gcnew System::Windows::Forms::TextBox());
			this->client_prenom = (gcnew System::Windows::Forms::TextBox());
			this->client_nom = (gcnew System::Windows::Forms::TextBox());
			this->client_numero = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Panel_Bienvenue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Panel_Stock->SuspendLayout();
			this->Panel_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			// Panel_Bienvenue
			// 
			this->Panel_Bienvenue->Controls->Add(this->button5);
			this->Panel_Bienvenue->Controls->Add(this->button4);
			this->Panel_Bienvenue->Controls->Add(this->button3);
			this->Panel_Bienvenue->Controls->Add(this->button2);
			this->Panel_Bienvenue->Controls->Add(this->button1);
			this->Panel_Bienvenue->Controls->Add(this->label1);
			this->Panel_Bienvenue->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Bienvenue->Location = System::Drawing::Point(0, 0);
			this->Panel_Bienvenue->Name = L"Panel_Bienvenue";
			this->Panel_Bienvenue->Size = System::Drawing::Size(1189, 686);
			this->Panel_Bienvenue->TabIndex = 6;
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
			this->label3->Size = System::Drawing::Size(144, 24);
			this->label3->TabIndex = 8;
			this->label3->Text = L"R�f�rence (ID) :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(815, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Libell� :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(800, 290);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Quantit� :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(618, 333);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(273, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Seuil de r�approvisionnement :";
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
			// Ref
			// 
			this->Ref->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Ref->Location = System::Drawing::Point(896, 209);
			this->Ref->Name = L"Ref";
			this->Ref->Size = System::Drawing::Size(188, 24);
			this->Ref->TabIndex = 14;
			// 
			// libelle
			// 
			this->libelle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->libelle->Location = System::Drawing::Point(896, 249);
			this->libelle->Name = L"libelle";
			this->libelle->Size = System::Drawing::Size(188, 24);
			this->libelle->TabIndex = 15;
			// 
			// quantite
			// 
			this->quantite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantite->Location = System::Drawing::Point(896, 291);
			this->quantite->Name = L"quantite";
			this->quantite->Size = System::Drawing::Size(188, 24);
			this->quantite->TabIndex = 16;
			// 
			// prix
			// 
			this->prix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->prix->Location = System::Drawing::Point(896, 375);
			this->prix->Name = L"prix";
			this->prix->Size = System::Drawing::Size(188, 24);
			this->prix->TabIndex = 17;
			// 
			// seuil
			// 
			this->seuil->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seuil->Location = System::Drawing::Point(896, 334);
			this->seuil->Name = L"seuil";
			this->seuil->Size = System::Drawing::Size(188, 24);
			this->seuil->TabIndex = 18;
			// 
			// TVA
			// 
			this->TVA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TVA->Location = System::Drawing::Point(896, 418);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(188, 24);
			this->TVA->TabIndex = 19;
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
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(946, 475);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 36);
			this->button7->TabIndex = 22;
			this->button7->Text = L"Ajouter";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(655, 475);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(138, 36);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Retirer";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// Panel_Stock
			// 
			this->Panel_Stock->Controls->Add(this->button_afficher_stock);
			this->Panel_Stock->Controls->Add(this->button9);
			this->Panel_Stock->Controls->Add(this->button8);
			this->Panel_Stock->Controls->Add(this->button7);
			this->Panel_Stock->Controls->Add(this->button6);
			this->Panel_Stock->Controls->Add(this->dataGridView1);
			this->Panel_Stock->Controls->Add(this->TVA);
			this->Panel_Stock->Controls->Add(this->seuil);
			this->Panel_Stock->Controls->Add(this->prix);
			this->Panel_Stock->Controls->Add(this->quantite);
			this->Panel_Stock->Controls->Add(this->libelle);
			this->Panel_Stock->Controls->Add(this->Ref);
			this->Panel_Stock->Controls->Add(this->label8);
			this->Panel_Stock->Controls->Add(this->label7);
			this->Panel_Stock->Controls->Add(this->label6);
			this->Panel_Stock->Controls->Add(this->label5);
			this->Panel_Stock->Controls->Add(this->label4);
			this->Panel_Stock->Controls->Add(this->label3);
			this->Panel_Stock->Controls->Add(this->label2);
			this->Panel_Stock->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Stock->Location = System::Drawing::Point(0, 0);
			this->Panel_Stock->Name = L"Panel_Stock";
			this->Panel_Stock->Size = System::Drawing::Size(1189, 686);
			this->Panel_Stock->TabIndex = 24;
			// 
			// button_afficher_stock
			// 
			this->button_afficher_stock->Location = System::Drawing::Point(799, 517);
			this->button_afficher_stock->Name = L"button_afficher_stock";
			this->button_afficher_stock->Size = System::Drawing::Size(138, 36);
			this->button_afficher_stock->TabIndex = 25;
			this->button_afficher_stock->Text = L"Afficher";
			this->button_afficher_stock->UseVisualStyleBackColor = true;
			this->button_afficher_stock->Click += gcnew System::EventHandler(this, &MyForm::button_afficher_stock_click);
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
			// Panel_Client
			// 
			this->Panel_Client->Controls->Add(this->button17);
			this->Panel_Client->Controls->Add(this->client_afficher);
			this->Panel_Client->Controls->Add(this->button16);
			this->Panel_Client->Controls->Add(this->adresse_numero_de_client);
			this->Panel_Client->Controls->Add(this->label21);
			this->Panel_Client->Controls->Add(this->adresse_libelle_de_voie);
			this->Panel_Client->Controls->Add(this->label20);
			this->Panel_Client->Controls->Add(this->button13);
			this->Panel_Client->Controls->Add(this->button14);
			this->Panel_Client->Controls->Add(this->button15);
			this->Panel_Client->Controls->Add(this->dataGridView3);
			this->Panel_Client->Controls->Add(this->adresse_numero);
			this->Panel_Client->Controls->Add(this->adresse_type_de_voie);
			this->Panel_Client->Controls->Add(this->adresse_code_postal);
			this->Panel_Client->Controls->Add(this->adresse_ville);
			this->Panel_Client->Controls->Add(this->adresse_id);
			this->Panel_Client->Controls->Add(this->label9);
			this->Panel_Client->Controls->Add(this->label16);
			this->Panel_Client->Controls->Add(this->label17);
			this->Panel_Client->Controls->Add(this->label18);
			this->Panel_Client->Controls->Add(this->label19);
			this->Panel_Client->Controls->Add(this->button10);
			this->Panel_Client->Controls->Add(this->button11);
			this->Panel_Client->Controls->Add(this->button12);
			this->Panel_Client->Controls->Add(this->dataGridView2);
			this->Panel_Client->Controls->Add(this->client_date_naissance);
			this->Panel_Client->Controls->Add(this->client_nombre_achat);
			this->Panel_Client->Controls->Add(this->client_prenom);
			this->Panel_Client->Controls->Add(this->client_nom);
			this->Panel_Client->Controls->Add(this->client_numero);
			this->Panel_Client->Controls->Add(this->label10);
			this->Panel_Client->Controls->Add(this->label11);
			this->Panel_Client->Controls->Add(this->label12);
			this->Panel_Client->Controls->Add(this->label13);
			this->Panel_Client->Controls->Add(this->label14);
			this->Panel_Client->Controls->Add(this->label15);
			this->Panel_Client->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Client->Location = System::Drawing::Point(0, 0);
			this->Panel_Client->Name = L"Panel_Client";
			this->Panel_Client->Size = System::Drawing::Size(1189, 686);
			this->Panel_Client->TabIndex = 0;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(1065, 446);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(99, 120);
			this->button17->TabIndex = 61;
			this->button17->Text = L"Afficher";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click_1);
			// 
			// client_afficher
			// 
			this->client_afficher->Location = System::Drawing::Point(526, 436);
			this->client_afficher->Name = L"client_afficher";
			this->client_afficher->Size = System::Drawing::Size(99, 121);
			this->client_afficher->TabIndex = 60;
			this->client_afficher->Text = L"Afficher";
			this->client_afficher->UseVisualStyleBackColor = true;
			this->client_afficher->Click += gcnew System::EventHandler(this, &MyForm::client_afficher_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(3, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(99, 26);
			this->button16->TabIndex = 59;
			this->button16->Text = L"Retour";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// adresse_numero_de_client
			// 
			this->adresse_numero_de_client->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_numero_de_client->Location = System::Drawing::Point(781, 618);
			this->adresse_numero_de_client->Name = L"adresse_numero_de_client";
			this->adresse_numero_de_client->Size = System::Drawing::Size(149, 24);
			this->adresse_numero_de_client->TabIndex = 58;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(607, 618);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(169, 24);
			this->label21->TabIndex = 57;
			this->label21->Text = L"Num�ro de Client :";
			// 
			// adresse_libelle_de_voie
			// 
			this->adresse_libelle_de_voie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_libelle_de_voie->Location = System::Drawing::Point(781, 588);
			this->adresse_libelle_de_voie->Name = L"adresse_libelle_de_voie";
			this->adresse_libelle_de_voie->Size = System::Drawing::Size(149, 24);
			this->adresse_libelle_de_voie->TabIndex = 56;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(686, 527);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(90, 24);
			this->label20->TabIndex = 55;
			this->label20->Text = L"Num�ro :";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(961, 540);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 26);
			this->button13->TabIndex = 54;
			this->button13->Text = L"Retirer";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(960, 445);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(99, 26);
			this->button14->TabIndex = 53;
			this->button14->Text = L"Ajouter";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(961, 492);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(99, 26);
			this->button15->TabIndex = 52;
			this->button15->Text = L"Modifier";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(678, 145);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(434, 268);
			this->dataGridView3->TabIndex = 51;
			// 
			// adresse_numero
			// 
			this->adresse_numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse_numero->Location = System::Drawing::Point(781, 528);
			this->adresse_numero->Name = L"adresse_numero";
			this->adresse_numero->Size = System::Drawing::Size(149, 24);
			this->adresse_numero->TabIndex = 50;
			// 
			// adresse_type_de_voie
			// 
			this->adresse_type_de_voie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_type_de_voie->Location = System::Drawing::Point(781, 558);
			this->adresse_type_de_voie->Name = L"adresse_type_de_voie";
			this->adresse_type_de_voie->Size = System::Drawing::Size(149, 24);
			this->adresse_type_de_voie->TabIndex = 49;
			// 
			// adresse_code_postal
			// 
			this->adresse_code_postal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->adresse_code_postal->Location = System::Drawing::Point(781, 498);
			this->adresse_code_postal->Name = L"adresse_code_postal";
			this->adresse_code_postal->Size = System::Drawing::Size(149, 24);
			this->adresse_code_postal->TabIndex = 48;
			// 
			// adresse_ville
			// 
			this->adresse_ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse_ville->Location = System::Drawing::Point(781, 468);
			this->adresse_ville->Name = L"adresse_ville";
			this->adresse_ville->Size = System::Drawing::Size(149, 24);
			this->adresse_ville->TabIndex = 47;
			// 
			// adresse_id
			// 
			this->adresse_id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->adresse_id->Location = System::Drawing::Point(781, 438);
			this->adresse_id->Name = L"adresse_id";
			this->adresse_id->Size = System::Drawing::Size(149, 24);
			this->adresse_id->TabIndex = 46;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(641, 557);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(134, 24);
			this->label9->TabIndex = 45;
			this->label9->Text = L"Type de Voie :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(633, 587);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(143, 24);
			this->label16->TabIndex = 44;
			this->label16->Text = L"Libell� de voie :";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(719, 468);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(56, 24);
			this->label17->TabIndex = 43;
			this->label17->Text = L"Ville :";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(655, 497);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(120, 24);
			this->label18->TabIndex = 42;
			this->label18->Text = L"Code postal :";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(738, 438);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(37, 24);
			this->label19->TabIndex = 41;
			this->label19->Text = L"ID :";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(422, 531);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 26);
			this->button10->TabIndex = 40;
			this->button10->Text = L"Retirer";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(421, 436);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 26);
			this->button11->TabIndex = 39;
			this->button11->Text = L"Ajouter";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(422, 483);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 26);
			this->button12->TabIndex = 38;
			this->button12->Text = L"Modifier";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(63, 145);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(458, 268);
			this->dataGridView2->TabIndex = 37;
			// 
			// client_date_naissance
			// 
			this->client_date_naissance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->client_date_naissance->Location = System::Drawing::Point(242, 519);
			this->client_date_naissance->Name = L"client_date_naissance";
			this->client_date_naissance->Size = System::Drawing::Size(149, 24);
			this->client_date_naissance->TabIndex = 35;
			// 
			// client_nombre_achat
			// 
			this->client_nombre_achat->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->client_nombre_achat->Location = System::Drawing::Point(242, 549);
			this->client_nombre_achat->Name = L"client_nombre_achat";
			this->client_nombre_achat->Size = System::Drawing::Size(149, 24);
			this->client_nombre_achat->TabIndex = 34;
			// 
			// client_prenom
			// 
			this->client_prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->client_prenom->Location = System::Drawing::Point(242, 489);
			this->client_prenom->Name = L"client_prenom";
			this->client_prenom->Size = System::Drawing::Size(149, 24);
			this->client_prenom->TabIndex = 33;
			// 
			// client_nom
			// 
			this->client_nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->client_nom->Location = System::Drawing::Point(242, 459);
			this->client_nom->Name = L"client_nom";
			this->client_nom->Size = System::Drawing::Size(149, 24);
			this->client_nom->TabIndex = 32;
			// 
			// client_numero
			// 
			this->client_numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->client_numero->Location = System::Drawing::Point(242, 429);
			this->client_numero->Name = L"client_numero";
			this->client_numero->Size = System::Drawing::Size(149, 24);
			this->client_numero->TabIndex = 31;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(82, 549);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(154, 24);
			this->label10->TabIndex = 29;
			this->label10->Text = L"Nombre d\'achat :";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(61, 519);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(175, 24);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Date de naissance :";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(149, 489);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(88, 24);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Pr�nom :";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(178, 459);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(61, 24);
			this->label13->TabIndex = 26;
			this->label13->Text = L"Nom :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(74, 429);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(166, 24);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Num�ro de client :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(476, 64);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(275, 39);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Gestion du client";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 686);
			this->Controls->Add(this->Panel_Bienvenue);
			this->Controls->Add(this->Panel_Client);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Panel_Bienvenue->ResumeLayout(false);
			this->Panel_Bienvenue->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Panel_Stock->ResumeLayout(false);
			this->Panel_Stock->PerformLayout();
			this->Panel_Client->ResumeLayout(false);
			this->Panel_Client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Stock->Visible = false;
		this->Panel_Client->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
		   //##############PANEL BIENVENUE################
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Client->Visible = true;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Stock->Visible = true;
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
	}
		   //##############PANEL ADRESSE################
	private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) { // ajouter adresse
		Client^ adresse = gcnew Client();
		adresse->ajouterAdresse(this->adresse_code_postal->Text, this->adresse_ville->Text, this->adresse_libelle_de_voie->Text, this->adresse_type_de_voie->Text, this->adresse_numero->Text, this->adresse_numero_de_client->Text);
		this->adresse_code_postal->Clear();
		this->adresse_ville->Clear();
		this->adresse_libelle_de_voie->Clear();
		this->adresse_type_de_voie->Clear();
		this->adresse_numero->Clear();
		this->adresse_numero_de_client->Clear();
	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) { // modifier client
		Client^ client = gcnew Client();
		client->modifierAdresse(this->adresse_id->Text, this->adresse_code_postal->Text, this->adresse_ville->Text, this->adresse_libelle_de_voie->Text, this->adresse_type_de_voie->Text, this->adresse_numero->Text, this->adresse_numero_de_client->Text);
		this->adresse_id->Clear();
		this->client_numero->Clear();
		this->client_nom->Clear();
		this->client_prenom->Clear();
		this->client_date_naissance->Clear();
		this->client_nombre_achat->Clear();
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) { // supprimer client
		Client^ client = gcnew Client();
		client->supprimer(this->adresse_id->Text);
		this->adresse_id->Clear();
	}
	private: System::Void button17_Click_1(System::Object^ sender, System::EventArgs^ e) { //afficher client
		DataSet^ objdata = gcnew DataSet();
		Client^ client = gcnew Client();
		client->afficherAdresse(this->client_numero->Text, objdata);
		dataGridView3->DataSource = objdata;
		dataGridView3->DataMember = "Adresse";
	}
		   //##############PANEL CLIENT################
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { // quitter client
		this->Panel_Client->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) { // ajouter client
		Client^ client = gcnew Client();
		client->ajouter(this->client_nom->Text, this->client_prenom->Text, this->client_date_naissance->Text, this->client_nombre_achat->Text);
		this->client_nom->Clear();
		this->client_prenom->Clear();
		this->client_date_naissance->Clear();
		this->client_nombre_achat->Clear();
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { // modifier client
		Client^ client = gcnew Client();
		client->modifier(this->client_numero->Text, this->client_nom->Text, this->client_prenom->Text, this->client_date_naissance->Text, this->client_nombre_achat->Text);
		this->client_numero->Clear();
		this->client_nom->Clear();
		this->client_prenom->Clear();
		this->client_date_naissance->Clear();
		this->client_nombre_achat->Clear();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // supprimer client
		Client^ client = gcnew Client();
		client->supprimer(this->client_numero->Text);
		this->client_numero->Clear();
	}
	private: System::Void client_afficher_Click(System::Object^ sender, System::EventArgs^ e) { //afficher client
		DataSet^ objdata = gcnew DataSet();
		Client^ client = gcnew Client();
		client->afficherClient(this->client_numero->Text, objdata);
		dataGridView2->DataSource = objdata;
		dataGridView2->DataMember = "Client";
	}
		   //##############PANEL STOCK################
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //quitter stock
		this->Panel_Stock->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // ajouter stock
		Stock^ article = gcnew Stock();
		article->ajouter(this->libelle->Text, this->quantite->Text, this->seuil->Text, this->prix->Text, this->TVA->Text);
		this->libelle->Clear();
		this->quantite->Clear();
		this->seuil->Clear();
		this->prix->Clear();
		this->TVA->Clear();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) { // modifier stock
		Stock^ article = gcnew Stock();
		article->modifier(this->Ref->Text, this->libelle->Text, this->quantite->Text, this->seuil->Text, this->prix->Text, this->TVA->Text);
		this->Ref->Clear();
		this->libelle->Clear();
		this->quantite->Clear();
		this->seuil->Clear();
		this->prix->Clear();
		this->TVA->Clear();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // supprimer stock
		Stock^ article = gcnew Stock();
		article->supprimer(this->Ref->Text);
		this->Ref->Clear();
	}
	private: System::Void button_afficher_stock_click(System::Object^ sender, System::EventArgs^ e) { //bouton afficher stock
		DataSet^ objdata = gcnew DataSet();
		Stock^ article = gcnew Stock();
		article->afficher(this->Ref->Text, objdata);
		dataGridView1->DataSource = objdata;
		dataGridView1->DataMember = "Stock";
	}
		   //##############PANEL COMMANDES################

		   //##############PANEL PERSONNEL################

		   //##############PANEL STATISTIQUES################



};
}
