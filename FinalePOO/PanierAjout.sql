INSERT INTO POO.dbo.Comprend (Reference, ID, Quantite)
VALUES (@Reference, @ID, @Quantite);
UPDATE POO.dbo.Article
SET Quantite = Quantite - @Quantite WHERE Reference = @Reference