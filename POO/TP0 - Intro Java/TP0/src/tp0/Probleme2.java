package tp0;

import java.util.Scanner;

public class Probleme2 {

    public static void main(String[] args) {
        Scanner scanner=new Scanner(System.in);

        System.out.println("Entree");
        String password=scanner.nextLine();

        int longueur=password.length();
        int nbMajuscules=0;
        int nbMinuscules=0;
        int nbChiffres=0;
        int nbSpeciaux=0;
        int nbAutres=0;

        boolean contientEspace=false;
        boolean repetition3=false;

        String speciaux="!@#$%&*";

        for (int i=0; i<longueur; i++) {
            char c=password.charAt(i);

            if (c==' ') {
                contientEspace=true;
                nbAutres++;
            } else if (c>='A' && c<='Z') {
                nbMajuscules++;
            } else if (c>='a' && c<='z') {
                nbMinuscules++;
            } else if (c>='0' && c<='9') {
                nbChiffres++;
            } else if (speciaux.indexOf(c)!=-1) {
                nbSpeciaux++;
            } else {
                nbAutres++;
            }

            if (i>=2 && c==password.charAt(i-1) && c==password.charAt(i-2)) {
                repetition3=true;
            }
        }

        System.out.println("\nSortie");
        System.out.println("Longueur : "+longueur);
        System.out.println("Majuscules : "+nbMajuscules);
        System.out.println("Minuscules : "+nbMinuscules);
        System.out.println("Chiffres : "+nbChiffres);
        System.out.println("Caracteres speciaux : "+nbSpeciaux);
        System.out.println("Autres caracteres : "+nbAutres);

        if (contientEspace) {
            System.out.println("Presence d'un espace : true");
        }

        if (repetition3) {
            System.out.println("Repetition de trois caracteres : true");
        }

        boolean longueurOk=(longueur>=8 && longueur<=20);
        boolean majusculeOk=(nbMajuscules>0);
        boolean minusculeOk=(nbMinuscules>0);
        boolean chiffreOk=(nbChiffres>0);
        boolean specialOk=(nbSpeciaux>0);

        boolean estValide=longueurOk && majusculeOk && minusculeOk && chiffreOk
                && specialOk && !contientEspace && !repetition3;

        if (estValide) {
            System.out.println("VALIDE");
        } else {
            System.out.println("NON VALIDE");

            if (!longueurOk) {
                System.out.println("- La longueur doit etre entre 8 et 20 caracteres.");
            }
            if (!majusculeOk) {
                System.out.println("- Une lettre majuscule est obligatoire.");
            }
            if (!minusculeOk) {
                System.out.println("- Une lettre minuscule est obligatoire.");
            }
            if (!chiffreOk) {
                System.out.println("- Un chiffre est obligatoire.");
            }
            if (!specialOk) {
                System.out.println("- Un caractere special est obligatoire.");
            }
            if (contientEspace) {
                System.out.println("- Les espaces sont interdits.");
            }
            if (repetition3) {
                System.out.println("- Trois caracteres identiques consecutifs sont interdits.");
            }
        }

        scanner.close();
    }
}