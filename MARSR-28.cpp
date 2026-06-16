/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-28 - soma dos 100 primeiros numeros naturais  */
/***********************************************************************/
#include <stdio.h>

int main() {
    int i, soma = 0;

    for(i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}
