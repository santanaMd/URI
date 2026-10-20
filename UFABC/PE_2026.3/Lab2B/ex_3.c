#include <stdio.h>
#include <string.h>

int anagrama(char S[], char T[]){

    int S_contagem[26][2];
    int T_contagem[26][2];
    int FLAG_sucesso = 0;

    if(strlen(S) != strlen(T)) return 0;

    // Popula vetores
    for(int i = 0; i<26; i++){
        S_contagem[i][0] = 0;
        S_contagem[i][1] = 0;
        T_contagem[i][0] = 0;
        T_contagem[i][1] = 0;
    }

    for(int i = 0; i<(int) strlen(S); i++){
        for(int j=0; j<26; j++){
            if(S[i] == S_contagem[j][0] || S_contagem[j][0] == 0){
                
                if (S_contagem[j][0] == 0) S_contagem[j][0] = S[i];
                
                S_contagem[j][1]++;
                break;
            }
        }
    }

    for(int i = 0; i<(int) strlen(T); i++){
        for(int j=0; j<26; j++){
            if(T[i] == T_contagem[j][0] || T_contagem[j][0] == 0){
                
                if (T_contagem[j][0] == 0) T_contagem[j][0] = T[i];
                
                T_contagem[j][1]++;
                break;
            }
        }
    }

    for(int i = 0; i<26; i++){
        
        if(S_contagem[i][0] == 0) break;

        FLAG_sucesso = 0;
        for(int j=0; j<26; j++){

            // printf("%c == %c && %d == %d\n", S_contagem[i][0], T_contagem[j][0], S_contagem[i][1], T_contagem[j][1]);

            if(T_contagem[j][0] == 0) break;

            if(S_contagem[i][0] == T_contagem[j][0] && S_contagem[i][1] == T_contagem[j][1]){
                FLAG_sucesso = 1;
                continue;
            }
        }
        if(FLAG_sucesso == 0){
            return 0;   
        }
    }

    return 1;
}

int main(){

    if(anagrama("arco", "caro") == 1){
        printf("Case 1 correto!\n");
    } else {
        printf("Case 1 erro!\n");
    }

    if(anagrama("casa", "caso") == 0){
        printf("Case 2 correto!\n");
    } else {
        printf("Case 2 erro!\n");
    }

    if(anagrama("aaab", "aabb") == 0){
        printf("Case 3 correto!\n");
    } else {
        printf("Case 3 erro!\n");
    }

    if(anagrama("", "a") == 0){
        printf("Case 4 correto!\n");
    } else {
        printf("Case 4 erro!\n");
    }

    if(anagrama("abcabc", "aabbccx") == 0){
        printf("Case 5 correto!\n");
    } else {
        printf("Case 5 erro!\n");
    }


    return 0;
}