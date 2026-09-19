import java.io.IOException;
import java.util.Scanner;
public class Main1004 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        int a, b, prod;
        a = ler.nextInt();
        b = ler.nextInt();
        prod = a * b;
        System.out.println("PROD = "+prod);
    }
}
