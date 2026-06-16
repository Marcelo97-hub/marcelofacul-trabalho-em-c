/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-30 -    fatorial de um numero                 */
/***********************************************************************/
#include <stdio.h>

int main() {
    int num, i;
    long long fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        fatorial *= i;
    }

    printf("Fatorial de %d = %lld\n", num, fatorial);

    return 0;
}
