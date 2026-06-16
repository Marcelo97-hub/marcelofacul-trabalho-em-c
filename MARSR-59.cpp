/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-59 -       o assistente de direcao            */
/***********************************************************************/
#include <stdio.h>

int main() {
    char direcao;

    printf("Digite uma letra (N, S, L, O): ");
    scanf(" %c", &direcao);

    switch (direcao) {
        case 'N':
            printf("Seguir para o Norte.\n");
            break;

        case 'S':
            printf("Seguir para o Sul.\n");
            break;

        case 'L':
            printf("Virar a Leste (Direita).\n");
            break;

        case 'O':
            printf("Virar a Oeste (Esquerda).\n");
            break;

        default:
            printf("Comando invalido! Pare o robo.\n");
    }

    return 0;
}
