#include <stdio.h>

int conta_vizinhos(int matriz[][100], int n_linhas, int n_colunas, int lin, int col){
    
    int count = 0;

    int step[3] = {-1, 0, 1};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){

            if(lin + step[i] > n_linhas || lin + step[i] < 0 || col + step[j] > n_colunas || col + step[j] < 0) continue;

            if(step[i] == 0 && step[j] == 0) continue;

            count += matriz[lin + step[i]][col + step[j]];
        }
    }
    return count;
}

int main(){
    
    int t1_matriz[100][100] = {
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {1, 0, 0, 1}
    };

    printf("%d\n", conta_vizinhos(t1_matriz, 3, 4, 1, 1));



    int t2_matriz[100][100] = {
        {1, 0, 1, 0},
        {0, 1, 1, 0},
        {1, 0, 0, 1}
    };

    printf("%d\n", conta_vizinhos(t2_matriz, 3, 4, 0, 0));


    return 0;
}