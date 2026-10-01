package tp0;

import java.util.Scanner;

public class exercice2 {
    public static void main(String[] args)
    {
        System.out.print("entrer un mot de passe: ");
        Scanner scanner = new Scanner(System.in);
        String password = scanner.nextLine();
        boolean length = (password.length()>20 || password.length()<8);
        int lowercase = 0;
        int uppercase = 0;
        int chiffre = 0;
        int character = 0;
        boolean espace = true;
        char [] password_array = password.toCharArray();
        for (char c : password_array)
        {
            if(Character.isUpperCase(c)) {uppercase++;}
            if(Character.isLowerCase(c)) {lowercase++;}
            if(Character.isDigit(c)){chiffre++;}
            if ("!@#$%&".indexOf(c)!=-1){character++;}
            if (c ==' '){espace = false;}

        }
        boolean consecutifs = false;
        for (int i=0;i<password.length()-3;i++)
        {
            if(password_array[i]== password_array[i+1] && password_array[i+1]==password_array[i+2]) {
                consecutifs = true;
                break;
            }

        }

        boolean valide = uppercase * lowercase * chiffre * character != 0 && (!espace || !consecutifs) && !length;


        if (valide)
        {
            System.out.println("valide");
        }
        else System.out.println("invalide");
        System.out.println("uppercase: "+uppercase);
        System.out.println("lowercase: "+lowercase);
        System.out.println("espace: "+espace);
        System.out.println("chiffre: "+chiffre);
        System.out.println("characters: "+character);
        System.out.println("trois chars consecutives: "+consecutifs);

    }
}
