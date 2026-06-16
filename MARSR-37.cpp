/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-37 -   Soma de numeros ate digitar zero       */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, soma = 0;

    printf("Digite um numero (0 para sair): ");
    scanf("%d", &num);

    while (num != 0) {
        soma += num;

        printf("Digite um numero (0 para sair): ");
        scanf("%d", &num);
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
