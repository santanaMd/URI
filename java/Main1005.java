import java.io.IOException;
import java.util.Scanner;
public class Main1005 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        double nota1, nota2, media;
        nota1 = ler.nextDouble();
        nota2 = ler.nextDouble();
        media = (nota1 * 3.5 + nota2 * 7.5) / 11;
        System.out.printf("MEDIA = %.5f%n",media);
    }
}
