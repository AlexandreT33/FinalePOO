UPDATE POO.dbo.Commande
SET ID_Adresse = @ID_Adresse WHERE ID = @ID AND EXISTS @ID_Adresse 