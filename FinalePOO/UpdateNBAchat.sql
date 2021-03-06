UPDATE [POO].[dbo].[Client] 
--SET Nombre_d_achat = (SELECT SUM(Quantite) FROM (Client INNER JOIN Commande ON Client.Numero_de_Client = Commande.Numero_de_Client) INNER JOIN Comprend ON Commande.ID = Comprend.ID) WHERE ID = Numero;
SET Client.Nombre_d_achat = (SELECT SUM(Comprend.Quantite)
FROM ([POO].[dbo].[Client] CROSS JOIN [POO].[dbo].[Commande] ON Client.Numero_de_Client = Commande.Numero_de_Client
LEFT JOIN [POO].[dbo].[Comprend] ON Commande.ID = Comprend.ID)
WHERE ID = Numero);