#pragma once

ref class Personnel
{
	/*Rappel des attributs : K_ID, Nom, Prenom, Date, FK_ID
puis  liaison à Adresse : K_ID, numero, typeDeVoie, LibelleDeVoie, Ville, codePostal, FK_IDClient*/
public :
	void ajouter() override;
	void supprimer() override;
	void afficher() override;
	void modifier() override;
}; 

