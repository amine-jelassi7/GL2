import java.util.Scanner;

public class TestCompteBancaire {

    public static void afficheCompte(CompteBancaire compte){
        System.out.println("\n==== Compte Bancaire ====");
        System.out.println("titulaire: " + compte.getTitulaire());
        System.out.println("solde: " + compte.getSolde());
        System.out.println("numero compte: " + compte.getNumeroCompte());
        System.out.println("=========================\n");
    }
    public static void main(String[] args){
        // CompteBancaire compte = new CompteBancaire(); --- b\ affiche une erreur
        CompteBancaire compte = new CompteBancaire("Rayen Mnif", 200);
        CompteBancaire compte2 = new CompteBancaire("Salah Mohammed", 1500);
        afficheCompte(compte);
        afficheCompte(compte2);
        Scanner scanner = new Scanner(System.in);
        System.out.print("Entrez le montant a déposer pour le compte de " + compte.getTitulaire() + ": ");
        compte.deposer(scanner.nextDouble());
        afficheCompte(compte);
        System.out.print("Entrez le montant a retier pour le compte de " + compte2.getTitulaire() + ": ");
        compte2.retirer(scanner.nextDouble());
        afficheCompte(compte2);
        System.out.print("Entrez le nouveau numero de compte pour le compte de " + compte.getTitulaire() + " (ancien numero: "+ compte.getNumeroCompte() +") : ");
        compte.setNumeroCompte(scanner.nextInt());
        afficheCompte(compte);
        System.out.print("Entrez le montant a retier pour le compte de " + compte.getTitulaire() + ": ");
        compte.retirer(scanner.nextDouble());
        afficheCompte(compte);
        compte.afficheReleve();
        scanner.close();
    }
}
