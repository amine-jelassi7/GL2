package MainPackage;


public class ClassA {
    public int v1 = 1;
    private int v2  = 2;
    protected int v3 = 3;
    int v4 = 4;

    public int getV2() {
        return v2;
    }

    public void setV2(int value) {
        v2 = value;
    }

    public int add() {
        return v2 + v4;
    }

    public int add(int x) {
        return x + v3;
    }
}