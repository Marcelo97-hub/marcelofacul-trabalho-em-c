/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-21 - numero positivo ou negativo              */
/***********************************************************************/
#include <stdio.h>

int main() {
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if (num > 0) {
        printf("Positivo\n");
    } else if (num < 0) {
        printf("Negativo\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}
