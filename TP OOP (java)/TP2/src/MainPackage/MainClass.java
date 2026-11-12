package MainPackage;

import Package1.ClassB;
import Package1.ClassC;

public class MainClass {
    public static void main(String[] args) {
        ClassA A = new ClassA();
        ClassB B = new ClassB();

        // Q4 : acces aux attributs de A (meme package MainPackage)
        System.out.println(A.V1);   // 1
        // System.out.println(A.V2); // erreur : prive
        System.out.println(A.V3);   // 3 (protected : accessible dans le meme package)
        System.out.println(A.V4);   // 4 (default : accessible dans le meme package)

        // Q4 : acces aux attributs de B (autre package Package1)
        System.out.println(B.V1);   // 1
        // System.out.println(B.V2); // erreur : prive
        // System.out.println(B.V3); // erreur : protected, autre package, pas d heritage
        // System.out.println(B.V4); // erreur : acces par defaut, autre package

        // Q5 et Q6 : getters et setters
        System.out.println(A.getV2()); // 2
        System.out.println(B.getV2()); // 2
        A.setV2(9);
        B.setV2(7);
        System.out.println(A.getV2()); // 9
        System.out.println(B.getV2()); // 7

        // Q7 et Q8 : add et surcharge
        System.out.println(A.add());    // 9 + 4 = 13
        System.out.println(A.add(10));  // 10 + 3 = 13

        // Q9 : redéfinition dans ClassC
        ClassC C = new ClassC();
        System.out.println(C.add());    // 1 + 3 = 4
    }
}