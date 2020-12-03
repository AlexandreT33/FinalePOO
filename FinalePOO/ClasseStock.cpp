#include "ClasseStock.h"

Stock::~Stock()
{

}

void Stock::ajouter(System::String^ nomProduit, System::String^ quantite, System::String^ seuil, System::String^ prixUnitaire, System::String^ TVApercent)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterStock.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@Libelle", nomProduit);
    commande->Parameters->AddWithValue("@Quantite", System::Convert::ToInt64(quantite));
    commande->Parameters->AddWithValue("@Seuil", System::Convert::ToInt64(seuil));
    commande->Parameters->AddWithValue("@prixUHT", System::Convert::ToDecimal(prixUnitaire));
    commande->Parameters->AddWithValue("@TVA", System::Convert::ToInt64(TVApercent));
    
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

void Stock::supprimer(System::String^ IDproduit)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("RetirerStock.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@Ref", IDproduit);

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

void Stock::afficher(System::String^ IDproduit,System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AfficherStock.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata, "Stock");
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }

}

void Stock::modifier(System::String^ IDproduit, System::String^ nomProduit, System::String^ quantite, System::String^ seuil, System::String^ prixUnitaire, System::String^ TVApercent)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("ModifierStock.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@Ref", System::Convert::ToInt32(IDproduit));
    commande->Parameters->AddWithValue("@Libelle", System::Convert::ToString(nomProduit));
    commande->Parameters->AddWithValue("@Quantite", System::Convert::ToInt32(quantite));
    commande->Parameters->AddWithValue("@Seuil", System::Convert::ToInt32(seuil));
    commande->Parameters->AddWithValue("@prixUHT", System::Convert::ToDecimal(prixUnitaire));
    commande->Parameters->AddWithValue("@TVA", System::Convert::ToInt32(TVApercent));


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
