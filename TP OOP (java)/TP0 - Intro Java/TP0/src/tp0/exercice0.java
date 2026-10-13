package tp0;
import java.util.Scanner;

public class exercice0 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int note2;
        double moyenne;
        final int note_maximale = 20;

        System.out.print("Donnez deux notes : ");
        int note1 = scanner.nextInt();
        note2 = scanner.nextInt();

        moyenne = (double)(note1 + note2) / 2;

        System.out.println("Sortie");
        System.out.println("Moyenne: "+ moyenne);

        if (moyenne >= 10){
            System.out.println("Résultat: Admis");
        }
        else{
            System.out.println("Résultat: Ajourné");
        }
    }
}
    