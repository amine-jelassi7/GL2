package PartB;

public class Cat extends Animal {
    public Cat()
    {
        Name = "Cat";
    }

    @Override
    public void sound() {
        System.out.println("Cat meows");
    }

    public void displayName()
    {
        System.out.println(this.Name);
    }




}
