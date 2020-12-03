#include "ClasseStock.h"

Stock::~Stock()
{

}

int Stock::getID()
{
    return IDproduit;
}

System::String^ Stock::getNom()
{
    return nomProduit;
}

void Stock::setNom(System::String^ nom)
{
    nomProduit = nom;
}

int Stock::getQuantite()
{
    return quantite;
}

void Stock::setQuantite(int^ extquantite)
{
    quantite += *extquantite;
}

int Stock::getPrix()
{
    return prixUnitaire;
}

void Stock::setPrix(float^ extprix)
{
    prixUnitaire = *extprix;
}

float Stock::getSeuil()
{
    return seuil;
}

void Stock::setSeuil(int^ extseuil)
{
    seuil = *extseuil;
}

int Stock::getTVA()
{
    return TVApercent;
}

void Stock::setTVA(int^ extTVA)
{
    TVApercent = *extTVA;
}

void Stock::ajouter(System::String^ nomProduit, System::String^ quantite, System::String^ seuil, System::String^ prixUnitaire, System::String^ TVApercent, )
{
    System::String^ connectionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterStock.sql");

    System::Data::SqlClient::SqlConnection^ connection = gcnew System::Data::SqlClient::SqlConnection(connectionSource);
    System::Data::SqlClient::SqlCommand^ command = gcnew System::Data::SqlClient::SqlCommand(requete, connection);

    command->Parameters->AddWithValue("@Libelle", nomProduit);
    command->Parameters->AddWithValue("@Quantite", quantite);
    command->Parameters->AddWithValue("@Seuil", seuil);
    command->Parameters->AddWithValue("@prixUHT", (prixUnitaire));
    command->Parameters->AddWithValue("@TVA", (TVApercent));
    
    try
    {
        connection->Open();
        command->ExecuteNonQuery();
        connection->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }
}

void Stock::supprimer()
{
    throw gcnew System::NotImplementedException();
}
