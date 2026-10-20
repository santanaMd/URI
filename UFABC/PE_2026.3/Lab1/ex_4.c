#include <stdio.h>

int main(){

    int n;

    int matrix_index;

    int ultimo_prime = 0;
    int menor_prime = 10000;

    int decomp[10][2];

    for(int i = 0; i<10; i++){
        decomp[i][0] = 0;
        decomp[i][1] = 0;
    }

    scanf("%d", &n);

    while(n != 1){
        //printf("%d\n", n);
        for(int i = 2; i<=10000; i++){
            if(n % i == 0){
                
                for(int j = 0; j<10; j++){
                    if(decomp[j][0] == i || decomp[j][0] == 0){
                        matrix_index = j;
                    }
                }

                decomp[matrix_index][0] = i;
                decomp[matrix_index][1]++;

                // printf("%d / %d = %d\n", n, i, n/i);
                n = n / i;
                break;
            }
        }
    }

    for(int i = 0; i<10; i++){
        for(int j = 0; j<10; j++){
            if(decomp[j][0] > ultimo_prime && decomp[j][0] < menor_prime){
                menor_prime = decomp[j][0];
                matrix_index = j;
            }
        }
        
        if(menor_prime == 10000){
            break;
        }

        printf("%d %d\n", decomp[matrix_index][0], decomp[matrix_index][1]);
        
        ultimo_prime = menor_prime;
        menor_prime = 10000;
    }

    return 0;
}