BEGIN TRANSACTION
declare @var int ;
select  @var = ID_Adresse from [POO].[dbo].[Personnel] where ID =  @ID;

DELETE FROM [POO].[dbo].[Personnel] WHERE (ID = @ID );
DELETE FROM [POO].[dbo].[Adresse] WHERE Adresse.ID = @var;

COMMIT
