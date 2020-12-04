#pragma once

ref class Client
{
/*Rappel des attributs : K_ID, Nom, Prenom, Date, NbAchat
puis  liaison à Adresse : K_ID, numero, typeDeVoie, LibelleDeVoie, Ville, codePostal, FK_IDClient*/
public :
	void ajouter(System::String^, System::String^, System::String^);
	void supprimer(System::String^);
	void afficherClient(System::String^, System::Data::DataSet^);
	void afficherClient(System::Data::DataSet^ objdata);
	void afficherAdresse(System::Data::DataSet^);
	void afficherAdresse(System::String^ Numero_de_Client, System::Data::DataSet^ objdata);
	void modifier(System::String^, System::String^, System::String^, System::String^);
	void ajouterAdresse(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void supprimerAdresse(System::String^);
	void modifierAdresse(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
	void ajouterNombreAchat(System::String^);

	
};

