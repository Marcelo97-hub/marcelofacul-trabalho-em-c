/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-14 - Tipo de triangulo                        */
/***********************************************************************/
#include <stdio.h>
int main(){float a,b,c; scanf("%f%f%f",&a,&b,&c);
if(a==b&&b==c) printf("Equilatero");
else if(a==b||a==c||b==c) printf("Isosceles");
else printf("Escaleno"); return 0;}
