#include <stdio.h>

int eh_subvetor(int sub_vec[], int m, int vec[], int n){

    int count_n = 0;
    int count_sucesso_elemento = 0;

    for(int i = 0; i<m; i++){

        if(count_n == n){
            return 0;
        }

        for(int j = count_n; j<n; j++){
            
            // printf("i=%d | j=%d | sub_vec[i]=%d | vec[j]=%d\n", i, j, sub_vec[i], vec[j]);

            count_n++;
            
            if(sub_vec[i] == vec[j]){
                count_sucesso_elemento++;
                break;
            } else {
                continue;
            }

        }
    }
    
    if(count_sucesso_elemento == m){
        return 1;
    } else {
        return 0;
    }
    
}

int main(){

    int sub_vec[4] = {12, 13, 10, 3};

    int vec_1[9] = {11, 12, 13, 11, 10, 9, 7, 3, 3};

    int vec_2[9] = {11, 12, 10, 11, 13, 9, 7, 3, 3};

    int sub_vec_2[3] = {1, 2, 3};

    int sub_vec_3[2] = {1, 2};

    int vec_3[1] = {1};

    if(eh_subvetor(sub_vec, 4, vec_1, 9)){
        printf("Sucesso case 1!!!\n");
    } else {    
        printf("Falha case 1...\n");
    }

    if(eh_subvetor(sub_vec, 4, vec_2, 9) == 0){
        printf("Sucesso case 2!!!\n");
    } else {
        printf("Falha case 2...\n");
    }

    if(eh_subvetor(sub_vec_2, 3, vec_3, 6)){
        printf("Sucesso case 3!!!\n");
    } else {
        printf("Falha case 3...\n");
    }

    if(eh_subvetor(sub_vec_3, 2, vec_3, 1) == 0){
        printf("Sucesso case 4!!!\n");
    } else {
        printf("Falha case 4...\n");
    }

    return 0;
}