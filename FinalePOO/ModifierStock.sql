UPDATE [POO].[dbo].[Article] 
SET Libelle = @Libelle, Quantite = @Quantite, Seuil_de_reaprovisionnement = @Seuil, Prix_UHT = @prixUHT, TVA = @TVA
WHERE Reference = @Ref;