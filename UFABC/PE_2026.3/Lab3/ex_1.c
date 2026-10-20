#include <stdio.h>
#include <string.h>

int eh_palindromo_rec(char str[], int inicio, int fim){

    if(str[inicio] != str[fim])
        return 0;

    if(inicio >= fim)
        return 1;

    inicio++;
    fim--;

    return eh_palindromo_rec(str, inicio, fim);
}

int main(){

    if(eh_palindromo_rec("arara", 0, 4) == 1){
        printf("Sucesso case 1!!!\n");
    } else {
        printf("Falha case 1!!!\n");
    }

    if(eh_palindromo_rec("casa", 0, 3) == 0){
        printf("Sucesso case 2!!!\n");
    } else {
        printf("Falha case 2!!!\n");
    }

    return 0;
}