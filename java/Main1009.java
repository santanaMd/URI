import java.io.IOException;
import java.util.Scanner;
public class Main1009 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        ler.next();
        double slrFixo, vendas, slrFinal;
        slrFixo = ler.nextDouble();
        vendas = ler.nextDouble();
        slrFinal = slrFixo + vendas * 0.15;
        System.out.printf("TOTAL = R$ %.2f%n",slrFinal);
    }
}
