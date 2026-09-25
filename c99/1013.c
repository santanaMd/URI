#include <stdio.h>

int main(){
    
    int a, b, c, maior, abs;

    scanf("%d %d %d", &a, &b, &c);


    // Maior entre a e b
    abs = a - b;

    if (abs < 0){
        abs = abs * -1;
    }

    maior = ( a + b + abs ) / 2;


    // Maior entre o anterior e c
    abs = maior - c;

    if (abs < 0){
        abs = abs * -1;
    }

    maior = (maior + c + abs) / 2;

    printf("%d eh o maior\n", maior);
    
    return 0;
}