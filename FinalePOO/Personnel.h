#pragma once

ref class Personnel
{
	/*Rappel des attributs : K_ID, Nom, Prenom, Date, FK_ID
puis  liaison � Adresse : K_ID, numero, typeDeVoie, LibelleDeVoie, Ville, codePostal, FK_IDClient*/
public :
	void ajouter(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimer(System::String^);
	void modifier(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void afficher(System::Data::DataSet^);
	void afficher(System::String^, System::Data::DataSet^);
};

