#pragma once
ref class Commande
{
public :
	void ajouterPanier(System::String^ NomProduit, System::String^ ID, System::String^);
	void retirerPanier();
	void ajouterCommande(System::String^ dateE, System::String^ dateL, System::String^ NDC);
	void panierdynamiqueAjout(System::String^ ID, System::String^ Reference, System::String^);
	void panierdynamiqueRetirer(System::String^, System::String^);
	void retirerCommande(System::String^ ID);
	void afficher();
	void modifier();
};

