public class TestCompteBancaire {

    // affiche les information d'une compte donnee
    public static void afficherCompte(CompteBancaire compte) {
        System.out.println("-----> Compte de " + compte.getTitulaire());
        System.out.println("Titulaire : " + compte.getTitulaire());
        System.out.println("Numero du compte : " + compte.getNumeroCompte());
        System.out.println("Solde : " + compte.getSolde());
    }

    public static void main(String[] args) {
        
        //Teste d'appel du constructeur par defaut (enlever le commentaire)
        //CompteBancaire a = new CompteBancaire();
        //je remarque qu'un erreur apparait a cause de l'appel d'un constructeur par defaut
        //alors si je definie un constructeur parametrique pour un class
        //le constructeur par defaut implicite ajoute par java sera supprime
        //si je veut donc utiliser un constructeur par defaut je doit le definir 
    
        //le premier compte
        CompteBancaire c1 = new CompteBancaire("Mohsin" , 1.2f);

        c1.deposer(50);
        c1.retirer(30);
        c1.deposer(150.5);
        c1.retirer(55);
        
        afficherCompte(c1); // affichage des information de c1
        c1.afficherHistoire(); // affichage de l'histoire du premier compte

        //le deuxieme compte
        CompteBancaire c2 = new CompteBancaire("Hichem" , 1053);

        c2.deposer(660);
        c2.retirer(230);
        c2.deposer(250);
        c2.deposer(1300);
        c2.retirer(430);
        c2.retirer(200);
        
        afficherCompte(c2);// affichage des information de c2
        c2.afficherHistoire(); // affichage de l'histoire du deuxieme compte

    }
}
