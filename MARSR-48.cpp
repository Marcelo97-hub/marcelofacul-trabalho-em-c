/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-48 -     menu com opcao pra sair   b          */
/***********************************************************************/
#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\n1 - Mensagem\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a mensagem!\n");
        }

    } while (opcao != 2);

    printf("Programa encerrado.\n");

    return 0;
}
