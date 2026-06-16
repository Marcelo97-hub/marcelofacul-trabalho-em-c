/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-38 -      senha correta                       */
/***********************************************************************/
#include <stdio.h>

int main() {
    int senha;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    while (senha != 1234) {
        printf("Senha incorreta!\n");
        printf("Digite a senha novamente: ");
        scanf("%d", &senha);
    }

    printf("Acesso permitido.\n");

    return 0;
}
