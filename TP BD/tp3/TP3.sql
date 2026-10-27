USE [TP3]

ALTER TABLE Film ALTER COLUMN ID_film decimal(10,0) NOT NULL;
GO
ALTER TABLE Film ADD Titre VARCHAR(50);
ALTER TABLE Film ADD Annee decimal(4, 0);
ALTER TABLE Film ADD Nom_Realisateur VARCHAR(30);
ALTER TABLE Film ADD Nom VARCHAR(30);
ALTER TABLE Film ADD CONSTRAINT pk_film PRIMARY KEY(ID_film);
GO

ALTER TABLE Acteur ALTER COLUMN Nom varchar(20) NOT NULL;
GO
ALTER TABLE Acteur ADD Prenom VARCHAR(20);
ALTER TABLE Acteur ADD Annee_naissance DECIMAL(4, 0);
ALTER TABLE Acteur ADD CONSTRAINT pk_acteur PRIMARY KEY(Nom);
GO

ALTER TABLE Cinema ALTER COLUMN Nom_cinema VARCHAR(10) NOT NULL;
GO
ALTER TABLE Cinema ADD CONSTRAINT pk_cinema PRIMARY KEY(Nom_cinema); 
ALTER TABLE Cinema ADD Arrondissement decimal(2,0), Adresse varchar(30), ID_film decimal(10, 0);
ALTER TABLE Cinema ADD CONSTRAINT fk_f FOREIGN KEY(ID_film) REFERENCES Film(ID_film);
ALTER TABLE Film ADD CONSTRAINT fk_a FOREIGN KEY(Nom) REFERENCES Acteur(Nom);
GO

INSERT INTO	Acteur([Nom], [Prenom], [Annee_naissance])
VALUES ('Mnif', 'Rayen', '2007');

INSERT INTO	Acteur([Nom], [Prenom], [Annee_naissance])
VALUES ('Gaid', 'Ahmed', '1999');

INSERT INTO Film (ID_film, Titre, Annee, Nom_Realisateur, Nom) VALUES (101, 'Inception', 2010, 'Nolan', 'Mnif');
INSERT INTO Film (ID_film, Titre, Annee, Nom_Realisateur, Nom) VALUES (102, 'Fight Club', 1999, 'Fincher', 'Gaid');

INSERT INTO Cinema (Nom_cinema, Arrondissement, Adresse, ID_film) VALUES ('Pathé', 1, 'Geant Tunis city', 101);
INSERT INTO Cinema (Nom_cinema, Arrondissement, Adresse, ID_film) VALUES ('Colisée', 1, 'Avenue habib bourguiba', 102);

SELECT * FROM Cinema;
SELECT * FROM Film;
SELECT * FROM Acteur;