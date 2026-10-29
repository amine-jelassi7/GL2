public class Main {
   public static void main(String[] args) {
        Animal animal = new Animal();       
        Cat cat = new Cat();
        Dog dog = new Dog();

        animal.sound(); // affiche "Animal makes sound"
        cat.sound(); // affiche "Cat meows"
        dog.sound(); // affiche "Dog barks"

        cat.displayName(); // affiche "Cat"
        dog.displayName(); // affiche "Dog"

        /*
            les classes cat et dog redefinient la fonction sound() de la class mere animal 
        */
   
        Animal A = new Cat(); // le upcasting
   
        // A.displayName(); affiche une erreur de compilation 

        /* 
         * Explication : Erreur de compilation 
         * Le type déclaré de la variable A est "Animal", mais la classe Animal 
         * ne possède pas la méthode displayName()
         */

        ((Cat) A).displayName(); // affiche "Cat"
        // le down casting
   } 
}
