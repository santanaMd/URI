#include <stdio.h>

int main(){

    int v;

    float entrada;

    scanf("%f", &entrada);

    entrada *= 100;
    v = (int) entrada;

    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", v / 10000);
    v %= 10000;

    printf("%d nota(s) de R$ 50.00\n", v / 5000);
    v %= 5000;

    printf("%d nota(s) de R$ 20.00\n", v / 2000);
    v %= 2000;

    printf("%d nota(s) de R$ 10.00\n", v / 1000);
    v %= 1000;

    printf("%d nota(s) de R$ 5.00\n", v / 500);
    v %= 500;

    printf("%d nota(s) de R$ 2.00\n", v / 200);
    v %= 200;

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", v / 100);
    v %= 100;

    printf("%d moeda(s) de R$ 0.50\n", v / 50);
    v %= 50;

    printf("%d moeda(s) de R$ 0.25\n", v / 25);
    v %= 25;

    printf("%d moeda(s) de R$ 0.10\n", v / 10);
    v %= 10;

    printf("%d moeda(s) de R$ 0.05\n", v / 5);
    v %= 5;

    printf("%d moeda(s) de R$ 0.01\n", v / 1);

    return 0;
}