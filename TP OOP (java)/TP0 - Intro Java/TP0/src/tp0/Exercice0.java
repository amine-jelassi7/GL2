package tp0;

import java.util.Scanner;

public class Exercice0 {
    public static final int NOTE_MAXIMALE = 20;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Donnez deux notes: ");
        int note1 = scanner.nextInt();
        int note2 = scanner.nextInt();

        double moyenne = (note1 + note2) / 2.0;

        
        System.out.println("Moyenne: " + moyenne);

        
        if (moyenne >= 10) {
            System.out.println("Résultat: Admis");
        } else {
            System.out.println("Résultat: Ajourné");
        }

        scanner.close();
    }
}