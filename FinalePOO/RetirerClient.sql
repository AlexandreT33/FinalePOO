DELETE FROM POO.dbo.Comprend WHERE ID = (SELECT ID from POO.dbo.Commande WHERE Numero_de_Client = @NDC);
DELETE FROM POO.dbo.Paiement WHERE ID = (SELECT ID from POO.dbo.Commande WHERE Numero_de_Client = @NDC);
DELETE FROM POO.dbo.Commande WHERE Numero_de_Client = @NDC;
DELETE from [POO].[dbo].[Adresse]
WHERE Numero_de_Client = @NDC;
DELETE from [POO].[dbo].[Client]
WHERE Numero_de_Client = @NDC;