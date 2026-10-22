public class TestCompteBancaire {

    //fonction pour afficher tout les donnee du compte
    public static void afficherCompte(CompteBancaire compte) {
        System.out.println("titulaire : " + compte.getTitulaire());
        System.out.println("numero de Compte : " + compte.getNumeroCompte());
        System.out.println("solde actuel : " + compte.getSolde() + " tnd");

    }

    public static void main(String[] args) {

        // test1 : creation du premier compte et operations
        CompteBancaire c1 = new CompteBancaire("Amine", 100.0);
        c1.deposer(50.0);
        c1.retirer(30.0);
        c1.deposer(150.5);
        c1.retirer(55.0);

        afficherCompte(c1);
        c1.afficherHistoire();

        System.out.println(); // espace d affichage

        // test2 : creation du deuxieme compte et operations et tester les edge cases
        CompteBancaire c2 = new CompteBancaire("Wessim", 1050.0);
        c2.deposer(660.0);
        c2.deposer(-70.0); // edge case de deposer negatif
        c2.retirer(2300.0); // edge case de retrait superieur au solde
        c2.retirer(-50.0);  // edge case de retrait negatif
        c2.deposer(250.0);

        //test de changer le numero de compte
        c2.setNumeroCompte(200000000);

        afficherCompte(c2);
        c2.afficherHistoire();
    }
}