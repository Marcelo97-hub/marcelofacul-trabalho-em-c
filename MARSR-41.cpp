/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-41 -     numero primo com while               */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i = 2, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num <= 1) {
        primo = 0;
    }

    while (i < num && primo == 1) {
        if (num % i == 0) {
            primo = 0;
        }
        i++;
    }

    if (primo) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}
