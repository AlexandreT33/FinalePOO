BEGIN TRANSACTION;

INSERT INTO [POO].[dbo].[Adresse] (Code_Postal, Ville, Libelle_de_Voie, Type_de_Voie, Numero, Numero_de_Client) 
VALUES (@code_postal, @ville, @libelle_de_voie, @type_de_voie, @numero, @NDC);

COMMIT;