#pragma once
ref class Commande
{
public :
	void ajouterCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void ajouterPanier(System::String^ NomProduit, System::String^ ID, System::String^);
	void retirerPanier();
	void panierdynamiqueAjout(System::String^ ID, System::String^ Reference, System::String^);
	void panierdynamiqueRetirer(System::String^, System::String^);
	void retirerCommande(System::String^ ID);
	void afficherCommande(System::Data::DataSet^);
	void afficherPanier(System::String^ ID_Client, System::String^ ID_Commande, System::Data::DataSet^ objdata);
	void modifier();
	void afficherPaiement(System::String^ ID_Commande, System::Data::DataSet^ objdata);
	void afficherAdresse(System::String^ ID_Client, System::Data::DataSet^ objdata);
};

