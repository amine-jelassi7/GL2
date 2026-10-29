public class Cat extends Animal{
   public Cat(){
    this.name = "Cat";
   }

   @Override 
   public void sound(){
        System.out.println("Cat meows");
   }

   public void displayName(){ 
        System.out.println(this.name);
    }
}
