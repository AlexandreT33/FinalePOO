UPDATE [POO].[dbo].[Client] 
SET Nom = @Nom, Prenom = @Prenom, Date_de_Naissance = @Date
WHERE Numero_de_Client = @NDC;

