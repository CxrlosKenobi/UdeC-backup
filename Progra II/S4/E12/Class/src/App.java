public class App {
    public App() {}

    public static void main(String[] args) {
        Persona p = new Persona("Kata", false);
        p.elNombre();
        p.esCasado();
    }
}

class Persona {
    private String nombre;
    private boolean estado;

    public Persona(String persona, boolean estado) {
        this.nombre = persona;
        this.estado = estado;
    }

    public boolean esCasado() {
        return estado;
    }

    public String elNombre() {
        return nombre;
    }
}
