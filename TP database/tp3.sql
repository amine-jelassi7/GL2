USE TP3;
GO

ALTER TABLE Acteur ALTER COLUMN Nom VARCHAR(20) NOT NULL;
GO 

ALTER TABLE Acteur ADD Prenom VARCHAR(20);
ALTER TABLE Acteur ADD Annee_naissance DECIMAL(4, 0);
ALTER TABLE Acteur ADD CONSTRAINT pk_acteur PRIMARY KEY (Nom);
GO

ALTER TABLE Film ALTER COLUMN ID_film DECIMAL(10, 0) NOT NULL;
GO 

ALTER TABLE Film ADD Titre VARCHAR(50);
ALTER TABLE Film ADD Annee DECIMAL(4, 0);
ALTER TABLE Film ADD Nom_Realisateur VARCHAR(30);
ALTER TABLE Film ADD Nom VARCHAR(20);
ALTER TABLE Film ADD CONSTRAINT pk_film PRIMARY KEY (ID_film);
ALTER TABLE Film ADD CONSTRAINT fk_a FOREIGN KEY (Nom) REFERENCES Acteur(Nom);
GO

ALTER TABLE Cinema ALTER COLUMN Nom_cinema VARCHAR(10) NOT NULL;
GO 

ALTER TABLE Cinema ADD CONSTRAINT pk_cinema PRIMARY KEY (Nom_cinema);
ALTER TABLE Cinema ADD Arrondissement DECIMAL(2, 0), Adresse VARCHAR(30), ID_film DECIMAL(10, 0);
ALTER TABLE Cinema ADD CONSTRAINT fk_f FOREIGN KEY (ID_film) REFERENCES Film(ID_film);
GO


INSERT INTO Acteur ([Nom], [Prenom], [Annee_naissance]) VALUES ('Jelassi', 'Amine', 2007);
INSERT INTO Acteur ([Nom], [Prenom], [Annee_naissance]) VALUES ('Ben Ali', 'Mohamed', 2005);
GO

INSERT INTO Film (ID_film, Titre, Annee, Nom_Realisateur, Nom) VALUES (201, 'Interstellar', 2014, 'Nolan', 'Jelassi');
INSERT INTO Film (ID_film, Titre, Annee, Nom_Realisateur, Nom) VALUES (202, 'Gladiator', 2000, 'Scott', 'Ben Ali');
GO

INSERT INTO Cinema (Nom_cinema, Arrondissement, Adresse, ID_film) VALUES ('Agora', 2, 'La Marsa', 201);
INSERT INTO Cinema (Nom_cinema, Arrondissement, Adresse, ID_film) VALUES ('Le Palace', 1, 'Avenue Habib Bourguiba', 202);
GO

SELECT * FROM Acteur;
SELECT * FROM Film;
SELECT * FROM Cinema;
GO