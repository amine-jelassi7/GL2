import java.util.ArrayList;

public class CompteBancaire {
   private String titulaire;
   private double solde;
   private int numeroCompte;

   private ArrayList<String> historique;

   private static int compteur = 1000;

   public CompteBancaire(String titulaire, double solde) {
      this.titulaire = titulaire;
      this.solde = solde;
      this.numeroCompte = compteur++;
      this.historique = new ArrayList<>();
   }

   public void deposer(double argent){
       if (argent > 0){
        solde += argent; 
        historique.add("depots: " + argent);
       }else{
        System.out.println("Erreur: Le montant du depot doit etre positif");
       }
   }

   public void retirer(double argent){
        if (argent > 0 && argent <= solde){
            solde -= argent;
            historique.add("retrait: " + argent);
        }else{
            System.out.println("Erreur: Solde insuffisant ou montant invalide");
        }
   }

   public double getSolde(){ return solde; }

   public String getTitulaire() { return titulaire; }

   public int getNumeroCompte() { return numeroCompte; }
      
   public void setNumeroCompte(int numeroCompte ){
       this.numeroCompte = numeroCompte;
   }

   public void afficheReleve(){
        System.out.println("\n==== Releve : "+ titulaire +" ====");
        for (String transaction : historique){
            System.out.println(transaction);
        }
        System.out.println("=============================\n");
   }
}
