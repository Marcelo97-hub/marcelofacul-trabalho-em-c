/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-40 -     Tabuada com while                    */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
