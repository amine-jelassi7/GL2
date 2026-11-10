package MainPackage;

import Package1.ClassB;
import Package1.ClassC;

public class MainClass {
    public void main(String[] args) {
        //question 3 :
        
        ClassA a = new ClassA();
        ClassB b = new ClassB();

        //question 4 :
        System.out.println("Class A v1 = " + a.v1);
        
        //System.out.println("Class A v2 = " + a.v2);
        // -> on ne peut pas acceder a v2 car elle est prive

        System.out.println("Class A v3 = " + a.v3);
        System.out.println("Class A v4 = " + a.v4);

        System.out.println("Class B v1 = " + b.v1);
        
        //System.out.println("Class B v2 = " + b.v2);
        //System.out.println("Class B v3 = " + b.v3);
        //System.out.println("Class B v4 = " + b.v4);
        // -> on ne peut pas acceder a v2 car c'est prive
        // -> on ne peut pas acceder a v3 car c'est protected qui ne peut etre accessible seulement au meme package ou dans un class fille de class B
        // -> on ne peut pas acceder a v4 car il a un modificateur d'access par defaut donc il ne peut etre accessible seulement par des class de meme package

        // question 5 :
        // Reponse : on peut definir des methodes accesseur pour permettre l'access a v2

        System.out.println("Classe A v2 = " + a.getV2());

        System.out.println("Classe B v2 = " + b.getV2());

        //question 6 : 
        // Reponse : on peut definir des methodes mutateurs pour permettre la modification de v2

        a.setV2(5);
        System.out.println("Classe A v2 = " + a.getV2());

        b.setV2(6);
        System.out.println("Classe B v2 = " + b.getV2());
        
        //question 8 :
        // Reponse : oui, on peut redefinir la methode add dans la class ClassA de cet facon 
        // puisque elle a le meme nom mais non exactement la meme signature que la methode add deja ajouté (les parametre sont different)
        // ce phenomene est appele la Surcharge

        System.out.println("ClassA x + v3 = " + a.add(7));

        //question 9 : 
        // Reponse : oui , on peut redefinier la methode add dans la class ClassC de cet facon
        // ce phenomene est appele la redefinition d'une methode

        ClassC c = new ClassC();

        System.out.println("ClassC add v1 + v3 = " + c.add());
    
    
    }
}
