INSERT INTO [POO].[dbo].[Adresse] (Code_Postal, Ville, Libelle_de_Voie, Type_de_Voie, Numero, Numero_de_Client)
VALUES (@code_postal, @ville, @libelle, @type, @numero, NULL);

INSERT INTO [POO].[dbo].[Personnel] (Nom, Prenom, Date_d_embauche, ID_Personnel, ID_Adresse)
VALUES (@nom, @prenom, @date, @IDsuperieur, LAST_INSERT_ID([POO].[dbo].[Adresse]))