import java.io.IOException;
import java.util.Scanner;
public class Main1006 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        double nota1, nota2, nota3, media;
        nota1 = ler.nextDouble();
        nota2 = ler.nextDouble();
        nota3 = ler.nextDouble();
        media = (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;
        System.out.printf("MEDIA = %.1f%n",media);
    }
}
