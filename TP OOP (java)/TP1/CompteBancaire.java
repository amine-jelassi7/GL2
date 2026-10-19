import java.util.ArrayList;
import java.util.Random;

public class CompteBancaire {
    private String titulaire;
    private float solde;
    private int numeroCompte;

    // contient l'histoire des transactions du compte
    private String histoire = "";

    private static ArrayList<Integer> numerosDesComptes = new ArrayList<Integer>();// liste de tous les numeros des comptes deja utilise

    public CompteBancaire(String titulaire , float soldeInitial) {
        this.titulaire = titulaire;
        solde = soldeInitial;
        histoire = "";


        //generation d'un nombre de compte non utilise avant (securise)
        Random r = new Random();
        int n = r.nextInt(100_000_000) + 100_000_000;
        while(numerosDesComptes.contains(n))
            n = r.nextInt(100_000_000) + 100_000_000;

        numeroCompte = n;
        numerosDesComptes.add(n); // on ajoute le nouveau numero a la liste des numeros
    }

    //Utilise pour deposer de l'argent au compte
    public void deposer(double argent) {
        if(argent > 0) {
            solde += argent;
            histoire += "---> depot de " + argent + "\n";// ajout du transaction a l'hisoire
        }
        else 
            System.out.println("Pas possible de deposer d'argent <= 0");
    }

    //Utiliser pour retirer de l'argent du compte
    public void retirer(double argent) {
        if(argent <= 0) { // l'argent retirer doit etre positive
            System.out.println("Impossible de retirer de l'argent <= 0");
            return;
        }

        if(argent > solde) { // le compte doit avoir suffisament d'argent pour les retirer
            System.out.println("Votre Solde n'est pas suffisant !");
            return;
        }

        solde -= argent;
        histoire += "<--- retrait de " + argent + "\n"; // ajout du transaction a l'hisoire
    }

    public float getSolde() {
        return solde;
    }

    public String getTitulaire() {
        return titulaire;
    }

    public int getNumeroCompte() {
        return numeroCompte;
    }

    //Change le numero du compte a un numero choisi (le numero choisit doit etre nouveau et pas utilise avant)
    public void setNumeroCompte(int numeroCompte) {
        if(numeroCompte == this.numeroCompte) { // le numero du compte n'est pas nouveau
            System.out.println("Vous ne pouvez pas utiliser le meme numero de compte !");
            return;
        }

        if (numerosDesComptes.contains(numeroCompte)) { // le numero du compte existe deja
            System.out.println("Numero de compte existe deja !");
            return;
        }

        numerosDesComptes.remove(this.numeroCompte);// on retire le numero ancient du compte
        numerosDesComptes.add(numeroCompte);// on ajoute le nouveau numero au liste des numeros
        this.numeroCompte = numeroCompte;
    }

    //Bonus :
    //affiche toute l'histoire des transactions du compte
    public void afficherHistoire() {
        System.out.println("\nHistoire du compte n°" + numeroCompte + " possédé par " + titulaire);
        System.out.println(histoire);
    }
}