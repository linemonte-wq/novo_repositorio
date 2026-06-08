#include <stdio.h>
int main(){    	
    int N;
    scanf("%d", &N);
    int numeros[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &numeros[i]);
    }     
    int maxSeq = 1;
    int atualSeq = 1;

    for (int i = 1; i < N; i++) {
        if (numeros[i] == numeros[i - 1]) {
            atualSeq++; 
        } else {
            atualSeq = 1;
        }
        if (atualSeq > maxSeq) {
            maxSeq = atualSeq; 
        }
    }
    printf("%d", maxSeq);
    return 0;
}