#include "Affichage.h"


void Affichage::afficher(System::String^ requete, System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    
    //Assignation de la requete et la Source � la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata);
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }
}