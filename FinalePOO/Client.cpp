#include "Client.h"

void Client::ajouter(System::String^ Nom, System::String^ Prenom, System::String^ DateN, System::String^ NbAchat)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterStock.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@Nom", Nom);
    commande->Parameters->AddWithValue("@Prenom", Prenom);
    commande->Parameters->AddWithValue("@Date", DateN);
    commande->Parameters->AddWithValue("@Nombre_d_achat", NbAchat);


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

void Client::supprimer(System::String^ ID)
{
    throw gcnew System::NotImplementedException();
}

void Client::afficher()
{
    throw gcnew System::NotImplementedException();
}

void Client::modifier(System::String^ ID, System::String^ Nom, System::String^ Prenom, System::String^ DateN, System::String^ NbAchat)
{
    throw gcnew System::NotImplementedException();
}

void Client::ajouterAdresse()
{
    throw gcnew System::NotImplementedException();
}

void Client::supprimerAdresse()
{
    throw gcnew System::NotImplementedException();
}

void Client::ajouterNombreAchat()
{
    throw gcnew System::NotImplementedException();
}
