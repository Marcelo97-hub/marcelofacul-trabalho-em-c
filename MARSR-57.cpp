/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-57 -    A central do brinquedo eletronico     */
/***********************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char cor[20];

    printf("Digite a cor que acendeu: ");
    scanf("%s", cor);

    if (strcmp(cor, "Verde") == 0 || strcmp(cor, "verde") == 0) {
        printf("Vamos brincar la fora!\n");
    } else if (strcmp(cor, "Amarelo") == 0 || strcmp(cor, "amarelo") == 0) {
        printf("Estou ficando com soninho...\n");
    } else if (strcmp(cor, "Vermelho") == 0 || strcmp(cor, "vermelho") == 0) {
        printf("Estou com fome, hora do lanche!\n");
    } else {
        printf("Cor desconhecida\n");
    }

    return 0;
}
