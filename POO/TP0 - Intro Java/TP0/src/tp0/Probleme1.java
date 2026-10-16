package tp0;

import java.util.Scanner;

public class Probleme1 {
    public static void main(String[] args) {
        int n,nbPair =0,nbImpair =0,sommePair =0,sommeImpair =0;
        String estEquilibre;
        Scanner scanner = new Scanner(System.in);
        System.out.print("Entree : ");
        n=scanner.nextInt();
        while (n<=0) {
            System.out.print("Un entier  positif svp : ");
            n=scanner.nextInt();
        }
        while (n!=0) {
            int aux =n%10;
            n=n/10;
            if (aux%2==0) {
                nbPair++;
                sommePair += aux;
            } else {
                nbImpair++;
                sommeImpair += aux;
            }
        }
        estEquilibre =(sommePair==sommeImpair&&nbImpair==nbPair)?"EQUILIBRE":"NON EQUILIBRE";
        System.out.println("\nSortie :");
        System.out.println("Chiffres pairs : " + nbPair);
        System.out.println("Chiffres impairs : " + nbImpair);
        System.out.println("Somme paire : " + sommePair);
        System.out.println("Somme impaire : " + sommeImpair);
        System.out.println(estEquilibre);
        scanner.close();
    }
}