/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-45 -     menu ate escolher sair               */
/***********************************************************************/
#include <stdio.h>

int main() {
    int opcao = 0;

    while (opcao != 3) {
        printf("\n=== MENU ===\n");
        printf("1 - Opcao 1\n");
        printf("2 - Opcao 2\n");
        printf("3 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Voce escolheu a opcao 1.\n");
        }
        else if (opcao == 2) {
            printf("Voce escolheu a opcao 2.\n");
        }
        else if (opcao == 3) {
            printf("Encerrando programa...\n");
        }
        else {
            printf("Opcao invalida!\n");
        }
    }

    return 0;
}
