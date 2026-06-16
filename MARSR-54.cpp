/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-54 -    validar numero entre 1 e 5            */
/***********************************************************************/ 
#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um numero entre 1 e 5: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 5) {
            printf("Valor invalido! Tente novamente.\n");
        }

    } while (numero < 1 || numero > 5);

    printf("Numero valido: %d\n", numero);

    return 0;
}
