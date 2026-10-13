package tp0;

import java.util.Scanner;
import java.lang.String;

public class prob2 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("Entrée:"); 
        String mdp = scanner.nextLine();
        int nb_majus = 0; 
        int nb_minus = 0; 
        int nb_chiff = 0;
        int nb_special = 0;
        int len = mdp.length(); 
        boolean espace = false;
        boolean repartition_3_c = false;
        for (char c : mdp.toCharArray()) {
           if ('a' <= c && c <= 'z') nb_minus++;
           else if ('A' <= c && c <= 'Z') nb_majus++;
           else if ('0' <= c && c <= '9') nb_chiff++;
           else if (c == ' ') espace = true;
           else nb_special++;
        }
        for (int i = 0; i < mdp.length() - 1; i++){
            if (mdp.charAt(i) == mdp.charAt(i+1) && mdp.charAt(i+1) == mdp.charAt(i+2)){
                repartition_3_c = true; 
                break;
            }
        }
        
        System.out.println("Sortie");
        System.out.println("Longeur: " + len);
        System.out.println("Majuscule: " + nb_majus);
        System.out.println("Minuscule: " + nb_minus);
        System.out.println("Chiffre: " + nb_chiff);
        System.out.println("Caractere spéciaux: " + nb_special);
        System.out.println("Repartition de trois caracteres: " + repartition_3_c);

        boolean valid = nb_chiff >= 1 && nb_majus >= 1 && nb_minus >= 1 && nb_special >= 1 && !espace && !repartition_3_c;

        if (valid)
            System.out.println("VALIDE");
        else{
            System.out.println("INVALIDE");
            if (nb_chiff < 1)
                System.out.println(" - Un chiffre est obligatoire");
            if (nb_majus < 1)
                System.out.println(" - Une lettre majuscule est obligatoire");
            if (nb_minus < 1)
                System.out.println(" - Une lettre minuscule est obligatoire");
            if (nb_special < 1)
                System.out.println(" - Un caractere special est obligatoire");
            if (repartition_3_c)
                System.out.println(" - Trois caractere identique consecutifs sont interdits");
            if (espace)
                System.out.println(" - Un espace est interdit");
        }
    }
}
