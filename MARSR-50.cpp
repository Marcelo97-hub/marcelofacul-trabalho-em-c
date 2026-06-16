/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-50 -     numero positivo obrigatorio          */
/***********************************************************************/
#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero positivo: ");
        scanf("%d", &numero);

    } while (numero <= 0);

    printf("Numero valido: %d\n", numero);

    return 0;
}
