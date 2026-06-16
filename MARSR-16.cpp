/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-16 -    múltiplo de 3e/ou5                    */
/***********************************************************************/
#include <stdio.h>
int main(){int n; scanf("%d",&n);
if(n%3==0&&n%5==0) printf("Ganha os dois");
else if(n%3==0) printf("Refrigerante");
else if(n%5==0) printf("Sobremesa");
else printf("Sem premio"); return 0;}
