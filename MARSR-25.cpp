/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-25 -      Notas de aprovacao                  */
/***********************************************************************/
#include <stdio.h>

int main() {
    float media;

    printf("Digite a media final: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperacao\n");
    } else {
        printf("Reprovado\n");
    }

    return 0;
}
