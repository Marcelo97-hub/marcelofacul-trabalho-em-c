/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-56 -        O menu do fastfood digital        */
/***********************************************************************/
#include <stdio.h>

int main() {
    int opcao;

    printf("=== MENU FAST-FOOD DIGITAL ===\n");
    printf("1 - Combo Hamburguuer + Batata + Refri - R$ 30,00\n");
    printf("2 - Combo Pizza Brotinho + Refri - R$ 25,00\n");
    printf("3 - Combo Salada + Suco Natural - R$ 22,00\n");
    printf("4 - Combo Balde de Frango + Molho - R$ 35,00\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Voce escolheu: Combo Hamburguuer + Batata + Refri - R$ 30,00\n");
            break;
        case 2:
            printf("Voce escolheu: Combo Pizza Brotinho + Refri - R$ 25,00\n");
            break;
        case 3:
            printf("Voce escolheu: Combo Salada + Suco Natural - R$ 22,00\n");
            break;
        case 4:
            printf("Voce escolheu: Combo Balde de Frango + Molho - R$ 35,00\n");
            break;
        default:
            printf("Opcao invalida! Escolha de 1 a 4.\n");
    }

    return 0;
}
