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
	int getPrix();
	void setPrix(float^);
	float getSeuil();
	void setSeuil(int^);
	int getTVA();
	void setTVA(int^);
	void ajouter();
	void supprimer();

private:
	int IDproduit;
	System::String^ nomProduit;
	int quantite;
	int seuil;
	float prixUnitaire;
	int TVApercent;
};

