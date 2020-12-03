UPDATE [POO].[dbo].[Personnel]
SET Nom = @nom, Prenom = @prenom, Date_d_embauche = @date, ID_Personnel = @IDsuperieur, @ID_Adresse = ID_Adresse
WHERE ID = @ID
UPDATE [POO].[dbo].[Adresse]
SET Code_Postal = @codePostal, Ville = @ville, Libelle_de_Voie = @libelle, Type_de_Voie = @type, Numero = @numero
WHERE ID = @ID_Adresse;
