DELETE from POO.dbo.Comprend
WHERE Reference = @Ref
DELETE from [POO].[dbo].[Article]
WHERE Reference = @Ref;