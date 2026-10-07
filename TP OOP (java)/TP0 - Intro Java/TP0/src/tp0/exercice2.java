package tp0;

import java.util.Scanner;

public class exercice2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Entrer un mot de passe: ");
        String password = scanner.nextLine();

        int length = password.length();
        int uppercase = 0;
        int lowercase = 0;
        int chiffre = 0;
        int character = 0;
        int autres = 0;
        boolean espace = false;

        char[] password_array = password.toCharArray();
        for (char c : password_array) {
            if (c == ' ') {
                espace = true;
            }

            if (Character.isUpperCase(c)) {
                uppercase++;
            } else if (Character.isLowerCase(c)) {
                lowercase++;
            } else if (Character.isDigit(c)) {
                chiffre++;
            } else if ("!@#$%&*".indexOf(c) != -1) {
                character++;
            } else {
                autres++;
            }
        }

        boolean consecutifs = false;
        for (int i = 0; i <= password.length() - 3; i++) {
            if (password_array[i] == password_array[i + 1] && password_array[i + 1] == password_array[i + 2]) {
                consecutifs = true;
                break;
            }
        }

        System.out.println("Longueur: " + length);
        System.out.println("Majuscules: " + uppercase);
        System.out.println("Minuscules: " + lowercase);
        System.out.println("Chiffres: " + chiffre);
        System.out.println("Caractères spéciaux: " + character);
        System.out.println("Autres caractères: " + autres);

        if (espace) {
            System.out.println("Présence d'un espace: true");
        }
        if (consecutifs) {
            System.out.println("Répétition de trois caractères : true");
        }

        boolean lengthValid = (length >= 8 && length <= 20);
        boolean valide = lengthValid
                && (uppercase > 0)
                && (lowercase > 0)
                && (chiffre > 0)
                && (character > 0)
                && !espace
                && !consecutifs;

        if (valide) {
            System.out.println("VALIDE");
        } else {
            System.out.println("INVALIDE");
            if (!lengthValid) {
                System.out.println("La longueur doit être comprise entre 8 et 20 caractères.");
            }
            if (uppercase == 0) {
                System.out.println("Une lettre majuscule est obligatoire.");
            }
            if (lowercase == 0) {
                System.out.println("Une lettre minuscule est obligatoire.");
            }
            if (chiffre == 0) {
                System.out.println("Un chiffre est obligatoire.");
            }
            if (character == 0) {
                System.out.println("Un caractère spécial est obligatoire.");
            }
            if (espace) {
                System.out.println("Les espaces sont interdits.");
            }
            if (consecutifs) {
                System.out.println("Trois caractères identiques consécutifs sont interdits.");
            }
        }

        scanner.close();
    }
}