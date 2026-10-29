package MainPackage;
import Package1.ClassB;

public class MainPackage{
    public static void main(String[] args) {
       ClassA classA = new ClassA();
       ClassB classB = new ClassB();
       System.out.println("ClassA v1: " + classA.v1);
       // System.out.println("ClassA v2: " + classA.v2); (Error: is not visible)
       // System.out.println("ClassA v3: " + classA.v3); (Error: is not visible)
       // System.out.println("ClassA v4: " + classA.v4); (Error: is not visible)

       System.out.println("ClassB v1: " + classB.v1);
       // System.out.println("ClassB v2: " + classB.v2); (Error: is not visible)
       // System.out.println("ClassB v3: " + classB.v3); (Error: is not visible) 
       // System.out.println("ClassB v4: " + classB.v4); (Error: is not visible)
    
        /*
            5) pour acceder a l'attribut B2 des deux classes il faut changer private par public 
        */ 
        
        
    }
}