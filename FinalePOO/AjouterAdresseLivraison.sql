UPDATE POO.dbo.Commande
SET ID_Adresse = @ID_Adresse WHERE ID = @ID AND EXISTS (SELECT ID FROM POO.dbo.Adresse WHERE ID = @ID_Adresse AND Numero_de_Client = @NDC);