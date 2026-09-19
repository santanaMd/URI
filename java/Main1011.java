import java.io.IOException;
import java.util.Scanner;
public class Main1011 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        double raio = ler.nextDouble();
        double volume = (4.0/3) * 3.14159 * raio * raio * raio;
        System.out.printf("VOLUME = %.3f%n",volume);
    }
}
