#include <stdio.h>

int main(){

    int p1x, p1y, p2x, p2y, tx, ty;

    scanf("%d %d", &p1x, &p1y);
    scanf("%d %d", &p2x, &p2y);
    scanf("%d %d", &tx, &ty);

    if(tx >= p1x && tx <= p2x && ty >= p1y && ty <= p2y){
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }

    return 0;
}