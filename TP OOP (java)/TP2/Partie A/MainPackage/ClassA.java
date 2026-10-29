package MainPackage;

public class ClassA {
   public int v1 = 1; 
   private int v2 = 2;
   protected int v3 = 3; 
   int v4 = 4; 

   public int add(){
       return v2 + v4; 
   }

    public int add(int x){
        return v3 + x;
    }

    // 8) c'est le phenomene de polymorphisme statique (surchage)

}
