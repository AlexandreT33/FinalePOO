INSERT INTO POO.dbo.Paiement (Date_Paiement_effectue, Date_Paiement_enregistre, Moyen_de_Paiement, Montant, ID_Commande, ID_Adresse)
VALUES (@DatePE, @DatePR, @Moyen, @Montant, @ID, @ID_Adresse);