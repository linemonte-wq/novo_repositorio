#include <stdio.h>
#include <stdlib.h>

int main(){
	int B, C;
	scanf("%d",&B);
	scanf("%d",&C);
    //Bino par, cino impar
    int soma = B + C;
    if (soma % 2 == 0)
        printf("Bino");
    else
        printf("Cino");

    return 0;
}