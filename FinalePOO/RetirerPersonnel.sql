BEGIN

DELETE FROM [POO].[dbo].[Personnel] WHERE (@ID = ID)
DELETE FROM [POO].[dbo].[Adresse] WHERE (Adresse.ID = (SELECT ID_Adresse FROM [POO].[dbo].[Personnel] WHERE (@ID = Personnel.ID)));

COMMIT