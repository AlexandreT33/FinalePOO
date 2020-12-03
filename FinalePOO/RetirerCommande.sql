DELETE FROM POO.dbo.Comprend WHERE ID = @ID;
DELETE FROM POO.dbo.Paiement WHERE ID_Commande = @ID;
DELETE FROM POO.dbo.Commande WHERE ID = @ID;