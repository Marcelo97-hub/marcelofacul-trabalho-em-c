/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-53 -    confirmar saida com s                 */
/***********************************************************************/
#include <stdio.h>

int main() {
    char resposta;

    do {
        printf("Executando operacao...\n");

        printf("Deseja sair? (s/n): ");
        scanf(" %c", &resposta);

    } while (resposta != 's' && resposta != 'S');

    printf("Programa encerrado.\n");

    return 0;
}
