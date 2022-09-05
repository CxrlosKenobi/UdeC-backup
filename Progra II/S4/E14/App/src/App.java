public class App {
    public App() {}

    public static void main(String[] args) {
        Promediador prom = new Promediador(2, 1);

        prom.agregaNumero(2);
        prom.agregaNumero(3);

        System.out.print(prom.promedio());
        System.out.println();
        
        System.out.print(prom.numero());
        System.out.println();
    }
}

class Promediador {
    private int s;
    private int n;

    public Promediador(int s, int n) {
        this.s = s;
        this.n = n;
    }

    public void agregaNumero(int sum) {
        this.s += sum;
        this.n += 1;
    }

    public float promedio() {
        return (float) this.s / this.n;
    }
    public int numero() {
        return this.n;
    }
}
