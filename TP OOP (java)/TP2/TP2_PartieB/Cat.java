public class Cat extends Animal {
    
    public Cat() {
        super();
        Name = "Cat";
    }

    public void sound() {
        System.out.println("Cat meows");
    }

    public void displayName() {
        System.out.println("Le nom de cat est " + this.Name);
    }

}
