package MainPackage;


import Package1.ClassB;

public class Main
{
    public static void main(String[] args)
    {
        ClassA A = new ClassA();
        ClassB B = new ClassB();

        //System.out.println(A.V1); output: 1
        //System.out.println(A.V2); prive donc il fait un error
        //System.out.println(A.V3);output: 3
        //System.out.println(A.V4);output: 4

        //System.out.println(A.V1); output: 1
        //System.out.println(A.V2); prive donc il fait un error
        //System.out.println(A.V3); Protected out of scope donc il n'affichera pas
        //System.out.println(A.V4); default accesse par son package seulement

        A.setV2(9);

        System.out.println(A.getV2());;


    }
}