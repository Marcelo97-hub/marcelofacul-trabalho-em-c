/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-24 -     Pode votar                           */
/***********************************************************************/
#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Pode votar.\n");
    } else {
        printf("Nao pode votar.\n");
    }

    return 0;
}
