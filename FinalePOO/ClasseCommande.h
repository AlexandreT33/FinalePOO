#pragma once
ref class Commande
{
public :
	void ajouterCommande(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void ajouterPanier();
	void retirerPanier();
	void panierdynamiqueAjout();
	void panierdynamiqueRetirer();
	void retirer();
	void afficher();
	void modifier();
};

