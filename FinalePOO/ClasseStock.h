#pragma once


ref class Stock
{
public:
	~Stock(); //suppression d'un produit du stock
	void ajouter(System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimer(System::String^);
	void afficher(System::Data::DataSet^);
	void modifier(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void afficherArticle(System::String^ Reference, System::Data::DataSet^)
};

