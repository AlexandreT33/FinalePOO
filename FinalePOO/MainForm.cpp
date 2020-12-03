#include "MainForm.h"
#include "ClasseStock.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
    Stock^ article = gcnew Stock();
    System::String^ nom = Convert::ToString("Bouteille");
    int quantite = 10;
    int seuil = 100;
    float prixUHT = 2.26;
    int TVA = 20;
    article->setNom(nom);
    article->setPrix(prixUHT);
    article->setQuantite(quantite);
    article->setSeuil(seuil);
    article->setTVA(TVA);
    article->ajouter();
    

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    FinalePOO::MyForm form;
    Application::Run(% form);

    return 0;
}