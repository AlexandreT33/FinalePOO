#include "Client.h"

void Client::ajouter(System::String^ Nom, System::String^ Prenom, System::String^ DateN)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterClient.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@Nom", Nom);
    commande->Parameters->AddWithValue("@Prenom", Prenom);
    commande->Parameters->AddWithValue("@Date", DateN);


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
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("RetirerClient.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@NDC", ID);

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



void Client::modifier(System::String^ ID, System::String^ Nom, System::String^ Prenom, System::String^ DateN)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("ModifierClient.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@NDC", ID);
    commande->Parameters->AddWithValue("@Nom", Nom);
    commande->Parameters->AddWithValue("@Prenom", Prenom);
    commande->Parameters->AddWithValue("@Date", System::Convert::ToDateTime(DateN));

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

void Client::ajouterAdresse(System::String^ CodePostal, System::String^ Ville, System::String^ Libelle, System::String^ Type, System::String^ Numero, System::String^ NDC)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("AjouterAdresse.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@code_postal", CodePostal);
    commande->Parameters->AddWithValue("@ville", Ville);
    commande->Parameters->AddWithValue("@libelle_de_voie", Libelle);
    commande->Parameters->AddWithValue("@type_de_voie", Type);
    commande->Parameters->AddWithValue("@numero", System::Convert::ToInt32(Numero));
    commande->Parameters->AddWithValue("@NDC", System::Convert::ToInt32(NDC));

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

void Client::supprimerAdresse(System::String^ ID)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("RetirerAdresse.sql");

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

void Client::modifierAdresse(System::String^ ID, System::String^ CodePostal, System::String^ Ville, System::String^ Libelle, System::String^ Type, System::String^ Numero, System::String^ NDC)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = System::IO::File::ReadAllText("ModifierAdresse.sql");

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlCommand^ commande = gcnew System::Data::SqlClient::SqlCommand(requete, connexion);

    commande->Parameters->AddWithValue("@ID", ID);
    commande->Parameters->AddWithValue("@code_postal", CodePostal);
    commande->Parameters->AddWithValue("@ville", Ville);
    commande->Parameters->AddWithValue("@libelle_de_voie", Libelle);
    commande->Parameters->AddWithValue("@type_de_voie", Type);
    commande->Parameters->AddWithValue("@numero", System::Convert::ToInt32(Numero));
    commande->Parameters->AddWithValue("@NDC", NDC);

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

void Client::ajouterNombreAchat(System::String^ IDClient)
{
    
}

void Client::afficherClient(System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = "SELECT * FROM [POO].[dbo].[Client];";

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata, "Client");
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }

}

void Client::afficherClient(System::String^ Numero_de_Client, System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = "SELECT * FROM [POO].[dbo].[Client] WHERE Numero_de_Client = " + Numero_de_Client;

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata, "Client");
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }

}

void Client::afficherAdresse(System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = "SELECT Client.Numero_de_Client, Nom, Prenom, Date_de_Naissance, Nombre_d_achat, ID AS ID_Adresse, Numero, Type_de_Voie, Libelle_de_Voie, Ville, Code_Postal FROM [POO].[dbo].[Client] LEFT JOIN [POO].[dbo].[Adresse] ON(Client.Numero_de_Client=Adresse.Numero_de_Client);";

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata, "Adresse");
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }

}

void Client::afficherAdresse(System::String^ Numero_de_Client, System::Data::DataSet^ objdata)
{
    //Source de la bdd, puis instanciation de la requete
    System::String^ connexionSource = "Data Source=.;Initial Catalog=POO;Integrated Security=True";
    System::String^ requete = "SELECT * FROM [POO].[dbo].[Adresse] WHERE Numero_de_Client = "+ Numero_de_Client;

    //Assignation de la requete et la Source à la commande de Connexion
    System::Data::SqlClient::SqlConnection^ connexion = gcnew System::Data::SqlClient::SqlConnection(connexionSource);
    System::Data::SqlClient::SqlDataAdapter^ commande = gcnew System::Data::SqlClient::SqlDataAdapter(requete, connexion);

    //essai de la requete plus gestion de l'Exception.
    try
    {
        connexion->Open();
        commande->Fill(objdata, "Client");
        connexion->Close();
    }
    catch (System::Exception^ ex)
    {
        System::Windows::Forms::MessageBox::Show(ex->Message);
    }
}
