DELETE FROM [POO].[dbo].[Adresse] WHERE @ID = Personnel.ID AND Adresse.ID = Personnel.ID_Adresse
DELETE FROM [POO].[dbo].[Personnel] WHERE @ID = Personnel.ID;