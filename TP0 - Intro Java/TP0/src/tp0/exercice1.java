package tp0;

import java.util.Scanner;

public class exercice1 {
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("donner un nombre: ");
        int num = scanner.nextInt();

        int pair = 0;
        int impair = 0;
        int somme_pair = 0;
        int somme_impair = 0;
        int temp;

        while (num != 0) {
            temp = num % 10;

            if (temp % 2 == 0) {
                pair += 1;
                somme_pair += temp;
            } else {
                impair += 1;
                somme_impair += temp;
            }

            num /= 10;
        }

        System.out.println("Chiffres pairs: " + pair + " (Somme: " + somme_pair + ")");
        System.out.println("Chiffres impairs: " + impair + " (Somme: " + somme_impair + ")");

        if((somme_impair == somme_pair) && (pair == impair))
        {
            System.out.println("ce nombre est equilibre");
        }
        else
        {
            System.out.println("ce nombre n'est pas equilibre");
        }



        scanner.close();
    }
}
