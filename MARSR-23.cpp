/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-23 -   Maior de dois numeros                  */
/***********************************************************************/
#include <stdio.h>

int main() {
    float num1, num2;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    if (num1 > num2) {
        printf("O maior numero e %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e %.2f\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}
