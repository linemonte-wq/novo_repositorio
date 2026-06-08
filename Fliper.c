#include <stdio.h>
int main (){
    int R, P;
    scanf("%d", &P);
    scanf("%d", &R);
    if(P == 1){
        if (R == 0)
        printf("B");
        else
        printf("A");
    } else 
        printf("C");
    return 0;
}