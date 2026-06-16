/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-49 -     pedir senha ate acertar              */
/***********************************************************************/
#include <stdio.h>

int main() {
    int senha;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha != 1111) {
            printf("Senha incorreta!\n");
        }

    } while (senha != 1111);

    printf("Acesso liberado!\n");

    return 0;
}
