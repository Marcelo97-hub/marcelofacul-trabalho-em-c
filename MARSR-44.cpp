/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-44 -     contar digitos de um numero          */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, contador = 0;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    if (num == 0) {
        contador = 1;
    } else {
        while (num > 0) {
            contador++;
            num /= 10;
        }
    }

    printf("Quantidade de digitos: %d\n", contador);

    return 0;
}
