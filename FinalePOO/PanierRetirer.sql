DELETE FROM POO.dbo.Comprend
WHERE Reference = @Reference AND ID = @ID;
UPDATE POO.dbo.Article
SET Quantite = Quantite + (SELECT Quantite from POO.dbo.Comprend WHERE Reference = @Reference and ID = @ID) WHERE Reference = @Reference