
INSERT INTO [POO].[dbo].[Commande] (Date_d_emission, Reference, Date_de_livraison, Remise_commerciale, Total_TTC, Numero_de_Client, ID_Adresse)
VALUES (@dateE, @Ref, @dateL, @remise, @total, @NDC, @livraison);