public class Dog extends Animal {
    
    public Dog() {
        super();
        Name = "Dog";
    }

    public void sound() {
        System.out.println("Dog barks");
    }

    public void displayName() {
        System.out.println("Le nom de dog est " + super.Name);
    }
}
