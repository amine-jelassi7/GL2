package Package1;


import MainPackage.ClassA;

public class ClassC extends ClassA {
    @Override
    public int add() {
        return V1+V3;
        //on appelle ce phenomene la redefinition
    }
}
