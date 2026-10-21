import java.util.ArrayList;
import java.util.Random;

public class CompteBancaire {
    private String titulaire;
    private double solde;
    private int numeroCompte;
    // historique sous forme de liste de chaines
    private ArrayList<String> histoire;

    private static final Random RANDOM = new Random();

    private static final ArrayList<Integer> NUMEROS_DES_COMPTES = new ArrayList<>();

    public CompteBancaire(String titulaire, double soldeInitial) {
        this.titulaire = titulaire;
        this.solde = soldeInitial;
        this.histoire = new ArrayList<>();

        // generation d un numero de compte (au hasard) unique

        int n = RANDOM.nextInt(100_000_000) + 100_000_000;
        while (NUMEROS_DES_COMPTES.contains(n)) {
            n = RANDOM.nextInt(100_000_000) + 100_000_000;
        }

        this.numeroCompte = n;
        NUMEROS_DES_COMPTES.add(n);
    }

    // deposer de l argent sur le compte
    public void deposer(double argent) {
        if (argent > 0) {
            solde += argent;
            // on depose l argent et on sauvegarde la transaction
            histoire.add("---> depot de " + argent);
        } else {
            //cas non logique : le cas ou le montant qu on veut deposer est negatif
            System.out.println("impossible de deposer d argent <= 0");
        }
    }

    // retirer de l argent du compte
    public void retirer(double argent) {
        if (argent <= 0) {
            //cas non logique : le cas ou le montant qu on veut retier est negatif
            System.out.println("Impossible de retirer de l argent <= 0");
            return;
        }

        if (argent > solde) {
            System.out.println("votre solde n est pas suffisant");
            return;
        }

        // on retrait l argent et on sauvegarde la transaction
        solde -= argent;
        histoire.add("<--- retrait de " + argent);
    }

    public double getSolde() {
        return solde;
    }

    public String getTitulaire() {
        return titulaire;
    }

    public int getNumeroCompte() {
        return numeroCompte;
    }

    public void setNumeroCompte(int numeroCompte) {
        if (numeroCompte == this.numeroCompte) {
            //reutiliser le meme numero
            System.out.println("vous ne pouvez pas utiliser le meme numero de compte");
            return;
        }

        if (NUMEROS_DES_COMPTES.contains(numeroCompte)) {
            //utiliser un numero deja utiliser par un autre utilisateur
            System.out.println("numero de compte existe deja");
            return;
        }

        //supprimer le numero ancien de la liste des numero
        NUMEROS_DES_COMPTES.remove(Integer.valueOf(this.numeroCompte));
        //addition de nouveau numero et modification du numero de compte
        NUMEROS_DES_COMPTES.add(numeroCompte);
        this.numeroCompte = numeroCompte;
    }

    // affiche toute l histoire des transactions du compte
    public void afficherHistoire() {
        System.out.println("\nHistoire du compte n°" + numeroCompte + " possede par " + titulaire);
        if (histoire.isEmpty()) {
            System.out.println("aucune transaction enregistree.");
        } else {
            for (String transaction : histoire) {
                System.out.println(transaction);
            }
        }
    }
}