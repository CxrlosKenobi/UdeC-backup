public class Main {
    Main() {}

    public static void main(String[] args)  {
        OtraClase puntero = new OtraClase(14);

        System.out.print(puntero.sacaDato());
        System.out.println();
        
    }
}

class OtraClase {
    private int store;
    
    public OtraClase(int init) {
        this.store = init;
    }
    
    public int sacaDato() {
        return store;
    }
}
