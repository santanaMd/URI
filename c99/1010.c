#include <stdio.h>

int main(){
    
    int cod_peca_1, num_peca_1, cod_peca_2, num_peca_2;

    float valor_peca_1, valor_peca_2, total;

    scanf("%d %d %f", &cod_peca_1, &num_peca_1, &valor_peca_1);
    scanf("%d %d %f", &cod_peca_2, &num_peca_2, &valor_peca_2);

    total = num_peca_1 * valor_peca_1 + num_peca_2 * valor_peca_2;

    printf("VALOR A PAGAR: R$ %.2f\n", total);
    
    return 0;
}