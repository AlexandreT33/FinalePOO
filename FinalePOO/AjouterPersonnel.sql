INSERT INTO [POO].[dbo].[Adresse] (Code_Postal, Ville, Libelle_de_Voie, Type_de_Voie, Numero, Numero_de_Client)
VALUES (@code_postal, @ville, @libelle, @type, @numero, NULL);

INSERT INTO [POO].[dbo].[Personnel] (Nom, Prenom, Date_d_embauche, ID_Personnel, ID_Adresse)
VALUES (@nom, @prenom, @date, (CASE WHEN EXISTS (SELECT ID from [POO].[dbo].[Personnel] WHERE (ID = @IDsuperieur)) THEN @IDsuperieur ELSE NULL END) , (SELECT ID from [POO].[dbo].[Adresse] WHERE (Code_Postal = @code_postal AND Ville = @ville AND Libelle_de_Voie = @libelle AND Type_de_Voie = @type AND Numero = @numero)));