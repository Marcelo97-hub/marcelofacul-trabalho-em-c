/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-55 -     ler os numeros ate mostrar o maior   */
/***********************************************************************/
#include <stdio.h>

int main() {
    int numero;
    int maior = 0;
    int primeiro = 1;

    do {
        printf("Digite um numero (negativo para sair): ");
        scanf("%d", &numero);

        if (numero >= 0) {
            if (primeiro) {
                maior = numero;
                primeiro = 0;
            } else if (numero > maior) {
                maior = numero;
            }
        }

    } while (numero >= 0);

    if (primeiro) {
        printf("Nenhum numero positivo foi informado.\n");
    } else {
        printf("O maior numero informado foi: %d\n", maior);
    }

    return 0;
}
