#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int matriz[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    int somaEsperada = 0;
    for (int j = 0; j < N; j++) {
        somaEsperada += matriz[0][j]; // soma da primeira linha como referência
    }
    // Verificar linhas
    for (int i = 0; i < N; i++) {
        int soma = 0;
        for (int j = 0; j < N; j++) {
            soma += matriz[i][j];
        }
        if (soma != somaEsperada) {
            printf("-1\n");
            return 0;
        }
    }
    // Verificar colunas
    for (int j = 0; j < N; j++) {
        int soma = 0;
        for (int i = 0; i < N; i++) {
            soma += matriz[i][j];
        }
        if (soma != somaEsperada) {
            printf("-1\n");
            return 0;
        }
    }
    // Verificar diagonal principal
    int somaDiag1 = 0;
    for (int i = 0; i < N; i++) {
        somaDiag1 += matriz[i][i];
    }
    if (somaDiag1 != somaEsperada) {
        printf("-1\n");
        return 0;
    }
    // Verificar diagonal secundária
    int somaDiag2 = 0;
    for (int i = 0; i < N; i++) {
        somaDiag2 += matriz[i][N - 1 - i];
    }
    if (somaDiag2 != somaEsperada) {
        printf("-1\n");
        return 0;
    }
    // Se chegou até aqui, é mágico
    printf("%d\n", somaEsperada);
    return 0;
}
