public class Program {
    public static void main(String[] args) {
        //question d :
        Animal a = new Animal();
        a.sound();

        Cat c = new Cat();
        c.sound();

        Dog d = new Dog();
        d.sound();

        //Reponse : on remarque que chaque appelle de instance.sound() excute le code redefinie dans la class type de l'instance
        // donc pour Animal a on aura le message "Animal makes sound"
        // pour Cat c on aura le message "Cat meows"
        // pour Dog d on aura le message "Dog barks"
        //c'est le phenomene de redefinition des methode , donc la methode sound originalement dans Animal est redefinie dans Cat et Dog pour faire d'autre chose
        
        //question e :

        c.displayName();
        d.displayName();

        //Reponse : les deux instance (de type cat et de type dog) affiche le nom reinitialise dans leurs constructeurs
        // la Cat affiche le nom "Cat"
        // le Dog affiche le nom "Dog"
        // Explication : dans Cat , la methode displayName affiche this.Name qui est initialise a "Cat" par le constructeur de Cat
        // dans Dog , la methode displayName affiche super.Name qui est le meme que this.Name qui est initialise a "Dog" par le constructeur de Dog
        // meme si c'est super.Name et non this.Name , c'est le meme attribut qui a ete change a "Dog" par le constructeur de Dog
        
        //question f :
        
        Animal A = new Cat();
        
        //Reponse : On appelle cette phenomene le polymorphisme

        //question g : 

        //A.displayName();

        //Reponse : on remarque qu'on ne peut pas appeller la fonction displayName (une erreur se produit)
        //Explication : on ne peut pas appeller la fonction displayName car c'est une methode presente dans les class Dog et Cat
        // mais non presente dans la class Animal. le type de la variable A est Animal , donc on ne peut pas acceder a la methode displayName non presente dans Animal.

        //question h : 
        //Reponse : une solution pour faire appeller la methode displayName est de faire un sous-classement de la variable A vers le type Cat avant l'appelle de displayName
        // ce phenomene est appelle un sous-classement (Downcasting)
        
        ((Cat)A).displayName();
    }
}
