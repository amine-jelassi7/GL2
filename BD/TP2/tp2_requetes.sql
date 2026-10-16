-- q1
SELECT Titre FROM film ORDER BY Titre ASC;

-- q2
SELECT Nom, Annee_naissance FROM Acteur WHERE Annee_naissance < 1950;

-- q3
SELECT * FROM Cinema WHERE Arrondissement = 12;

-- q4
SELECT * FROM Acteur WHERE Nom LIKE 'H%';

-- q5
SELECT * FROM Acteur WHERE Annee_naissance IS NULL;	