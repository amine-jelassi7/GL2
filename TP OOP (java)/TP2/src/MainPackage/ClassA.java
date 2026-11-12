package MainPackage;

public class ClassA {
    public int V1 = 1;
    private int V2 = 2;
    protected int V3 = 3;
    int V4 = 4;

    public void setV2(int v2) {
        this.V2 =v2;
    }
    public int getV2()
    {
        return this.V2;
    }
    public int add()
    {
        return V2 + V4;
    }
    public int add(int x)
    {
        //on appelle ce phenomene le surcharge (le fait d'avoir deux methode ayant le meme nom mais des parametres differents)
        return x+V3;
    }
}
