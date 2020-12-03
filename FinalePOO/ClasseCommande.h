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
	void afficher();
	void modifier();
};

