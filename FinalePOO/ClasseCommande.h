#pragma once
ref class Commande
{
public :
	//Panier
	void panierdynamiqueAjout(System::String^ ID, System::String^ Reference, System::String^);
	void panierdynamiqueRetirer(System::String^, System::String^);
	void panierdynamiqueRafraichir(System::Data::DataSet^);
	//Commande
	void ajouterCommande(System::String^ dateE, System::String^ dateL, System::String^ NDC);
	void retirerCommande(System::String^ ID);
	void afficherCommande(System::Data::DataSet^);
	void modifierCommande(System::String^, System::String^ , System::String^ , System::String^ );
	//Paiement
	void ajouterPaiement(System::String^ DatePE, System::String^ DatePR, System::String^ Moyen, System::String^ Montant, System::String^ ID, System::String^ ID_Adresse);
	void afficherPaiement(System::String^ ID_Commande, System::Data::DataSet^ objdata);
	//Adresse
	void afficherAdresse(System::String^, System::Data::DataSet^);
	void ajouterAdresse(System::String^, System::String^,System::String^);
};

