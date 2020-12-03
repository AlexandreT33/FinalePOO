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


void Commande::ajouterPanier()
{
    throw gcnew System::NotImplementedException();
}

void Commande::retirerPanier()
{
    throw gcnew System::NotImplementedException();
}

void Commande::panierdynamiqueAjout()
{
    throw gcnew System::NotImplementedException();
}

void Commande::panierdynamiqueRetirer()
{
    throw gcnew System::NotImplementedException();
}

void Commande::retirer()
{
    throw gcnew System::NotImplementedException();
}

void Commande::afficher()
{
    throw gcnew System::NotImplementedException();
}

void Commande::modifier()
{
    throw gcnew System::NotImplementedException();
}
