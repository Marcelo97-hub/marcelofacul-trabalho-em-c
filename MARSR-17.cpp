/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-17 - sensor do parque tematico                            */
/***********************************************************************/
#include <stdio.h>

int main() {
    int altura;

    printf("Digite a altura da crianca em centimetros: ");
    scanf("%d", &altura);

    if (altura >= 140) {
        printf("Luz verde: LIBERADO para entrar na montanha-russa.\n");
    } else {
        printf("Luz vermelha: BARRADO. Altura insuficiente.\n");
    }

    return 0;
}
