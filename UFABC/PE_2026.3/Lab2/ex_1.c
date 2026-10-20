#include <stdio.h>

void maiores_linhas(int matriz[][100], int n_linhas, int n_colunas, int maiores[]){

    int maior;

    for(int i = 0; i<n_linhas; i++){
        
        maior = -32767;

        for(int j = 0; j<n_colunas; j++){
            // printf("%d\n", matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }

        maiores[i] = maior;

    }

    return;
}

int main(){
    int t1_matriz[100][100] = {
        {3, -2, 8, 5},
        {7, 7, 1, 4},
        {-3, -10, -5, -1}
    };
    int t1_maiores[100];

    maiores_linhas(t1_matriz, 3, 4, t1_maiores);

    for (int i = 0; i < 3; i++) {
        if (i > 0) printf(" ");
        printf("%d", t1_maiores[i]);
    }
    printf("\n");
    return 0;
}