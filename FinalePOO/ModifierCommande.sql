UPDATE POO.dbo.Commande
SET Date_d_emission = @dateE, Reference = NULL, Date_de_livraison = @dateL, Remise_commerciale = NULL, Total_TTC = NULL,  Numero_de_Client = @NDC WHERE ID = @ID;