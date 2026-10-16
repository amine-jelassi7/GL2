--question1
select Titre from Film order by Titre asc;

--questio2

select Nom , Annee_naissance from Acteur where Annee_naissance <1950;

--question3

select * from Cinema where Arrondissement = 12;

--question4

select Nom , Prenom from Acteur where Nom like 'H%';

--question5

select Nom , Prenom from Acteur where Annee_naissance is NULL;
