#include <stdio.h>

int main() {
    int opcao, linhas, n, p, i, j, e;
    int valor, resultado;

    do {
        printf("\n========== MENU ==========\n");
        printf("1 - Triangulo de Pascal\n");
        printf("2 - Arranjo\n");
        printf("3 - Permutacao simples\n");
        printf("4 - Combinacao\n");
        printf("5 - Sair\n");
        printf("==========================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao) {
            case 1:
                printf("Quantas linhas deseja mostrar? ");
                scanf("%d", &linhas);

                if (linhas <= 0) {
                    printf("O numero de linhas deve ser maior que zero.\n");
                    break;
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
                break;

            case 2:
                printf("Digite o total de elementos (n): ");
                scanf("%d", &n);
                printf("Digite quantos serao tomados (p): ");
                scanf("%d", &p);

                if (n < 0 || p < 0 || p > n) {
                    printf("Dados invalidos! Use n >= 0 e 0 <= p <= n.\n");
                    break;
                }

                resultado = 1;
                for (i = 0; i < p; i++)
                    resultado = resultado * (n - i);

                printf("\nA(%d,%d) = %d\n", n, p, resultado);
                break;

            case 3:
                printf("Digite o numero de elementos (n): ");
                scanf("%d", &n);

                if (n < 0) {
                    printf("Dado invalido! n deve ser maior ou igual a zero.\n");
                    break;
                }
                if (n > 12) {
                    printf("Valor muito grande! O maximo suportado e 12.\n");
                    break;
                }

                resultado = 1;
                for (i = 2; i <= n; i++)
                    resultado = resultado * i;

                printf("\nP(%d) = %d! = %d\n", n, n, resultado);
                break;

            case 4:
                printf("Digite o total de elementos (n): ");
                scanf("%d", &n);
                printf("Digite quantos serao tomados (p): ");
                scanf("%d", &p);

                if (n < 0 || p < 0 || p > n) {
                    printf("Dados invalidos! Use n >= 0 e 0 <= p <= n.\n");
                    break;
                }

                if (p > n - p)
                    p = n - p;

                resultado = 1;
                for (i = 0; i < p; i++)
                    resultado = resultado * (n - i) / (i + 1);

                printf("\nC(%d,%d) = %d\n", n, p, resultado);
                break;

            case 5:
                printf("Encerrando o programa...\n");
                break;

            default:
                printf("Opcao invalida, digite novamente\n");
        }
    } while (opcao != 5);

    return 0;
}