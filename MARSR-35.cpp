/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-35 -     NUmeros de Fibonacci                 */
/***********************************************************************/
#include <stdio.h>

int main() {
    int n, i;
    long long a = 0, b = 1, c;

    printf("Digite a quantidade de termos: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("%lld ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
