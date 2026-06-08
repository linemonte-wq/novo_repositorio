#include <stdio.h>
int main (){
    int A, M, pessoas;
	scanf("%d",&A);
	scanf("%d",&M);
    pessoas = A + M;
    if (pessoas <= 50)
        printf("S");
    else
        printf("N");
    return 0;
}
