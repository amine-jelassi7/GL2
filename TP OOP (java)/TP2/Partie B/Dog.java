public class Dog extends Animal{
   public Dog(){
    this.name = "Dog";
   }

   @Override 
   public void sound(){
    System.out.println("Dog barks");
   }

   public void displayName(){
    System.out.println(super.name);
   }
}