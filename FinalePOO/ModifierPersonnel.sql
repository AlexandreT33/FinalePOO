declare @var int ;
select  @var = ID_Adresse from [POO].[dbo].[Personnel] where ID = @ID;

UPDATE [POO].[dbo].[Personnel]
SET Nom = @nom, Prenom = @prenom, Date_d_embauche = @date, ID_Personnel = (CASE WHEN EXISTS (SELECT ID from [POO].[dbo].[Personnel] WHERE (ID = @IDsuperieur)) THEN @IDsuperieur ELSE NULL END)
WHERE ID = @ID
UPDATE [POO].[dbo].[Adresse]
SET Code_Postal = @code_postal, Ville = @ville, Libelle_de_Voie = @libelle, Type_de_Voie = @type, Numero = @numero
WHERE ID = @var;
