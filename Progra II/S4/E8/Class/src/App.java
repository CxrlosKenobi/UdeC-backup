class Balde {
    private int contenido;

    public Balde() {
    }

    public void llenar(int cantidad) {
        if ((contenido + cantidad) <= 12)
            contenido += cantidad;
        else
            contenido = 12;
    }

    public int verificar() {
        return contenido;
    }
}

public class App {
    App() {
    }

    public static void main(String[] args) {
        Balde b = new Balde();
        b.llenar(6);

        System.out.println(b.verificar());

        b.llenar(9);

        System.out.println(b.verificar());
    }
}
