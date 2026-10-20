#include <string.h>

int tamanho_componente(int n_linhas, int n_colunas, int mat[n_linhas][n_colunas], int i, int j){

    if(i < 0 || j < 0 || i >= n_linhas || j >= n_colunas)
        return 0;

    if(mat[i][j] == 0)
        return 0;

    mat[i][j] = 0;

    return  1
            + tamanho_componente(n_linhas, n_colunas, mat, i + 1, j)
            + tamanho_componente(n_linhas, n_colunas, mat, i - 1, j)
            + tamanho_componente(n_linhas, n_colunas, mat, i, j + 1)
            + tamanho_componente(n_linhas, n_colunas, mat, i, j - 1);
}

int main(){
    return 0;
}