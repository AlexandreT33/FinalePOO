DELETE from [POO].[dbo].[Adresse]
WHERE Numero_de_Client = @NDC;
DELETE from [POO].[dbo].[Client]
WHERE Numero_de_Client = @NDC;