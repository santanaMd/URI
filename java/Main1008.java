import java.io.IOException;
import java.util.Scanner;
public class Main1008 {
    public static void main(String[] args) throws IOException {
        Scanner ler = new Scanner(System.in);
        int numFunc, horasTrab;
        double vlrHora, salario;
        numFunc = ler.nextInt();
        horasTrab = ler.nextInt();
        vlrHora = ler.nextDouble();
        salario = horasTrab * vlrHora;
        System.out.printf("NUMBER = "+numFunc+"%nSALARY = U$ %.2f%n",salario);
    }
}
