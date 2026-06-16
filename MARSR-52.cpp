/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-52 -    soma ate o numero ser multiplo de 10  */
/***********************************************************************/
#include <stdio.h>

int main() {
    int numero, soma = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        soma += numero;

    } while (numero % 10 != 0);

    printf("Soma total = %d\n", soma);

    return 0;
}
