CREATE DATABASE TP2;
USE TP2;

CREATE TABLE Client (
   NC1 Int NOT NULL,
   Nom varchar(20) NULL,
   Prenom varchar(15),
   Annee_naissance decimal(4,0),
   PRIMARY KEY (NC1)
);

CREATE TABLE Commande (
   NCmd Int NOT NULL,
   DateCmd Date NULL,
   NC1 Int NOT NULL,
   PRIMARY KEY (NCmd),
   FOREIGN KEY (NC1) REFERENCES Client(NC1)
);

INSERT INTO Client (NC1, Nom, Prenom, Annee_naissance) 
VALUES (2, 'Foulen', 'Fouleni', 1990);

INSERT INTO Commande (NCmd, DateCmd, NC1) 
VALUES (1, '2023-10-01', 2);


SELECT * FROM Client;
SELECT * FROM Commande;
