/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-27 -   Tabuada de um numero                   */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
