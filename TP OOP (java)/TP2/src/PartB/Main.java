package PartB;

public class Main {
    public static void main(String[] args)
    {
        Animal animal = new Animal();
        Cat cat = new Cat();
        Dog dog = new Dog();

        animal.sound(); // affiche Animal makes sound
        cat.sound(); // affiche  Cat meows
        dog.sound();// affiche  Dog barks

        // d: chaque objet fait appel a la methode sound de sa classe

        // e : this.Name et super.Name designent le meme attribut (herite
        // d Animal), modifie par le constructeur de chaque classe fille
        cat.displayName(); //affiche Cat
        dog.displayName();// affiche Dog (car l attribut Name est herite du class Animal et il est change par le constructeur au debut)

        Animal A = new Cat(); // f : il s agit de upcasting (polymorphisme)
        // A.displayName(); //g : ne compile pas car animal n a pas une methode displayName
        ((Cat) A).displayName();       // h : la solution est le downcasting -> Cat car l object reel est un Cat

    }
}
