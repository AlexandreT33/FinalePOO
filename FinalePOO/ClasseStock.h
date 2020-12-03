#pragma once


ref class Stock
{
public:
	~Stock(); //suppression d'un produit du stock
	int getID();
	System::String^ getNom();
	void setNom(System::String^);
	int getQuantite();
	void setQuantite(int^);
	float getPrix();
	void setPrix(float^);
	int getSeuil();
	void setSeuil(int^);
	int getTVA();
	void setTVA(int^);
	void ajouter(System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimer(System::String^);
	void afficher(System::String^);
	void modifier(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);


private:
	int IDproduit;
	System::String^ nomProduit;
	int quantite;
	int seuil;
	float prixUnitaire;
	int TVApercent;
};

