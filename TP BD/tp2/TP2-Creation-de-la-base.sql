USE TP2;
GO

CREATE TABLE Client(
	NC1 INT NOT NULL,
	Nom VARCHAR(20) NULL,
	Prenom VARCHAR(15),
	Annee_naissance decimal(4, 0),
	PRIMARY KEY(NC1)
);

CREATE TABLE Commande(
	NumCmd INT NOT NULL,
	DateCmd Date NOT NULL DEFAULT CURRENT_TIMESTAMP, 
	NC1 INT NOT NULL REFERENCES Client(NC1) ON DELETE CASCADE,
	PRIMARY KEY(NumCmd)
);

INSERT INTO Client ([NC1], [Nom], [Prenom], [Annee_naissance]) 
VALUES (2, 'Chatti', 'Ahmed', '1990');

INSERT INTO Client ([NC1], [Nom], [Prenom], [Annee_naissance]) 
VALUES (1, 'Mahmoudi', 'Salwa', '1999');


INSERT INTO Commande (NumCmd, DateCmd, NC1) 
VALUES (101, '2026-10-15', 1);

INSERT INTO Commande (NumCmd, DateCmd, NC1) 
VALUES (102, '2026-10-16', 2);
