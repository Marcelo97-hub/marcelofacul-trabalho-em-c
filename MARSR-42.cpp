/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-42 -  Quantidade de números ímpares digitados */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, contador = 0, i = 1;

    while (i <= 10) {
        printf("Digite o %dº numero: ", i);
        scanf("%d", &num);

        if (num % 2 != 0) {
            contador++;
        }

        i++;
    }

    printf("Quantidade de numeros impares: %d\n", contador);

    return 0;
}
