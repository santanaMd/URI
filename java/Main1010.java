import java.io.IOException;
import java.util.Scanner;
public class Main1010 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        String[] inputs;
        double vlrApagar;
        inputs = ler.nextLine().split(" ");
        vlrApagar = Integer.parseInt(inputs[1]) * Double.parseDouble(inputs[2]);
        inputs = ler.nextLine().split(" ");
        vlrApagar += Integer.parseInt(inputs[1]) * Double.parseDouble(inputs[2]);
        System.out.printf("VALOR A PAGAR: R$ %.2f%n",vlrApagar);
    }
}
