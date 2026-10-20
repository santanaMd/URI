#include <stdio.h>
#include <string.h>

int main(){

    char texto[101];

    fgets(texto, 101, stdin);

    for(int i = 0; i<(int) strlen(texto); i++){
        
        if(texto[i] > 64 && texto[i] < 91){
            texto[i] += 32;
        } else if(texto[i] > 96 && texto[i] < 123){
            texto[i] -= 32;
        }
        
    }

    printf("%s", texto);

    return 0;
}