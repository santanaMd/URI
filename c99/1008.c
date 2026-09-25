#include <stdio.h>

int main(){

    int num_func, horas_trabalhadas;

    float valor_hora, salario;

    scanf("%d", &num_func);
    scanf("%d", &horas_trabalhadas);
    scanf("%f", &valor_hora);

    salario = valor_hora * horas_trabalhadas;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num_func, salario);

    return 0;
}