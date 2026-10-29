package Package1;
import MainPackage.ClassA;

public class ClassC extends ClassA{
    @Override
    public int add(){
        return v1 + v3;
    }
    // 9) c'est le phenomene de polymorphisme dynamique (Overriding)
}
