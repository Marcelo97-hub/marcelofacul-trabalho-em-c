/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-34 -     Verificar se o numero e primo        */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i, primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num <= 1) {
        primo = 0;
    } else {
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

    if(primo) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}
