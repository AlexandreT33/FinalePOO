UPDATE [POO].[dbo].[Adresse] 
SET Code_Postal = @code_postal, Ville = @ville, Libelle_de_Voie = @libelle_de_voie, Type_de_Voie = @type_de_voie, Numero = @numero
WHERE ID = @ID;