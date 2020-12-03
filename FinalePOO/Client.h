#pragma once

ref class Client
{
/*Rappel des attributs : K_ID, Nom, Prenom, Date, NbAchat
puis  liaison à Adresse : K_ID, numero, typeDeVoie, LibelleDeVoie, Ville, codePostal, FK_IDClient*/
public :
	void ajouter() override;
	void supprimer() override;
	void afficher() override;
	void modifier() override;
	void ajouterAdresse();
	void supprimerAdresse();
	void ajouterNombreAchat();
};

