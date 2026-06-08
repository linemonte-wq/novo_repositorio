#include <stdio.h>
int main(){    	
    int N, A = 0, B = 0;
    scanf("%d", &N);
    int numeros[N];
    for (int i = 0; i < N; i++){
        scanf("%d", &numeros[i]);
        if(numeros[i] == 1){
            if (A == 0){
                A = 1;
            } else {
                A = 0;
            }
        }
        if(numeros[i] == 2){
            if (A == 0){
                A = 1;
            } else {
                A = 0;
            }
            if (B == 0){
                B = 1;
            } else {
                B = 0;
            }
        }
    }
    printf("%d\n%d", A, B);
    return 0;
}
