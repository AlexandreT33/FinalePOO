#include "ClasseCommande.h"

void Commande::ajouterCommande(System::String^ dateE, System::String^ Ref, System::String^ dateL, System::String^ remise, System::String^ total, System::String^ NDC, System::String^ livraison)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterCommande.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@dateE", dateE);
    commande->Parameters->AddWithValue("@Ref", Ref);
    commande->Parameters->AddWithValue("@dateL", dateL);
    commande->Parameters->AddWithValue("@remise", remise);
    commande->Parameters->AddWithValue("@total", total);
    commande->Parameters->AddWithValue("@NDC", NDC);
    commande->Parameters->AddWithValue("@livraison", livraison);
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


void Commande::ajouterPanier(System::String^ NomProduit, System::String^ ID, System::String^ )
{
    throw gcnew System::NotImplementedException();
}

void Commande::retirerPanier()
{
    throw gcnew System::NotImplementedException();
}

void Commande::panierdynamiqueAjout(System::String^ ID, System::String^ Reference, System::String^ Quantite)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("PanierRetirer.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@ID", ID);
    commande->Parameters->AddWithValue("@Reference", Reference);
    commande->Parameters->AddWithValue("@Quantite", Quantite);

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

void Commande::panierdynamiqueRetirer(System::String^ ID, System::String^ Reference)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("PanierRetirer.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@ID", ID);
    commande->Parameters->AddWithValue("@Reference", Reference);

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

void Commande::retirerCommande(System::String^ ID)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("RetirerCommande.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@ID", ID);

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

void Commande::afficher()
{
    throw gcnew System::NotImplementedException();
}

void Commande::modifier()
{
    throw gcnew System::NotImplementedException();
}
