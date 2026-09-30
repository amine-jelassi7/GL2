package tp0;

import java.util.Scanner;
/**
 * Programme de calcul  de la moyenne de deux notes
 * et d'evaluation de l'admission d'un etudiant.
 */

public class ex0 {

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);
        // Supression de 2emeNote (car elle n'est pas utilise dans le programme (note2) + Erreur de nommage (commence par un chiffre)
        double moyenne;
        final int NOTE_MAXIMALE=20;
        System.out.print("Donnez deux notes : ");
        int note1=scanner.nextInt();
        int note2=scanner.nextInt();
        // Calcul  de la moyenne reelle
         moyenne=(note1+note2)/2.0;
         // affichage
         System.out.println("La moyenne obtenue est de : " + moyenne + " / " + NOTE_MAXIMALE);
        if (moyenne>=10.0) {
            System.out.println("Resultat : Admis");
        } else {
            System.out.println("Resultat : Ajourne");
        }

        scanner.close();
    }
}