UPDATE FROM POO.dbo.Client
SET Nombre_d_achat = (SELECT SUM(Quantite) FROM (Client INNER JOIN Commande ON Client.Numero_de_Client = Commande.Numero_de_Client) INNER JOIN Comprend ON Commande.ID = Comprend.ID) WHERE ID = Numero;
