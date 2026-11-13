#include <stdio.h>

int main() {
    int linhas, i, j, e, valor;

    printf("Quantas linhas deseja mostrar? ");
    scanf("%d", &linhas);

    if (linhas <= 0) {
        printf("O numero de linhas deve ser maior que zero.\n");
        return 0;
    }

    printf("\n");
    for (i = 0; i < linhas; i++) {
        for (e = 0; e < (linhas - i - 1) * 2; e++)
            printf(" ");

        valor = 1;
        for (j = 0; j <= i; j++) {
            printf("%-4d", valor);
            valor = valor * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}