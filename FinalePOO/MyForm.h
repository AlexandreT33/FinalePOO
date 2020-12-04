#pragma once
#include "ClasseStock.h"
#include "Client.h"
#include "Personnel.h"
#include "Affichage.h"
#include "ClasseCommande.h"

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

	private: System::Windows::Forms::Panel^ Panel_Client;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;

	private: System::Windows::Forms::TextBox^ client_date_naissance;




	private: System::Windows::Forms::TextBox^ client_prenom;

	private: System::Windows::Forms::TextBox^ client_nom;


	private: System::Windows::Forms::TextBox^ client_numero;






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

	private: System::Windows::Forms::Panel^ Panel_Personnel;
	private: System::Windows::Forms::Button^ Personnel_Retour;




	private: System::Windows::Forms::TextBox^ Personnel_Adresse_LVoie;

	private: System::Windows::Forms::Label^ label23;




	private: System::Windows::Forms::DataGridView^ Personnel_DataGridView;
	private: System::Windows::Forms::TextBox^ Personnel_Adresse_Numero;
	private: System::Windows::Forms::TextBox^ Personnel_Adresse_TVoie;





	private: System::Windows::Forms::TextBox^ Personnel_Adresse_CodeP;

	private: System::Windows::Forms::TextBox^ Personnel_Adresse_Ville;





	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;

	private: System::Windows::Forms::Button^ Personnel_Retirer;

	private: System::Windows::Forms::Button^ Personnel_Ajouter;
	private: System::Windows::Forms::Button^ Personnel_Modifier;

	private: System::Windows::Forms::TextBox^ Personnel_IDSup;




	private: System::Windows::Forms::TextBox^ Personnel_Prenom;

	private: System::Windows::Forms::TextBox^ Personnel_Nom;

	private: System::Windows::Forms::TextBox^ Personnel_Numero;

	private: System::Windows::Forms::Label^ label29;

	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;

	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::TextBox^ Personnel_Date_Embauche;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Panel^ Panel_Commandes;
	private: System::Windows::Forms::Button^ Commandes_retour;
	private: System::Windows::Forms::DataGridView^ Commandes_DataGridView;
	private: System::Windows::Forms::Button^ Commandes_button_commandes;
	private: System::Windows::Forms::Button^ Commandes_button_client;
	private: System::Windows::Forms::Button^ Commandes_button_Retirer;
	private: System::Windows::Forms::Button^ Commandes_button_Modifier;
	private: System::Windows::Forms::Button^ Commandes_button_Ajouter;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::TextBox^ Commandes_DateLivraison;
	private: System::Windows::Forms::TextBox^ Commandes_DateEmmission;
	private: System::Windows::Forms::TextBox^ Commandes_NumClient;
	private: System::Windows::Forms::TextBox^ Commandes_IdCommande;
	private: System::Windows::Forms::Button^ Commandes_buttonLivraison;
	private: System::Windows::Forms::Button^ Commandes_buttonPaiment;
	private: System::Windows::Forms::Button^ Commandes_buttonPanier;
	private: System::Windows::Forms::Button^ Commandes_buttonActualiser;
	private: System::Windows::Forms::Panel^ Commandes_Panel_Panier;
	private: System::Windows::Forms::Button^ Commandes_Panier_buttonRetirer;

	private: System::Windows::Forms::Button^ Commandes_Panier_buttonAjouter;




	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ Commandes_Panier_Quantite;



	private: System::Windows::Forms::TextBox^ Commandes_Panier_RefObj;
	private: System::Windows::Forms::DataGridView^ Commandes_Panier_DataGridView;





	private: System::Windows::Forms::Button^ Commandes_Panier_buttonActualiser;
	private: System::Windows::Forms::Button^ Commandes_Panier_buttonRetour;


	private: System::Windows::Forms::Button^ Commandes_Panier_buttonPaniers;

	private: System::Windows::Forms::Button^ Commandes_Panier_buttonArticles;
	private: System::Windows::Forms::Panel^ Commandes_Panel_Livraison;
	private: System::Windows::Forms::Button^ Commandes_Livraison_buttonModifier;




	private: System::Windows::Forms::Button^ Commandes_Livraison_buttonAjouter;




	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::TextBox^ Commandes_Livraison_IDAdresseClient;
	private: System::Windows::Forms::DataGridView^ Commandes_Livraison_DataGridView;








	private: System::Windows::Forms::Button^ Commandes_Livraison_buttonActualiser;

	private: System::Windows::Forms::Button^ Commande_Livraison_buttonRetour;
	private: System::Windows::Forms::Button^ Commandes_Livraison_buttonClients;
	private: System::Windows::Forms::Panel^ Commandes_Panel_Paiments;

	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_AdresseFactu;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_Recu;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonRetirer;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonModifier;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonAjouter;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_MoyenPaiment;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_DateRecu;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_DateEffectue;
	private: System::Windows::Forms::TextBox^ Commandes_Paiments_IDPaiment;
	private: System::Windows::Forms::DataGridView^ Commandes_Paiments_DataGridView;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonActualiser;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonRetour;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonAdresseClient;
	private: System::Windows::Forms::Button^ Commandes_Paiments_buttonPaiments;
	private: System::Windows::Forms::Panel^ Panel_Statistique;

	private: System::Windows::Forms::Button^ button_ProduitSousReapro;
	private: System::Windows::Forms::Button^ button_retour_statitique;
private: System::Windows::Forms::DataGridView^ dataGridView_Statistique;










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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->Panel_Client = (gcnew System::Windows::Forms::Panel());
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
			this->client_date_naissance = (gcnew System::Windows::Forms::TextBox());
			this->client_prenom = (gcnew System::Windows::Forms::TextBox());
			this->client_nom = (gcnew System::Windows::Forms::TextBox());
			this->client_numero = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->Panel_Personnel = (gcnew System::Windows::Forms::Panel());
			this->Personnel_Date_Embauche = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->Personnel_Retour = (gcnew System::Windows::Forms::Button());
			this->Personnel_Adresse_LVoie = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->Personnel_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Personnel_Adresse_Numero = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Adresse_TVoie = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Adresse_CodeP = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Adresse_Ville = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->Personnel_Retirer = (gcnew System::Windows::Forms::Button());
			this->Personnel_Ajouter = (gcnew System::Windows::Forms::Button());
			this->Personnel_Modifier = (gcnew System::Windows::Forms::Button());
			this->Personnel_IDSup = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Prenom = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Nom = (gcnew System::Windows::Forms::TextBox());
			this->Personnel_Numero = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->Panel_Commandes = (gcnew System::Windows::Forms::Panel());
			this->Commandes_button_Retirer = (gcnew System::Windows::Forms::Button());
			this->Commandes_button_Modifier = (gcnew System::Windows::Forms::Button());
			this->Commandes_button_Ajouter = (gcnew System::Windows::Forms::Button());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->Commandes_DateLivraison = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_DateEmmission = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_NumClient = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_IdCommande = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_buttonLivraison = (gcnew System::Windows::Forms::Button());
			this->Commandes_buttonPaiment = (gcnew System::Windows::Forms::Button());
			this->Commandes_buttonPanier = (gcnew System::Windows::Forms::Button());
			this->Commandes_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Commandes_buttonActualiser = (gcnew System::Windows::Forms::Button());
			this->Commandes_retour = (gcnew System::Windows::Forms::Button());
			this->Commandes_button_commandes = (gcnew System::Windows::Forms::Button());
			this->Commandes_button_client = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panel_Panier = (gcnew System::Windows::Forms::Panel());
			this->Commandes_Panier_buttonRetirer = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panier_buttonAjouter = (gcnew System::Windows::Forms::Button());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->Commandes_Panier_Quantite = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Panier_RefObj = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Panier_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Commandes_Panier_buttonActualiser = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panier_buttonRetour = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panier_buttonPaniers = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panier_buttonArticles = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panel_Livraison = (gcnew System::Windows::Forms::Panel());
			this->Commandes_Livraison_buttonModifier = (gcnew System::Windows::Forms::Button());
			this->Commandes_Livraison_buttonAjouter = (gcnew System::Windows::Forms::Button());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->Commandes_Livraison_IDAdresseClient = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Livraison_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Commandes_Livraison_buttonActualiser = (gcnew System::Windows::Forms::Button());
			this->Commande_Livraison_buttonRetour = (gcnew System::Windows::Forms::Button());
			this->Commandes_Livraison_buttonClients = (gcnew System::Windows::Forms::Button());
			this->Commandes_Panel_Paiments = (gcnew System::Windows::Forms::Panel());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->Commandes_Paiments_AdresseFactu = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_Recu = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_buttonRetirer = (gcnew System::Windows::Forms::Button());
			this->Commandes_Paiments_buttonModifier = (gcnew System::Windows::Forms::Button());
			this->Commandes_Paiments_buttonAjouter = (gcnew System::Windows::Forms::Button());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->Commandes_Paiments_MoyenPaiment = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_DateRecu = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_DateEffectue = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_IDPaiment = (gcnew System::Windows::Forms::TextBox());
			this->Commandes_Paiments_DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Commandes_Paiments_buttonActualiser = (gcnew System::Windows::Forms::Button());
			this->Commandes_Paiments_buttonRetour = (gcnew System::Windows::Forms::Button());
			this->Commandes_Paiments_buttonAdresseClient = (gcnew System::Windows::Forms::Button());
			this->Commandes_Paiments_buttonPaiments = (gcnew System::Windows::Forms::Button());
			this->Panel_Statistique = (gcnew System::Windows::Forms::Panel());
			this->button_retour_statitique = (gcnew System::Windows::Forms::Button());
			this->button_ProduitSousReapro = (gcnew System::Windows::Forms::Button());
			this->dataGridView_Statistique = (gcnew System::Windows::Forms::DataGridView());
			this->Panel_Bienvenue->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Panel_Stock->SuspendLayout();
			this->Panel_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->Panel_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Personnel_DataGridView))->BeginInit();
			this->Panel_Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_DataGridView))->BeginInit();
			this->Commandes_Panel_Panier->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Panier_DataGridView))->BeginInit();
			this->Commandes_Panel_Livraison->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Livraison_DataGridView))->BeginInit();
			this->Commandes_Panel_Paiments->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Paiments_DataGridView))->BeginInit();
			this->Panel_Statistique->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Statistique))->BeginInit();
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
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
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
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
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
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button3->Location = System::Drawing::Point(474, 339);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(219, 56);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Gestion Stock";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
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
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
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
			this->Panel_Bienvenue->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Panel_Bienvenue->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Bienvenue.BackgroundImage")));
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
			this->label2->BackColor = System::Drawing::Color::Transparent;
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
			this->label3->BackColor = System::Drawing::Color::Transparent;
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
			this->label4->BackColor = System::Drawing::Color::Transparent;
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
			this->label5->BackColor = System::Drawing::Color::Transparent;
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
			this->label6->BackColor = System::Drawing::Color::Transparent;
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
			this->label7->BackColor = System::Drawing::Color::Transparent;
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
			this->label8->BackColor = System::Drawing::Color::Transparent;
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
			this->Panel_Stock->BackColor = System::Drawing::Color::Orange;
			this->Panel_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Stock.BackgroundImage")));
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
			this->Panel_Client->BackColor = System::Drawing::Color::Transparent;
			this->Panel_Client->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Client.BackgroundImage")));
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
			this->Panel_Client->Controls->Add(this->client_date_naissance);
			this->Panel_Client->Controls->Add(this->client_prenom);
			this->Panel_Client->Controls->Add(this->client_nom);
			this->Panel_Client->Controls->Add(this->client_numero);
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
			this->label21->Size = System::Drawing::Size(168, 24);
			this->label21->TabIndex = 57;
			this->label21->Text = L"Numéro de Client :";
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
			this->label20->Size = System::Drawing::Size(89, 24);
			this->label20->TabIndex = 55;
			this->label20->Text = L"Numéro :";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(961, 540);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(99, 26);
			this->button13->TabIndex = 54;
			this->button13->Text = L"Retirer";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
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
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(24, 100);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->Size = System::Drawing::Size(1134, 313);
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
			this->label16->Size = System::Drawing::Size(142, 24);
			this->label16->TabIndex = 44;
			this->label16->Text = L"Libellé de voie :";
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
			this->label19->Location = System::Drawing::Point(664, 438);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(112, 24);
			this->label19->TabIndex = 41;
			this->label19->Text = L"ID Adresse :";
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(345, 558);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(99, 26);
			this->button10->TabIndex = 40;
			this->button10->Text = L"Retirer";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(94, 558);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(99, 26);
			this->button11->TabIndex = 39;
			this->button11->Text = L"Ajouter";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(223, 558);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(99, 26);
			this->button12->TabIndex = 38;
			this->button12->Text = L"Modifier";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
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
			this->label12->Size = System::Drawing::Size(87, 24);
			this->label12->TabIndex = 27;
			this->label12->Text = L"Prénom :";
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
			this->label14->Size = System::Drawing::Size(165, 24);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Numéro de client :";
			// 
			// label15
			// 
			this->label15->Location = System::Drawing::Point(0, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(100, 23);
			this->label15->TabIndex = 60;
			// 
			// Panel_Personnel
			// 
			this->Panel_Personnel->BackColor = System::Drawing::Color::Transparent;
			this->Panel_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Personnel.BackgroundImage")));
			this->Panel_Personnel->Controls->Add(this->Personnel_Date_Embauche);
			this->Panel_Personnel->Controls->Add(this->label28);
			this->Panel_Personnel->Controls->Add(this->label35);
			this->Panel_Personnel->Controls->Add(this->Personnel_Retour);
			this->Panel_Personnel->Controls->Add(this->Personnel_Adresse_LVoie);
			this->Panel_Personnel->Controls->Add(this->label23);
			this->Panel_Personnel->Controls->Add(this->Personnel_DataGridView);
			this->Panel_Personnel->Controls->Add(this->Personnel_Adresse_Numero);
			this->Panel_Personnel->Controls->Add(this->Personnel_Adresse_TVoie);
			this->Panel_Personnel->Controls->Add(this->Personnel_Adresse_CodeP);
			this->Panel_Personnel->Controls->Add(this->Personnel_Adresse_Ville);
			this->Panel_Personnel->Controls->Add(this->label24);
			this->Panel_Personnel->Controls->Add(this->label25);
			this->Panel_Personnel->Controls->Add(this->label26);
			this->Panel_Personnel->Controls->Add(this->label27);
			this->Panel_Personnel->Controls->Add(this->Personnel_Retirer);
			this->Panel_Personnel->Controls->Add(this->Personnel_Ajouter);
			this->Panel_Personnel->Controls->Add(this->Personnel_Modifier);
			this->Panel_Personnel->Controls->Add(this->Personnel_IDSup);
			this->Panel_Personnel->Controls->Add(this->Personnel_Prenom);
			this->Panel_Personnel->Controls->Add(this->Personnel_Nom);
			this->Panel_Personnel->Controls->Add(this->Personnel_Numero);
			this->Panel_Personnel->Controls->Add(this->label29);
			this->Panel_Personnel->Controls->Add(this->label31);
			this->Panel_Personnel->Controls->Add(this->label32);
			this->Panel_Personnel->Controls->Add(this->label33);
			this->Panel_Personnel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Personnel->Location = System::Drawing::Point(0, 0);
			this->Panel_Personnel->Name = L"Panel_Personnel";
			this->Panel_Personnel->Size = System::Drawing::Size(1189, 686);
			this->Panel_Personnel->TabIndex = 0;
			// 
			// Personnel_Date_Embauche
			// 
			this->Personnel_Date_Embauche->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Date_Embauche->Location = System::Drawing::Point(394, 541);
			this->Personnel_Date_Embauche->Name = L"Personnel_Date_Embauche";
			this->Personnel_Date_Embauche->Size = System::Drawing::Size(149, 24);
			this->Personnel_Date_Embauche->TabIndex = 96;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(219, 542);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(169, 24);
			this->label28->TabIndex = 95;
			this->label28->Text = L"Date d\'embauche :";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(430, 39);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(324, 37);
			this->label35->TabIndex = 94;
			this->label35->Text = L"Gestion du Personnel";
			// 
			// Personnel_Retour
			// 
			this->Personnel_Retour->Location = System::Drawing::Point(3, 3);
			this->Personnel_Retour->Name = L"Personnel_Retour";
			this->Personnel_Retour->Size = System::Drawing::Size(99, 26);
			this->Personnel_Retour->TabIndex = 92;
			this->Personnel_Retour->Text = L"Retour";
			this->Personnel_Retour->UseVisualStyleBackColor = true;
			this->Personnel_Retour->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Retour_Click);
			// 
			// Personnel_Adresse_LVoie
			// 
			this->Personnel_Adresse_LVoie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Adresse_LVoie->Location = System::Drawing::Point(802, 541);
			this->Personnel_Adresse_LVoie->Name = L"Personnel_Adresse_LVoie";
			this->Personnel_Adresse_LVoie->Size = System::Drawing::Size(149, 24);
			this->Personnel_Adresse_LVoie->TabIndex = 89;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(707, 480);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(89, 24);
			this->label23->TabIndex = 88;
			this->label23->Text = L"Numéro :";
			// 
			// Personnel_DataGridView
			// 
			this->Personnel_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Personnel_DataGridView->Location = System::Drawing::Point(39, 122);
			this->Personnel_DataGridView->Name = L"Personnel_DataGridView";
			this->Personnel_DataGridView->Size = System::Drawing::Size(1134, 313);
			this->Personnel_DataGridView->TabIndex = 84;
			// 
			// Personnel_Adresse_Numero
			// 
			this->Personnel_Adresse_Numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Adresse_Numero->Location = System::Drawing::Point(802, 481);
			this->Personnel_Adresse_Numero->Name = L"Personnel_Adresse_Numero";
			this->Personnel_Adresse_Numero->Size = System::Drawing::Size(149, 24);
			this->Personnel_Adresse_Numero->TabIndex = 83;
			// 
			// Personnel_Adresse_TVoie
			// 
			this->Personnel_Adresse_TVoie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Adresse_TVoie->Location = System::Drawing::Point(802, 511);
			this->Personnel_Adresse_TVoie->Name = L"Personnel_Adresse_TVoie";
			this->Personnel_Adresse_TVoie->Size = System::Drawing::Size(149, 24);
			this->Personnel_Adresse_TVoie->TabIndex = 82;
			// 
			// Personnel_Adresse_CodeP
			// 
			this->Personnel_Adresse_CodeP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Adresse_CodeP->Location = System::Drawing::Point(802, 451);
			this->Personnel_Adresse_CodeP->Name = L"Personnel_Adresse_CodeP";
			this->Personnel_Adresse_CodeP->Size = System::Drawing::Size(149, 24);
			this->Personnel_Adresse_CodeP->TabIndex = 81;
			// 
			// Personnel_Adresse_Ville
			// 
			this->Personnel_Adresse_Ville->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Adresse_Ville->Location = System::Drawing::Point(394, 576);
			this->Personnel_Adresse_Ville->Name = L"Personnel_Adresse_Ville";
			this->Personnel_Adresse_Ville->Size = System::Drawing::Size(149, 24);
			this->Personnel_Adresse_Ville->TabIndex = 80;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(662, 510);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(134, 24);
			this->label24->TabIndex = 78;
			this->label24->Text = L"Type de Voie :";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(654, 540);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(142, 24);
			this->label25->TabIndex = 77;
			this->label25->Text = L"Libellé de voie :";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(330, 576);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(56, 24);
			this->label26->TabIndex = 76;
			this->label26->Text = L"Ville :";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(676, 450);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(120, 24);
			this->label27->TabIndex = 75;
			this->label27->Text = L"Code postal :";
			// 
			// Personnel_Retirer
			// 
			this->Personnel_Retirer->Location = System::Drawing::Point(834, 609);
			this->Personnel_Retirer->Name = L"Personnel_Retirer";
			this->Personnel_Retirer->Size = System::Drawing::Size(99, 26);
			this->Personnel_Retirer->TabIndex = 73;
			this->Personnel_Retirer->Text = L"Retirer";
			this->Personnel_Retirer->UseVisualStyleBackColor = true;
			this->Personnel_Retirer->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Retirer_Click);
			// 
			// Personnel_Ajouter
			// 
			this->Personnel_Ajouter->Location = System::Drawing::Point(590, 609);
			this->Personnel_Ajouter->Name = L"Personnel_Ajouter";
			this->Personnel_Ajouter->Size = System::Drawing::Size(99, 26);
			this->Personnel_Ajouter->TabIndex = 72;
			this->Personnel_Ajouter->Text = L"Ajouter";
			this->Personnel_Ajouter->UseVisualStyleBackColor = true;
			this->Personnel_Ajouter->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Ajouter_Click);
			// 
			// Personnel_Modifier
			// 
			this->Personnel_Modifier->Location = System::Drawing::Point(711, 609);
			this->Personnel_Modifier->Name = L"Personnel_Modifier";
			this->Personnel_Modifier->Size = System::Drawing::Size(99, 26);
			this->Personnel_Modifier->TabIndex = 71;
			this->Personnel_Modifier->Text = L"Modifier";
			this->Personnel_Modifier->UseVisualStyleBackColor = true;
			this->Personnel_Modifier->Click += gcnew System::EventHandler(this, &MyForm::Personnel_Modifier_Click);
			// 
			// Personnel_IDSup
			// 
			this->Personnel_IDSup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_IDSup->Location = System::Drawing::Point(802, 570);
			this->Personnel_IDSup->Name = L"Personnel_IDSup";
			this->Personnel_IDSup->Size = System::Drawing::Size(149, 24);
			this->Personnel_IDSup->TabIndex = 69;
			// 
			// Personnel_Prenom
			// 
			this->Personnel_Prenom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Prenom->Location = System::Drawing::Point(394, 510);
			this->Personnel_Prenom->Name = L"Personnel_Prenom";
			this->Personnel_Prenom->Size = System::Drawing::Size(149, 24);
			this->Personnel_Prenom->TabIndex = 68;
			// 
			// Personnel_Nom
			// 
			this->Personnel_Nom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Personnel_Nom->Location = System::Drawing::Point(394, 480);
			this->Personnel_Nom->Name = L"Personnel_Nom";
			this->Personnel_Nom->Size = System::Drawing::Size(149, 24);
			this->Personnel_Nom->TabIndex = 67;
			// 
			// Personnel_Numero
			// 
			this->Personnel_Numero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->Personnel_Numero->Location = System::Drawing::Point(394, 450);
			this->Personnel_Numero->Name = L"Personnel_Numero";
			this->Personnel_Numero->Size = System::Drawing::Size(149, 24);
			this->Personnel_Numero->TabIndex = 66;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(671, 570);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(125, 24);
			this->label29->TabIndex = 65;
			this->label29->Text = L"ID Supérieur :";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(301, 510);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(87, 24);
			this->label31->TabIndex = 63;
			this->label31->Text = L"Prénom :";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(330, 480);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(61, 24);
			this->label32->TabIndex = 62;
			this->label32->Text = L"Nom :";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(185, 450);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(206, 24);
			this->label33->TabIndex = 61;
			this->label33->Text = L"Numéro de personnel :";
			// 
			// Panel_Commandes
			// 
			this->Panel_Commandes->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Commandes.BackgroundImage")));
			this->Panel_Commandes->Controls->Add(this->Commandes_button_Retirer);
			this->Panel_Commandes->Controls->Add(this->Commandes_button_Modifier);
			this->Panel_Commandes->Controls->Add(this->Commandes_button_Ajouter);
			this->Panel_Commandes->Controls->Add(this->label36);
			this->Panel_Commandes->Controls->Add(this->label34);
			this->Panel_Commandes->Controls->Add(this->label30);
			this->Panel_Commandes->Controls->Add(this->label22);
			this->Panel_Commandes->Controls->Add(this->Commandes_DateLivraison);
			this->Panel_Commandes->Controls->Add(this->Commandes_DateEmmission);
			this->Panel_Commandes->Controls->Add(this->Commandes_NumClient);
			this->Panel_Commandes->Controls->Add(this->Commandes_IdCommande);
			this->Panel_Commandes->Controls->Add(this->Commandes_buttonLivraison);
			this->Panel_Commandes->Controls->Add(this->Commandes_buttonPaiment);
			this->Panel_Commandes->Controls->Add(this->Commandes_buttonPanier);
			this->Panel_Commandes->Controls->Add(this->Commandes_DataGridView);
			this->Panel_Commandes->Controls->Add(this->Commandes_buttonActualiser);
			this->Panel_Commandes->Controls->Add(this->Commandes_retour);
			this->Panel_Commandes->Controls->Add(this->Commandes_button_commandes);
			this->Panel_Commandes->Controls->Add(this->Commandes_button_client);
			this->Panel_Commandes->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Commandes->Location = System::Drawing::Point(0, 0);
			this->Panel_Commandes->Name = L"Panel_Commandes";
			this->Panel_Commandes->Size = System::Drawing::Size(1189, 686);
			this->Panel_Commandes->TabIndex = 0;
			// 
			// Commandes_button_Retirer
			// 
			this->Commandes_button_Retirer->Location = System::Drawing::Point(688, 588);
			this->Commandes_button_Retirer->Name = L"Commandes_button_Retirer";
			this->Commandes_button_Retirer->Size = System::Drawing::Size(112, 31);
			this->Commandes_button_Retirer->TabIndex = 18;
			this->Commandes_button_Retirer->Text = L"Retirer";
			this->Commandes_button_Retirer->UseVisualStyleBackColor = true;
			this->Commandes_button_Retirer->Click += gcnew System::EventHandler(this, &MyForm::Commandes_button_Retirer_Click);
			// 
			// Commandes_button_Modifier
			// 
			this->Commandes_button_Modifier->Location = System::Drawing::Point(546, 588);
			this->Commandes_button_Modifier->Name = L"Commandes_button_Modifier";
			this->Commandes_button_Modifier->Size = System::Drawing::Size(112, 31);
			this->Commandes_button_Modifier->TabIndex = 17;
			this->Commandes_button_Modifier->Text = L"Modifier";
			this->Commandes_button_Modifier->UseVisualStyleBackColor = true;
			this->Commandes_button_Modifier->Click += gcnew System::EventHandler(this, &MyForm::Commandes_button_Modifier_Click);
			// 
			// Commandes_button_Ajouter
			// 
			this->Commandes_button_Ajouter->Location = System::Drawing::Point(408, 588);
			this->Commandes_button_Ajouter->Name = L"Commandes_button_Ajouter";
			this->Commandes_button_Ajouter->Size = System::Drawing::Size(112, 31);
			this->Commandes_button_Ajouter->TabIndex = 16;
			this->Commandes_button_Ajouter->Text = L"Ajouter";
			this->Commandes_button_Ajouter->UseVisualStyleBackColor = true;
			this->Commandes_button_Ajouter->Click += gcnew System::EventHandler(this, &MyForm::Commandes_button_Ajouter_Click);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(543, 543);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(125, 18);
			this->label36->TabIndex = 15;
			this->label36->Text = L"Date de livraison :";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(279, 543);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(135, 18);
			this->label34->TabIndex = 14;
			this->label34->Text = L"Date d\'émmission :";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(574, 413);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(89, 18);
			this->label30->TabIndex = 13;
			this->label30->Text = L"Num Client :";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(302, 410);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(112, 18);
			this->label22->TabIndex = 12;
			this->label22->Text = L"ID Commande :";
			// 
			// Commandes_DateLivraison
			// 
			this->Commandes_DateLivraison->Location = System::Drawing::Point(669, 541);
			this->Commandes_DateLivraison->Name = L"Commandes_DateLivraison";
			this->Commandes_DateLivraison->Size = System::Drawing::Size(100, 20);
			this->Commandes_DateLivraison->TabIndex = 11;
			// 
			// Commandes_DateEmmission
			// 
			this->Commandes_DateEmmission->Location = System::Drawing::Point(420, 541);
			this->Commandes_DateEmmission->Name = L"Commandes_DateEmmission";
			this->Commandes_DateEmmission->Size = System::Drawing::Size(100, 20);
			this->Commandes_DateEmmission->TabIndex = 10;
			// 
			// Commandes_NumClient
			// 
			this->Commandes_NumClient->Location = System::Drawing::Point(669, 411);
			this->Commandes_NumClient->Name = L"Commandes_NumClient";
			this->Commandes_NumClient->Size = System::Drawing::Size(100, 20);
			this->Commandes_NumClient->TabIndex = 9;
			// 
			// Commandes_IdCommande
			// 
			this->Commandes_IdCommande->Location = System::Drawing::Point(420, 408);
			this->Commandes_IdCommande->Name = L"Commandes_IdCommande";
			this->Commandes_IdCommande->Size = System::Drawing::Size(100, 20);
			this->Commandes_IdCommande->TabIndex = 8;
			// 
			// Commandes_buttonLivraison
			// 
			this->Commandes_buttonLivraison->Location = System::Drawing::Point(733, 461);
			this->Commandes_buttonLivraison->Name = L"Commandes_buttonLivraison";
			this->Commandes_buttonLivraison->Size = System::Drawing::Size(147, 46);
			this->Commandes_buttonLivraison->TabIndex = 7;
			this->Commandes_buttonLivraison->Text = L"Livraison";
			this->Commandes_buttonLivraison->UseVisualStyleBackColor = true;
			this->Commandes_buttonLivraison->Click += gcnew System::EventHandler(this, &MyForm::Commandes_buttonLivraison_Click);
			// 
			// Commandes_buttonPaiment
			// 
			this->Commandes_buttonPaiment->Location = System::Drawing::Point(521, 461);
			this->Commandes_buttonPaiment->Name = L"Commandes_buttonPaiment";
			this->Commandes_buttonPaiment->Size = System::Drawing::Size(147, 46);
			this->Commandes_buttonPaiment->TabIndex = 6;
			this->Commandes_buttonPaiment->Text = L"Paiment";
			this->Commandes_buttonPaiment->UseVisualStyleBackColor = true;
			this->Commandes_buttonPaiment->Click += gcnew System::EventHandler(this, &MyForm::Commandes_buttonPaiment_Click);
			// 
			// Commandes_buttonPanier
			// 
			this->Commandes_buttonPanier->Location = System::Drawing::Point(314, 461);
			this->Commandes_buttonPanier->Name = L"Commandes_buttonPanier";
			this->Commandes_buttonPanier->Size = System::Drawing::Size(147, 46);
			this->Commandes_buttonPanier->TabIndex = 5;
			this->Commandes_buttonPanier->Text = L"Panier";
			this->Commandes_buttonPanier->UseVisualStyleBackColor = true;
			this->Commandes_buttonPanier->Click += gcnew System::EventHandler(this, &MyForm::Commandes_buttonPanier_Click);
			// 
			// Commandes_DataGridView
			// 
			this->Commandes_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Commandes_DataGridView->Location = System::Drawing::Point(125, 128);
			this->Commandes_DataGridView->Name = L"Commandes_DataGridView";
			this->Commandes_DataGridView->Size = System::Drawing::Size(921, 255);
			this->Commandes_DataGridView->TabIndex = 0;
			// 
			// Commandes_buttonActualiser
			// 
			this->Commandes_buttonActualiser->Location = System::Drawing::Point(125, 378);
			this->Commandes_buttonActualiser->Name = L"Commandes_buttonActualiser";
			this->Commandes_buttonActualiser->Size = System::Drawing::Size(114, 28);
			this->Commandes_buttonActualiser->TabIndex = 4;
			this->Commandes_buttonActualiser->Text = L"Actualiser";
			this->Commandes_buttonActualiser->UseVisualStyleBackColor = true;
			this->Commandes_buttonActualiser->Click += gcnew System::EventHandler(this, &MyForm::Commandes_buttonActualiser_Click);
			// 
			// Commandes_retour
			// 
			this->Commandes_retour->Location = System::Drawing::Point(3, 3);
			this->Commandes_retour->Name = L"Commandes_retour";
			this->Commandes_retour->Size = System::Drawing::Size(75, 23);
			this->Commandes_retour->TabIndex = 3;
			this->Commandes_retour->Text = L"Retour";
			this->Commandes_retour->UseVisualStyleBackColor = true;
			this->Commandes_retour->Click += gcnew System::EventHandler(this, &MyForm::Commandes_retour_Click);
			// 
			// Commandes_button_commandes
			// 
			this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_button_commandes->Location = System::Drawing::Point(249, 109);
			this->Commandes_button_commandes->Name = L"Commandes_button_commandes";
			this->Commandes_button_commandes->Size = System::Drawing::Size(127, 23);
			this->Commandes_button_commandes->TabIndex = 2;
			this->Commandes_button_commandes->Text = L"Commandes";
			this->Commandes_button_commandes->UseVisualStyleBackColor = false;
			this->Commandes_button_commandes->Click += gcnew System::EventHandler(this, &MyForm::Commandes_button_commandes_Click);
			// 
			// Commandes_button_client
			// 
			this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_button_client->Location = System::Drawing::Point(125, 109);
			this->Commandes_button_client->Name = L"Commandes_button_client";
			this->Commandes_button_client->Size = System::Drawing::Size(127, 23);
			this->Commandes_button_client->TabIndex = 1;
			this->Commandes_button_client->Text = L"Clients";
			this->Commandes_button_client->UseVisualStyleBackColor = false;
			this->Commandes_button_client->Click += gcnew System::EventHandler(this, &MyForm::Commandes_button_client_Click);
			// 
			// Commandes_Panel_Panier
			// 
			this->Commandes_Panel_Panier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Commandes_Panel_Panier.BackgroundImage")));
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonRetirer);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonAjouter);
			this->Commandes_Panel_Panier->Controls->Add(this->label39);
			this->Commandes_Panel_Panier->Controls->Add(this->label40);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_Quantite);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_RefObj);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_DataGridView);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonActualiser);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonRetour);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonPaniers);
			this->Commandes_Panel_Panier->Controls->Add(this->Commandes_Panier_buttonArticles);
			this->Commandes_Panel_Panier->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Commandes_Panel_Panier->Location = System::Drawing::Point(0, 0);
			this->Commandes_Panel_Panier->Name = L"Commandes_Panel_Panier";
			this->Commandes_Panel_Panier->Size = System::Drawing::Size(1189, 686);
			this->Commandes_Panel_Panier->TabIndex = 0;
			// 
			// Commandes_Panier_buttonRetirer
			// 
			this->Commandes_Panier_buttonRetirer->Location = System::Drawing::Point(610, 477);
			this->Commandes_Panier_buttonRetirer->Name = L"Commandes_Panier_buttonRetirer";
			this->Commandes_Panier_buttonRetirer->Size = System::Drawing::Size(112, 31);
			this->Commandes_Panier_buttonRetirer->TabIndex = 37;
			this->Commandes_Panier_buttonRetirer->Text = L"Retirer";
			this->Commandes_Panier_buttonRetirer->UseVisualStyleBackColor = true;
			this->Commandes_Panier_buttonRetirer->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonRetirer_Click);
			// 
			// Commandes_Panier_buttonAjouter
			// 
			this->Commandes_Panier_buttonAjouter->Location = System::Drawing::Point(477, 477);
			this->Commandes_Panier_buttonAjouter->Name = L"Commandes_Panier_buttonAjouter";
			this->Commandes_Panier_buttonAjouter->Size = System::Drawing::Size(112, 31);
			this->Commandes_Panier_buttonAjouter->TabIndex = 35;
			this->Commandes_Panier_buttonAjouter->Text = L"Ajouter";
			this->Commandes_Panier_buttonAjouter->UseVisualStyleBackColor = true;
			this->Commandes_Panier_buttonAjouter->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonAjouter_Click);
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(591, 413);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(71, 18);
			this->label39->TabIndex = 32;
			this->label39->Text = L"Quantité :";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(373, 413);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(78, 18);
			this->label40->TabIndex = 31;
			this->label40->Text = L"Ref Objet :";
			// 
			// Commandes_Panier_Quantite
			// 
			this->Commandes_Panier_Quantite->Location = System::Drawing::Point(668, 411);
			this->Commandes_Panier_Quantite->Name = L"Commandes_Panier_Quantite";
			this->Commandes_Panier_Quantite->Size = System::Drawing::Size(100, 20);
			this->Commandes_Panier_Quantite->TabIndex = 28;
			// 
			// Commandes_Panier_RefObj
			// 
			this->Commandes_Panier_RefObj->Location = System::Drawing::Point(457, 411);
			this->Commandes_Panier_RefObj->Name = L"Commandes_Panier_RefObj";
			this->Commandes_Panier_RefObj->Size = System::Drawing::Size(100, 20);
			this->Commandes_Panier_RefObj->TabIndex = 27;
			// 
			// Commandes_Panier_DataGridView
			// 
			this->Commandes_Panier_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Commandes_Panier_DataGridView->Location = System::Drawing::Point(124, 128);
			this->Commandes_Panier_DataGridView->Name = L"Commandes_Panier_DataGridView";
			this->Commandes_Panier_DataGridView->Size = System::Drawing::Size(921, 255);
			this->Commandes_Panier_DataGridView->TabIndex = 19;
			// 
			// Commandes_Panier_buttonActualiser
			// 
			this->Commandes_Panier_buttonActualiser->Location = System::Drawing::Point(124, 378);
			this->Commandes_Panier_buttonActualiser->Name = L"Commandes_Panier_buttonActualiser";
			this->Commandes_Panier_buttonActualiser->Size = System::Drawing::Size(114, 28);
			this->Commandes_Panier_buttonActualiser->TabIndex = 23;
			this->Commandes_Panier_buttonActualiser->Text = L"Actualiser";
			this->Commandes_Panier_buttonActualiser->UseVisualStyleBackColor = true;
			this->Commandes_Panier_buttonActualiser->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonActualiser_Click);
			// 
			// Commandes_Panier_buttonRetour
			// 
			this->Commandes_Panier_buttonRetour->Location = System::Drawing::Point(2, 3);
			this->Commandes_Panier_buttonRetour->Name = L"Commandes_Panier_buttonRetour";
			this->Commandes_Panier_buttonRetour->Size = System::Drawing::Size(75, 23);
			this->Commandes_Panier_buttonRetour->TabIndex = 22;
			this->Commandes_Panier_buttonRetour->Text = L"Retour";
			this->Commandes_Panier_buttonRetour->UseVisualStyleBackColor = true;
			this->Commandes_Panier_buttonRetour->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonRetour_Click);
			// 
			// Commandes_Panier_buttonPaniers
			// 
			this->Commandes_Panier_buttonPaniers->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_Panier_buttonPaniers->Location = System::Drawing::Point(248, 109);
			this->Commandes_Panier_buttonPaniers->Name = L"Commandes_Panier_buttonPaniers";
			this->Commandes_Panier_buttonPaniers->Size = System::Drawing::Size(127, 23);
			this->Commandes_Panier_buttonPaniers->TabIndex = 21;
			this->Commandes_Panier_buttonPaniers->Text = L"Paniers";
			this->Commandes_Panier_buttonPaniers->UseVisualStyleBackColor = false;
			this->Commandes_Panier_buttonPaniers->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonPaniers_Click);
			// 
			// Commandes_Panier_buttonArticles
			// 
			this->Commandes_Panier_buttonArticles->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_Panier_buttonArticles->Location = System::Drawing::Point(124, 109);
			this->Commandes_Panier_buttonArticles->Name = L"Commandes_Panier_buttonArticles";
			this->Commandes_Panier_buttonArticles->Size = System::Drawing::Size(127, 23);
			this->Commandes_Panier_buttonArticles->TabIndex = 20;
			this->Commandes_Panier_buttonArticles->Text = L"Articles";
			this->Commandes_Panier_buttonArticles->UseVisualStyleBackColor = false;
			this->Commandes_Panier_buttonArticles->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Panier_buttonArticles_Click);
			// 
			// Commandes_Panel_Livraison
			// 
			this->Commandes_Panel_Livraison->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Commandes_Panel_Livraison.BackgroundImage")));
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_buttonModifier);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_buttonAjouter);
			this->Commandes_Panel_Livraison->Controls->Add(this->label42);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_IDAdresseClient);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_DataGridView);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_buttonActualiser);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commande_Livraison_buttonRetour);
			this->Commandes_Panel_Livraison->Controls->Add(this->Commandes_Livraison_buttonClients);
			this->Commandes_Panel_Livraison->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Commandes_Panel_Livraison->Location = System::Drawing::Point(0, 0);
			this->Commandes_Panel_Livraison->Name = L"Commandes_Panel_Livraison";
			this->Commandes_Panel_Livraison->Size = System::Drawing::Size(1189, 686);
			this->Commandes_Panel_Livraison->TabIndex = 0;
			// 
			// Commandes_Livraison_buttonModifier
			// 
			this->Commandes_Livraison_buttonModifier->Location = System::Drawing::Point(605, 463);
			this->Commandes_Livraison_buttonModifier->Name = L"Commandes_Livraison_buttonModifier";
			this->Commandes_Livraison_buttonModifier->Size = System::Drawing::Size(112, 31);
			this->Commandes_Livraison_buttonModifier->TabIndex = 36;
			this->Commandes_Livraison_buttonModifier->Text = L"Modifier";
			this->Commandes_Livraison_buttonModifier->UseVisualStyleBackColor = true;
			this->Commandes_Livraison_buttonModifier->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Livraison_buttonModifier_Click);
			// 
			// Commandes_Livraison_buttonAjouter
			// 
			this->Commandes_Livraison_buttonAjouter->Location = System::Drawing::Point(467, 463);
			this->Commandes_Livraison_buttonAjouter->Name = L"Commandes_Livraison_buttonAjouter";
			this->Commandes_Livraison_buttonAjouter->Size = System::Drawing::Size(112, 31);
			this->Commandes_Livraison_buttonAjouter->TabIndex = 35;
			this->Commandes_Livraison_buttonAjouter->Text = L"Ajouter";
			this->Commandes_Livraison_buttonAjouter->UseVisualStyleBackColor = true;
			this->Commandes_Livraison_buttonAjouter->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Livraison_buttonAjouter_Click);
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(470, 417);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(129, 18);
			this->label42->TabIndex = 31;
			this->label42->Text = L"ID Adresse Client :";
			// 
			// Commandes_Livraison_IDAdresseClient
			// 
			this->Commandes_Livraison_IDAdresseClient->Location = System::Drawing::Point(605, 415);
			this->Commandes_Livraison_IDAdresseClient->Name = L"Commandes_Livraison_IDAdresseClient";
			this->Commandes_Livraison_IDAdresseClient->Size = System::Drawing::Size(100, 20);
			this->Commandes_Livraison_IDAdresseClient->TabIndex = 27;
			// 
			// Commandes_Livraison_DataGridView
			// 
			this->Commandes_Livraison_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Commandes_Livraison_DataGridView->Location = System::Drawing::Point(125, 128);
			this->Commandes_Livraison_DataGridView->Name = L"Commandes_Livraison_DataGridView";
			this->Commandes_Livraison_DataGridView->Size = System::Drawing::Size(921, 255);
			this->Commandes_Livraison_DataGridView->TabIndex = 19;
			// 
			// Commandes_Livraison_buttonActualiser
			// 
			this->Commandes_Livraison_buttonActualiser->Location = System::Drawing::Point(125, 378);
			this->Commandes_Livraison_buttonActualiser->Name = L"Commandes_Livraison_buttonActualiser";
			this->Commandes_Livraison_buttonActualiser->Size = System::Drawing::Size(114, 28);
			this->Commandes_Livraison_buttonActualiser->TabIndex = 23;
			this->Commandes_Livraison_buttonActualiser->Text = L"Actualiser";
			this->Commandes_Livraison_buttonActualiser->UseVisualStyleBackColor = true;
			this->Commandes_Livraison_buttonActualiser->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Livraison_buttonActualiser_Click);
			// 
			// Commande_Livraison_buttonRetour
			// 
			this->Commande_Livraison_buttonRetour->Location = System::Drawing::Point(3, 3);
			this->Commande_Livraison_buttonRetour->Name = L"Commande_Livraison_buttonRetour";
			this->Commande_Livraison_buttonRetour->Size = System::Drawing::Size(75, 23);
			this->Commande_Livraison_buttonRetour->TabIndex = 22;
			this->Commande_Livraison_buttonRetour->Text = L"Retour";
			this->Commande_Livraison_buttonRetour->UseVisualStyleBackColor = true;
			this->Commande_Livraison_buttonRetour->Click += gcnew System::EventHandler(this, &MyForm::Commande_Livraison_buttonRetour_Click);
			// 
			// Commandes_Livraison_buttonClients
			// 
			this->Commandes_Livraison_buttonClients->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_Livraison_buttonClients->Location = System::Drawing::Point(125, 109);
			this->Commandes_Livraison_buttonClients->Name = L"Commandes_Livraison_buttonClients";
			this->Commandes_Livraison_buttonClients->Size = System::Drawing::Size(127, 23);
			this->Commandes_Livraison_buttonClients->TabIndex = 20;
			this->Commandes_Livraison_buttonClients->Text = L"Clients";
			this->Commandes_Livraison_buttonClients->UseVisualStyleBackColor = false;
			this->Commandes_Livraison_buttonClients->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Livraison_buttonClients_Click);
			// 
			// Commandes_Panel_Paiments
			// 
			this->Commandes_Panel_Paiments->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Commandes_Panel_Paiments.BackgroundImage")));
			this->Commandes_Panel_Paiments->Controls->Add(this->label44);
			this->Commandes_Panel_Paiments->Controls->Add(this->label45);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_AdresseFactu);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_Recu);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonRetirer);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonModifier);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonAjouter);
			this->Commandes_Panel_Paiments->Controls->Add(this->label37);
			this->Commandes_Panel_Paiments->Controls->Add(this->label38);
			this->Commandes_Panel_Paiments->Controls->Add(this->label41);
			this->Commandes_Panel_Paiments->Controls->Add(this->label43);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_MoyenPaiment);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_DateRecu);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_DateEffectue);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_IDPaiment);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_DataGridView);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonActualiser);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonRetour);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonAdresseClient);
			this->Commandes_Panel_Paiments->Controls->Add(this->Commandes_Paiments_buttonPaiments);
			this->Commandes_Panel_Paiments->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Commandes_Panel_Paiments->Location = System::Drawing::Point(0, 0);
			this->Commandes_Panel_Paiments->Name = L"Commandes_Panel_Paiments";
			this->Commandes_Panel_Paiments->Size = System::Drawing::Size(1189, 686);
			this->Commandes_Panel_Paiments->TabIndex = 0;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(573, 493);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(148, 18);
			this->label44->TabIndex = 41;
			this->label44->Text = L"Adresse Facturation :";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(374, 493);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(70, 18);
			this->label45->TabIndex = 40;
			this->label45->Text = L"Montant :";
			// 
			// Commandes_Paiments_AdresseFactu
			// 
			this->Commandes_Paiments_AdresseFactu->Location = System::Drawing::Point(727, 491);
			this->Commandes_Paiments_AdresseFactu->Name = L"Commandes_Paiments_AdresseFactu";
			this->Commandes_Paiments_AdresseFactu->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_AdresseFactu->TabIndex = 39;
			// 
			// Commandes_Paiments_Recu
			// 
			this->Commandes_Paiments_Recu->Location = System::Drawing::Point(450, 491);
			this->Commandes_Paiments_Recu->Name = L"Commandes_Paiments_Recu";
			this->Commandes_Paiments_Recu->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_Recu->TabIndex = 38;
			// 
			// Commandes_Paiments_buttonRetirer
			// 
			this->Commandes_Paiments_buttonRetirer->Location = System::Drawing::Point(690, 543);
			this->Commandes_Paiments_buttonRetirer->Name = L"Commandes_Paiments_buttonRetirer";
			this->Commandes_Paiments_buttonRetirer->Size = System::Drawing::Size(112, 31);
			this->Commandes_Paiments_buttonRetirer->TabIndex = 37;
			this->Commandes_Paiments_buttonRetirer->Text = L"Retirer";
			this->Commandes_Paiments_buttonRetirer->UseVisualStyleBackColor = true;
			this->Commandes_Paiments_buttonRetirer->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonRetirer_Click);
			// 
			// Commandes_Paiments_buttonModifier
			// 
			this->Commandes_Paiments_buttonModifier->Location = System::Drawing::Point(548, 543);
			this->Commandes_Paiments_buttonModifier->Name = L"Commandes_Paiments_buttonModifier";
			this->Commandes_Paiments_buttonModifier->Size = System::Drawing::Size(112, 31);
			this->Commandes_Paiments_buttonModifier->TabIndex = 36;
			this->Commandes_Paiments_buttonModifier->Text = L"Modifier";
			this->Commandes_Paiments_buttonModifier->UseVisualStyleBackColor = true;
			this->Commandes_Paiments_buttonModifier->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonModifier_Click);
			// 
			// Commandes_Paiments_buttonAjouter
			// 
			this->Commandes_Paiments_buttonAjouter->Location = System::Drawing::Point(410, 543);
			this->Commandes_Paiments_buttonAjouter->Name = L"Commandes_Paiments_buttonAjouter";
			this->Commandes_Paiments_buttonAjouter->Size = System::Drawing::Size(112, 31);
			this->Commandes_Paiments_buttonAjouter->TabIndex = 35;
			this->Commandes_Paiments_buttonAjouter->Text = L"Ajouter";
			this->Commandes_Paiments_buttonAjouter->UseVisualStyleBackColor = true;
			this->Commandes_Paiments_buttonAjouter->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonAjouter_Click);
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(602, 459);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(119, 18);
			this->label37->TabIndex = 34;
			this->label37->Text = L"Moyen Paiment :";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(358, 456);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(86, 18);
			this->label38->TabIndex = 33;
			this->label38->Text = L"Date Recu :";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(616, 421);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(105, 18);
			this->label41->TabIndex = 32;
			this->label41->Text = L"Date Effectue :";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(356, 418);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(88, 18);
			this->label43->TabIndex = 31;
			this->label43->Text = L"ID Paiment :";
			// 
			// Commandes_Paiments_MoyenPaiment
			// 
			this->Commandes_Paiments_MoyenPaiment->Location = System::Drawing::Point(727, 457);
			this->Commandes_Paiments_MoyenPaiment->Name = L"Commandes_Paiments_MoyenPaiment";
			this->Commandes_Paiments_MoyenPaiment->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_MoyenPaiment->TabIndex = 30;
			// 
			// Commandes_Paiments_DateRecu
			// 
			this->Commandes_Paiments_DateRecu->Location = System::Drawing::Point(450, 454);
			this->Commandes_Paiments_DateRecu->Name = L"Commandes_Paiments_DateRecu";
			this->Commandes_Paiments_DateRecu->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_DateRecu->TabIndex = 29;
			// 
			// Commandes_Paiments_DateEffectue
			// 
			this->Commandes_Paiments_DateEffectue->Location = System::Drawing::Point(727, 419);
			this->Commandes_Paiments_DateEffectue->Name = L"Commandes_Paiments_DateEffectue";
			this->Commandes_Paiments_DateEffectue->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_DateEffectue->TabIndex = 28;
			// 
			// Commandes_Paiments_IDPaiment
			// 
			this->Commandes_Paiments_IDPaiment->Location = System::Drawing::Point(450, 416);
			this->Commandes_Paiments_IDPaiment->Name = L"Commandes_Paiments_IDPaiment";
			this->Commandes_Paiments_IDPaiment->Size = System::Drawing::Size(100, 20);
			this->Commandes_Paiments_IDPaiment->TabIndex = 27;
			// 
			// Commandes_Paiments_DataGridView
			// 
			this->Commandes_Paiments_DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->Commandes_Paiments_DataGridView->Location = System::Drawing::Point(125, 128);
			this->Commandes_Paiments_DataGridView->Name = L"Commandes_Paiments_DataGridView";
			this->Commandes_Paiments_DataGridView->Size = System::Drawing::Size(921, 255);
			this->Commandes_Paiments_DataGridView->TabIndex = 19;
			// 
			// Commandes_Paiments_buttonActualiser
			// 
			this->Commandes_Paiments_buttonActualiser->Location = System::Drawing::Point(125, 378);
			this->Commandes_Paiments_buttonActualiser->Name = L"Commandes_Paiments_buttonActualiser";
			this->Commandes_Paiments_buttonActualiser->Size = System::Drawing::Size(114, 28);
			this->Commandes_Paiments_buttonActualiser->TabIndex = 23;
			this->Commandes_Paiments_buttonActualiser->Text = L"Actualiser";
			this->Commandes_Paiments_buttonActualiser->UseVisualStyleBackColor = true;
			this->Commandes_Paiments_buttonActualiser->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonActualiser_Click);
			// 
			// Commandes_Paiments_buttonRetour
			// 
			this->Commandes_Paiments_buttonRetour->Location = System::Drawing::Point(3, 3);
			this->Commandes_Paiments_buttonRetour->Name = L"Commandes_Paiments_buttonRetour";
			this->Commandes_Paiments_buttonRetour->Size = System::Drawing::Size(75, 23);
			this->Commandes_Paiments_buttonRetour->TabIndex = 22;
			this->Commandes_Paiments_buttonRetour->Text = L"Retour";
			this->Commandes_Paiments_buttonRetour->UseVisualStyleBackColor = true;
			this->Commandes_Paiments_buttonRetour->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonRetour_Click);
			// 
			// Commandes_Paiments_buttonAdresseClient
			// 
			this->Commandes_Paiments_buttonAdresseClient->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_Paiments_buttonAdresseClient->Location = System::Drawing::Point(249, 109);
			this->Commandes_Paiments_buttonAdresseClient->Name = L"Commandes_Paiments_buttonAdresseClient";
			this->Commandes_Paiments_buttonAdresseClient->Size = System::Drawing::Size(127, 23);
			this->Commandes_Paiments_buttonAdresseClient->TabIndex = 21;
			this->Commandes_Paiments_buttonAdresseClient->Text = L"Adresse Client";
			this->Commandes_Paiments_buttonAdresseClient->UseVisualStyleBackColor = false;
			this->Commandes_Paiments_buttonAdresseClient->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonAdresseClient_Click);
			// 
			// Commandes_Paiments_buttonPaiments
			// 
			this->Commandes_Paiments_buttonPaiments->BackColor = System::Drawing::Color::Transparent;
			this->Commandes_Paiments_buttonPaiments->Location = System::Drawing::Point(125, 109);
			this->Commandes_Paiments_buttonPaiments->Name = L"Commandes_Paiments_buttonPaiments";
			this->Commandes_Paiments_buttonPaiments->Size = System::Drawing::Size(127, 23);
			this->Commandes_Paiments_buttonPaiments->TabIndex = 20;
			this->Commandes_Paiments_buttonPaiments->Text = L"Paiments";
			this->Commandes_Paiments_buttonPaiments->UseVisualStyleBackColor = false;
			this->Commandes_Paiments_buttonPaiments->Click += gcnew System::EventHandler(this, &MyForm::Commandes_Paiments_buttonPaiments_Click);
			// 
			// Panel_Statistique
			// 
			this->Panel_Statistique->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Panel_Statistique.BackgroundImage")));
			this->Panel_Statistique->Controls->Add(this->dataGridView_Statistique);
			this->Panel_Statistique->Controls->Add(this->button_retour_statitique);
			this->Panel_Statistique->Controls->Add(this->button_ProduitSousReapro);
			this->Panel_Statistique->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Panel_Statistique->Location = System::Drawing::Point(0, 0);
			this->Panel_Statistique->Name = L"Panel_Statistique";
			this->Panel_Statistique->Size = System::Drawing::Size(1189, 686);
			this->Panel_Statistique->TabIndex = 0;
			// 
			// button_retour_statitique
			// 
			this->button_retour_statitique->Location = System::Drawing::Point(3, 3);
			this->button_retour_statitique->Name = L"button_retour_statitique";
			this->button_retour_statitique->Size = System::Drawing::Size(75, 23);
			this->button_retour_statitique->TabIndex = 2;
			this->button_retour_statitique->Text = L"Retour";
			this->button_retour_statitique->UseVisualStyleBackColor = true;
			this->button_retour_statitique->Click += gcnew System::EventHandler(this, &MyForm::button_retour_statitique_Click);
			// 
			// button_ProduitSousReapro
			// 
			this->button_ProduitSousReapro->Location = System::Drawing::Point(524, 489);
			this->button_ProduitSousReapro->Name = L"button_ProduitSousReapro";
			this->button_ProduitSousReapro->Size = System::Drawing::Size(158, 42);
			this->button_ProduitSousReapro->TabIndex = 0;
			this->button_ProduitSousReapro->Text = L"Produits sous le seuil de réaprovisionement";
			this->button_ProduitSousReapro->UseVisualStyleBackColor = true;
			this->button_ProduitSousReapro->Click += gcnew System::EventHandler(this, &MyForm::button_ProduitSousReapro_Click);
			// 
			// dataGridView_Statistique
			// 
			this->dataGridView_Statistique->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_Statistique->Location = System::Drawing::Point(248, 151);
			this->dataGridView_Statistique->Name = L"dataGridView_Statistique";
			this->dataGridView_Statistique->Size = System::Drawing::Size(685, 292);
			this->dataGridView_Statistique->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1189, 686);
			this->Controls->Add(this->Panel_Bienvenue);
			this->Controls->Add(this->Panel_Client);
			this->Controls->Add(this->Panel_Stock);
			this->Controls->Add(this->Panel_Personnel);
			this->Controls->Add(this->Panel_Commandes);
			this->Controls->Add(this->Commandes_Panel_Panier);
			this->Controls->Add(this->Commandes_Panel_Livraison);
			this->Controls->Add(this->Commandes_Panel_Paiments);
			this->Controls->Add(this->Panel_Statistique);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
			this->Panel_Personnel->ResumeLayout(false);
			this->Panel_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Personnel_DataGridView))->EndInit();
			this->Panel_Commandes->ResumeLayout(false);
			this->Panel_Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_DataGridView))->EndInit();
			this->Commandes_Panel_Panier->ResumeLayout(false);
			this->Commandes_Panel_Panier->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Panier_DataGridView))->EndInit();
			this->Commandes_Panel_Livraison->ResumeLayout(false);
			this->Commandes_Panel_Livraison->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Livraison_DataGridView))->EndInit();
			this->Commandes_Panel_Paiments->ResumeLayout(false);
			this->Commandes_Panel_Paiments->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Commandes_Paiments_DataGridView))->EndInit();
			this->Panel_Statistique->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_Statistique))->EndInit();
			this->ResumeLayout(false);

		}
		/* ##COMMANDES POUR LES PANELS##
		this->Controls->Add(this->Panel_Bienvenue);
		this->Controls->Add(this->Panel_Client);
		this->Controls->Add(this->Panel_Stock);
		this->Controls->Add(this->Panel_Personnel);
		this->Controls->Add(this->Panel_Commandes);
		this->Controls->Add(this->Commandes_Panel_Panier);
		this->Controls->Add(this->Commandes_Panel_Livraison);
		this->Controls->Add(this->Commandes_Panel_Paiments);
		this->Controls->Add(this->Panel_Statistique);
		*/
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Stock->Visible = false;
		this->Panel_Client->Visible = false;
		this->Panel_Personnel->Visible = false;
		this->Panel_Bienvenue->Visible = true;
		this->Panel_Commandes->Visible = false;
		this->Commandes_Panel_Panier->Visible = false;
		this->Commandes_Panel_Livraison->Visible = false;
		this->Commandes_Panel_Paiments->Visible = false;
		this->Panel_Statistique->Visible = false;
	}
		   //##############PANEL BIENVENUE################
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Client->Visible = true;
		//Crée GridView Adresse
		DataSet^ objdata3000 = gcnew DataSet();
		Client^ client3000 = gcnew Client();
		client3000->afficherAdresse(this->client_numero->Text, objdata3000);
		dataGridView3->DataSource = objdata3000;
		dataGridView3->DataMember = "Adresse";
		delete objdata3000;
		delete client3000;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Personnel->Visible = true;
		//DataGridView Personnel
		DataSet^ personneldata = gcnew DataSet();
		Personnel^ personnel = gcnew Personnel();
		personnel->afficher(personneldata);
		Personnel_DataGridView->DataSource = personneldata;
		Personnel_DataGridView->DataMember = "Personnel";
		delete personneldata;
		delete personnel;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Stock->Visible = true;
		//Crée gridview
		DataSet^ objdata4000 = gcnew DataSet();
		Stock^ article4000 = gcnew Stock();
		article4000->afficher(objdata4000);
		dataGridView1->DataSource = objdata4000;
		dataGridView1->DataMember = "Stock";
		delete objdata4000;
		delete article4000;

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Commandes->Visible = true;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		//Disparition
		this->Panel_Bienvenue->Visible = false;
		//Apparition
		this->Panel_Statistique->Visible = true;
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

		//Actualiser GridView Client & Adresse
		DataSet^ objdata2 = gcnew DataSet();
		Client^ client2 = gcnew Client();
		client2->afficherAdresse(this->client_numero->Text, objdata2);
		dataGridView3->DataSource = objdata2;
		dataGridView3->DataMember = "Adresse";
		delete objdata2;
		delete client2;
	}
	private: System::Void button15_Click_1(System::Object^ sender, System::EventArgs^ e) { // modifier adresse
		Client^ client = gcnew Client();
		client->modifierAdresse(this->adresse_id->Text, this->adresse_code_postal->Text, this->adresse_ville->Text, this->adresse_libelle_de_voie->Text, this->adresse_type_de_voie->Text, this->adresse_numero->Text, this->adresse_numero_de_client->Text);
		this->adresse_id->Clear();
		this->adresse_code_postal->Clear();
		this->adresse_ville->Clear();
		this->adresse_libelle_de_voie->Clear();
		this->adresse_type_de_voie->Clear();
		this->adresse_numero->Clear();
		this->adresse_numero_de_client->Clear();

		//Actualiser GridView Client & Adresse
		DataSet^ objdata3 = gcnew DataSet();
		Client^ client3 = gcnew Client();
		client3->afficherAdresse(this->client_numero->Text, objdata3);
		dataGridView3->DataSource = objdata3;
		dataGridView3->DataMember = "Adresse";
		delete objdata3;
		delete client3;
	}
	private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) { // supprimer adresse
		Client^ client = gcnew Client();
		client->supprimerAdresse(this->adresse_id->Text);
		this->adresse_id->Clear();

		//Actualiser GridView Client & Adresse
		DataSet^ objdata4 = gcnew DataSet();
		Client^ client4 = gcnew Client();
		client4->afficherAdresse(this->client_numero->Text, objdata4);
		dataGridView3->DataSource = objdata4;
		dataGridView3->DataMember = "Adresse";
		delete objdata4;
		delete client4;
	}

		   //##############PANEL CLIENT################
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) { // quitter client
		this->Panel_Client->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) { // ajouter client
		Client^ client = gcnew Client();
		client->ajouter(this->client_nom->Text, this->client_prenom->Text, this->client_date_naissance->Text);
		this->client_nom->Clear();
		this->client_prenom->Clear();
		this->client_date_naissance->Clear();

		//Actualiser GridView Client & Adresse
		DataSet^ objdata5 = gcnew DataSet();
		Client^ client5 = gcnew Client();
		client5->afficherAdresse(this->client_numero->Text, objdata5);
		dataGridView3->DataSource = objdata5;
		dataGridView3->DataMember = "Adresse";
		delete objdata5;
		delete client5;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) { // modifier client
		Client^ client = gcnew Client();
		client->modifier(this->client_numero->Text, this->client_nom->Text, this->client_prenom->Text, this->client_date_naissance->Text);
		this->client_numero->Clear();
		this->client_nom->Clear();
		this->client_prenom->Clear();
		this->client_date_naissance->Clear();

		//Actualiser GridView Client & Adresse
		DataSet^ objdata6 = gcnew DataSet();
		Client^ client6 = gcnew Client();
		client6->afficherAdresse(this->client_numero->Text, objdata6);
		dataGridView3->DataSource = objdata6;
		dataGridView3->DataMember = "Adresse";
		delete objdata6;
		delete client6;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) { // supprimer client
		Client^ client = gcnew Client();
		client->supprimer(this->client_numero->Text);
		this->client_numero->Clear();

		//Actualiser GridView Client & Adresse
		DataSet^ objdata7 = gcnew DataSet();
		Client^ client7 = gcnew Client();
		client7->afficherAdresse(this->client_numero->Text, objdata7);
		dataGridView3->DataSource = objdata7;
		dataGridView3->DataMember = "Adresse";
		delete objdata7;
		delete client7;
	}
		   //##############PANEL STOCK################
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) { //quitter stock
		this->Panel_Stock->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) { //afficher stock
		DataSet^ StockObjdata = gcnew DataSet();
		Stock^ StockObj = gcnew Stock();
		StockObj->afficher(StockObjdata);
		dataGridView1->DataSource = StockObjdata;
		dataGridView1->DataMember = "Stock";
		delete StockObjdata;
		delete StockObj;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) { // ajouter stock
		Stock^ article = gcnew Stock();
		article->ajouter(this->libelle->Text, this->quantite->Text, this->seuil->Text, this->prix->Text, this->TVA->Text);
		this->libelle->Clear();
		this->quantite->Clear();
		this->seuil->Clear();
		this->prix->Clear();
		this->TVA->Clear();

		DataSet^ StockObjdata1 = gcnew DataSet();
		Stock^ StockObj1 = gcnew Stock();
		StockObj1->afficher(StockObjdata1);
		dataGridView1->DataSource = StockObjdata1;
		dataGridView1->DataMember = "Stock";
		delete StockObjdata1;
		delete StockObj1;
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

		DataSet^ StockObjdata2 = gcnew DataSet();
		Stock^ StockObj2 = gcnew Stock();
		StockObj2->afficher(StockObjdata2);
		dataGridView1->DataSource = StockObjdata2;
		dataGridView1->DataMember = "Stock";
		delete StockObjdata2;
		delete StockObj2;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) { // supprimer stock
		Stock^ article = gcnew Stock();
		article->supprimer(this->Ref->Text);
		this->Ref->Clear();

		DataSet^ StockObjdata3 = gcnew DataSet();
		Stock^ StockObj3 = gcnew Stock();
		StockObj3->afficher(StockObjdata3);
		dataGridView1->DataSource = StockObjdata3;
		dataGridView1->DataMember = "Stock";
		delete StockObjdata3;
		delete StockObj3;
	}
		   //##############PANEL PERSONNEL################
	private: System::Void Personnel_Retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Personnel->Visible = false;
		this->Panel_Bienvenue->Visible = true;
	}
	private: System::Void Personnel_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel();
		personnel->ajouter(this->Personnel_Nom->Text, this->Personnel_Prenom->Text, this->Personnel_Date_Embauche->Text, this->Personnel_IDSup->Text, this->Personnel_Adresse_CodeP->Text, this->Personnel_Adresse_Ville->Text, this->Personnel_Adresse_LVoie->Text, this->Personnel_Adresse_TVoie->Text, this->Personnel_Adresse_Numero->Text);
		this->Personnel_Nom->Clear();
		this->Personnel_Prenom->Clear();
		this->Personnel_Date_Embauche->Clear();
		this->Personnel_IDSup->Clear();
		this->Personnel_Adresse_CodeP->Clear();
		this->Personnel_Adresse_Ville->Clear();
		this->Personnel_Adresse_LVoie->Clear();
		this->Personnel_Adresse_TVoie->Clear();
		this->Personnel_Adresse_Numero->Clear();

		//DataGridView Personnel
		DataSet^ personneldata1 = gcnew DataSet();
		Personnel^ personnel1 = gcnew Personnel();
		personnel1->afficher(personneldata1);
		Personnel_DataGridView->DataSource = personneldata1;
		Personnel_DataGridView->DataMember = "Personnel";
		delete personneldata1;
		delete personnel1;
	}
	private: System::Void Personnel_Retirer_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel();
		personnel->supprimer(this->Personnel_Numero->Text);
		this->Personnel_Numero->Clear();

		//DataGridView Personnel
		DataSet^ personneldata2 = gcnew DataSet();
		Personnel^ personnel2 = gcnew Personnel();
		personnel2->afficher(personneldata2);
		Personnel_DataGridView->DataSource = personneldata2;
		Personnel_DataGridView->DataMember = "Personnel";
		delete personneldata2;
		delete personnel2;
	}
	private: System::Void Personnel_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		Personnel^ personnel = gcnew Personnel();
		personnel->modifier(this->Personnel_Numero->Text, this->Personnel_Nom->Text, this->Personnel_Prenom->Text, this->Personnel_Date_Embauche->Text, this->Personnel_IDSup->Text, this->Personnel_Adresse_CodeP->Text, this->Personnel_Adresse_Ville->Text, this->Personnel_Adresse_LVoie->Text, this->Personnel_Adresse_TVoie->Text, this->Personnel_Adresse_Numero->Text);
		this->Personnel_Numero->Clear();
		this->Personnel_Nom->Clear();
		this->Personnel_Prenom->Clear();
		this->Personnel_Date_Embauche->Clear();
		this->Personnel_IDSup->Clear();
		this->Personnel_Adresse_CodeP->Clear();
		this->Personnel_Adresse_Ville->Clear();
		this->Personnel_Adresse_LVoie->Clear();
		this->Personnel_Adresse_TVoie->Clear();
		this->Personnel_Adresse_Numero->Clear();

		//DataGridView Personnel
		DataSet^ personneldata3 = gcnew DataSet();
		Personnel^ personnel3 = gcnew Personnel();
		personnel3->afficher(personneldata3);
		Personnel_DataGridView->DataSource = personneldata3;
		Personnel_DataGridView->DataMember = "Personnel";
		delete personneldata3;
		delete personnel3;
	}
		   //##############PANEL COMMANDES################
	private: System::Void Commandes_button_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_client->BackColor = System::Drawing::SystemColors::ActiveCaption;
		DataSet^ objdatan1 = gcnew DataSet();
		Client^ clientn1 = gcnew Client();
		clientn1->afficherClient(this->client_numero->Text, objdatan1);
		Commandes_DataGridView->DataSource = objdatan1;
		Commandes_DataGridView->DataMember = "Client";
		delete objdatan1;
		delete clientn1;
	}
	private: System::Void Commandes_button_commandes_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_commandes->BackColor = System::Drawing::SystemColors::ActiveCaption;
		DataSet^ objdatan2 = gcnew DataSet();
		Commande^ clientn2 = gcnew Commande();
		clientn2->afficherCommande(objdatan2);
		Commandes_DataGridView->DataSource = objdatan2;
		Commandes_DataGridView->DataMember = "Commande";
		delete objdatan2;
		delete clientn2;
	}
	private: System::Void Commandes_retour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Commandes->Visible = false;
		this->Panel_Bienvenue->Visible = true;
		this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_buttonPanier_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Commandes->Visible = false;
		this->Commandes_Panel_Panier->Visible = true;
		this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_buttonPaiment_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Commandes->Visible = false;
		this->Commandes_Panel_Paiments->Visible = true;
		this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_buttonLivraison_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Panel_Livraison->Visible = true;
		this->Panel_Commandes->Visible = false;
		this->Commandes_button_client->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_button_commandes->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_button_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
		Commande^ commandel = gcnew Commande();
		commandel->ajouterCommande(this->Commandes_DateEmmission->Text, this->Commandes_DateLivraison->Text, this->Commandes_NumClient->Text);
		this->Commandes_DateEmmission->Clear();
		this->Commandes_DateLivraison->Clear();
		this->Commandes_NumClient->Clear();
		DataSet^ objdatan3 = gcnew DataSet();
		Commande^ clientn3 = gcnew Commande();
		clientn3->afficherCommande(objdatan3);
		Commandes_DataGridView->DataSource = objdatan3;
		Commandes_DataGridView->DataMember = "Commande";
		delete objdatan3;
		delete clientn3;
	}
	private: System::Void Commandes_button_Modifier_Click(System::Object^ sender, System::EventArgs^ e) {
		Commande^ commande2 = gcnew Commande();
		commande2->modifierCommande(this->Commandes_IdCommande->Text, this->Commandes_DateEmmission->Text, this->Commandes_DateLivraison->Text, this->Commandes_NumClient->Text);
		this->Commandes_DateEmmission->Clear();
		this->Commandes_DateLivraison->Clear();
		this->Commandes_IdCommande->Clear();
		this->Commandes_NumClient->Clear();
		DataSet^ objdatan4 = gcnew DataSet();
		Commande^ clientn4 = gcnew Commande();
		clientn4->afficherCommande(objdatan4);
		Commandes_DataGridView->DataSource = objdatan4;
		Commandes_DataGridView->DataMember = "Commande";
		delete objdatan4;
		delete clientn4;
	}
	private: System::Void Commandes_button_Retirer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //PANEL PANIER##############
	private: System::Void Commandes_Panier_buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Panel_Panier->Visible = false;
		this->Panel_Commandes->Visible = true;
		this->Commandes_Panier_buttonPaniers->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_Panier_buttonArticles->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_Panier_buttonArticles_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Panier_buttonPaniers->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_Panier_buttonArticles->BackColor = System::Drawing::SystemColors::ActiveCaption;
	}
	private: System::Void Commandes_Panier_buttonPaniers_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Panier_buttonArticles->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_Panier_buttonPaniers->BackColor = System::Drawing::SystemColors::ActiveCaption;
	}
	private: System::Void Commandes_Panier_buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Panier_buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Panier_buttonRetirer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //PANEL LIVRAISON##############
	private: System::Void Commande_Livraison_buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Commandes->Visible = true;
		this->Commandes_Panel_Livraison->Visible = false;
		this->Commandes_Livraison_buttonClients->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_Livraison_buttonClients_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Livraison_buttonClients->BackColor = System::Drawing::SystemColors::ActiveCaption;
	}
	private: System::Void Commandes_Livraison_buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Livraison_buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Livraison_buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //PANEL PAIMENTS##############
	private: System::Void Commandes_Paiments_buttonRetour_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Panel_Paiments->Visible = false;
		this->Panel_Commandes->Visible = true;
		this->Commandes_Paiments_buttonPaiments->BackColor = System::Drawing::Color::Transparent;
		this->Commandes_Paiments_buttonAdresseClient->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_Paiments_buttonPaiments_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Paiments_buttonPaiments->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Commandes_Paiments_buttonAdresseClient->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_Paiments_buttonAdresseClient_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Commandes_Paiments_buttonAdresseClient->BackColor = System::Drawing::SystemColors::ActiveCaption;
		this->Commandes_Paiments_buttonPaiments->BackColor = System::Drawing::Color::Transparent;
	}
	private: System::Void Commandes_Paiments_buttonActualiser_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Paiments_buttonAjouter_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void Commandes_Paiments_buttonModifier_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Commandes_Paiments_buttonRetirer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		   //##############PANEL STATISTIQUES################
	private: System::Void button_ProduitSousReapro_Click(System::Object^ sender, System::EventArgs^ e) {
		DataSet^ statdata1 = gcnew DataSet();
		Affichage^ stat1 = gcnew Affichage();
		stat1->afficher(System::IO::File::ReadAllText("ProduitSousReapro.sql"), statdata1);
		dataGridView_Statistique->DataSource = statdata1;
		dataGridView_Statistique->DataMember = "Affichage";
	}

	private: System::Void button_retour_statitique_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Panel_Bienvenue->Visible = true;
		this->Panel_Statistique->Visible = false;
	}
	};
}
