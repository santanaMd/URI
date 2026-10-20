#include <stdio.h>

int g_pilha[10] = {0};
int g_elementos = 0;

void finalizar(){

    int impressos = 0;

    int non_zero_elements = 0;

    for(int i = 9; i>=0; i--){
        if(g_pilha[i] != 0){
            non_zero_elements++;
        }
    }

    for(int i = 0; i<(g_elementos - non_zero_elements); i++){
        if(i==0){
            printf("0 ");
        } else {
            printf(" 0 ");
        }
    }

    for(int i = 9; i>=0; i--){
        if(g_pilha[i] != 0){
            if(impressos != 0){
                printf(" %d", g_pilha[i]);
            } else {
                printf("%d", g_pilha[i]); 
            }
            impressos++;
        }
    }

    printf("\n");

    return;
}

void adicionar(int n){

    for(int i = 9; i>=0; i--){
        if(g_pilha[i] == 0){
            g_pilha[i] = n;
            g_elementos++;
            break;
        }
    }

    return;
}

void remover(int n){
    
    if(g_elementos < n){
        for(int i = 0; i<=9; i++){
            g_pilha[i] = 0;
        }
        g_elementos = 0;
    } else {
        g_elementos = g_elementos - n;
        for(int i = 0; i<=9; i++){
            if(g_pilha[i] != 0 && n > 0){
                g_pilha[i] = 0;
                n--;
            }
        }
    }
    
    return;
}

void somar(){
    
    int sum = 0;

    for(int i = 0; i<=9; i++){
        sum += g_pilha[i];
        g_pilha[i] = 0;
    }

    g_pilha[9] = sum;

    g_elementos = 1;
    
    return;
}

int main(){

    char o;
    int n;

    while(1){
        
        scanf(" %c", &o);

        if(o == 'a'){
            scanf("%d", &n);
            adicionar(n);
        } else if (o == 'r'){
            scanf("%d", &n);
            remover(n);
        } else if (o == 's'){
            somar();
        } else if (o == 'f'){
            finalizar();
            return 0;
        } else {
            return -1;
        }

    }

}