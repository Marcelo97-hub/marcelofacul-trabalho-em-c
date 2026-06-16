/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-39 -   Verificar se o numero e positivo       */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero positivo: ");
    scanf("%d", &num);

    while (num <= 0) {
        printf("Numero invalido!\n");
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
    }

    printf("Numero valido: %d\n", num);

    return 0;
}
