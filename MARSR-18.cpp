/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-18 - Login simples                            */
/***********************************************************************/
#include <stdio.h>
#include <string.h>

int main() {
    char usuario[20];
    char senha[20];

    printf("Digite o usuario: ");
    scanf("%s", usuario);

    printf("Digite a senha: ");
    scanf("%s", senha);

    if (strcmp(usuario, "aluno") == 0 && strcmp(senha, "1234") == 0) {
        printf("Acesso permitido!\n");
    } else {
        printf("Acesso negado!\n");
    }

    return 0;
}
