#include "Personnel.h"

void Personnel::ajouter(System::String^ Nom, System::String^ Prenom, System::String^ DateE, System::String^ ID_Superieur, System::String^ CodePostal, System::String^ Ville, System::String^ Libelle, System::String^ Type, System::String^ Numero)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterClient.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@nom", Nom);
    commande->Parameters->AddWithValue("@prenom", Prenom);
    commande->Parameters->AddWithValue("@date", DateE);
    commande->Parameters->AddWithValue("IDsuperieur", ID_Superieur);
    commande->Parameters->AddWithValue("code_postal", CodePostal );
    commande->Parameters->AddWithValue("ville", Ville);
    commande->Parameters->AddWithValue("libelle", Libelle);
    commande->Parameters->AddWithValue("type", Type);
    commande->Parameters->AddWithValue("numero", Numero);


    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->ExecuteNonQuery();
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }
}

void Personnel::supprimer(System::String^ IDPersonnel)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterClient.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@ID", IDPersonnel);
    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->ExecuteNonQuery();
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }
}

void Personnel::afficher()
{
    throw gcnew System::NotImplementedException();
}

void Personnel::modifier()
{
    throw gcnew System::NotImplementedException();
}
