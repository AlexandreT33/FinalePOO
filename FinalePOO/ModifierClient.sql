UPDATE [POO].[dbo].[Client] 
SET Nom = @Nom, Prenom = @Prenom, Date_de_Naissance = @Date, Nombre_d_achat = @Nombre_d_achat
WHERE Reference = @Ref;