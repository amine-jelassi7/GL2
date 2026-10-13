package tp0;

import java.util.Scanner;

public class prob1 {
   public static void main(String[] agrs) {
      Scanner scanner = new Scanner(System.in);
      System.out.println("Entrée"); 
      int N;
      do {   
        N = scanner.nextInt();
      } while (N <= 0);
      int nb_pairs = 0;
      int nb_impairs = 0; 
      int s_pairs = 0; 
      int s_impairs = 0; 
      while (N != 0){
        int a = N % 10; 
        N /= 10; 
        if (a % 2 == 0){
            nb_pairs++; 
            s_pairs += a;
        }
        else{
            nb_impairs++; 
            s_impairs += a;
        }
      }
      System.out.println("Sortie");
      System.out.println("Chiffres pairs: " + nb_pairs);
      System.out.println("Chiffres impairs: " + nb_impairs);
      System.out.println("Somme des chiffres pairs: " + s_pairs);
      System.out.println("Somme des chiffres impairs: " + s_impairs);
      if (s_pairs == s_impairs && nb_impairs == nb_pairs)
        System.out.println("EQUILIBRE");
      else
        System.out.println("NON EQUILIBRE");
   } 
}
