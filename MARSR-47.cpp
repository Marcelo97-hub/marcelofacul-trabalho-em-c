/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-47 -     Tabuada de um numero                 */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    do {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}
