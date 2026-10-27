USE cinema;
GO

-- Question 1
SELECT Titre FROM Film ORDER BY Titre ASC;
-- Question 2
SELECT Nom, Annee_naissance FROM Acteur WHERE Annee_naissance < 1950;
-- Question 3
SELECT Nom_cinema FROM Cinema WHERE Arrondissement = 12;
-- Question 4 
SELECT * FROM Acteur WHERE Nom LIKE 'H%';
-- Question 5
SELECT Nom, Prenom FROM Acteur WHERE Annee_naissance IS NULL;
