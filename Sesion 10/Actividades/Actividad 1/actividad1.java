import java.lang.Math;

public class Main {

    public static <T extends Number> T calcularDistancia(T x1, T y1, T x2, T y2) {
        double distancia = Math.sqrt(Math.pow(x2.doubleValue() - x1.doubleValue(), 2) + Math.pow(y2.doubleValue() - y1.doubleValue(), 2));
        return (T) Double.valueOf(distancia);
    }

    public static <T extends Number> T calcularTiempoEstimado(T distancia, T velocidadPromedio) {
        double tiempo = distancia.doubleValue() / velocidadPromedio.doubleValue();
        return (T) Double.valueOf(tiempo);
    }

    public static void main(String[] args) {
        int x1 = 0, y1 = 0,  x2 = 5, y2 = 5;
        int distancia_enteros = calcularDistancia(x1, y1, x2, y2);
        System.out.println("Distancia entre (" + x1 + "," + y1 + ") y (" + x2 + "," + y2 + "): " + distancia_enteros);

        double x3 = 1.5, y3 = 2.5,  x4 = 7.5, y4 = 9.5;
        double distancia_dobles = calcularDistancia(x3, y3, x4, y4);
        System.out.println("\nDistancia entre (" + x3 + "," + y3 + ") y (" + x4 + "," + y4 + "): " + distancia_dobles);

        double distancia_km = 100.0;
        double velocidad_promedio_kmph = 80.0;

        double tiempo_estimado = calcularTiempoEstimado(distancia_km, velocidad_promedio_kmph);
        System.out.println("\nTiempo estimado de entrega para " + distancia_km + " km a " + velocidad_promedio_kmph + " km/h: " + tiempo_estimado + " horas");
    }
}
