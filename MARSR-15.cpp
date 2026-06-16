/***********************************************************************/
/*     aluno:MARCELO AUGUSTO REBELO SANTOS DA ROCHA - RA: 0028152      */
/*       programa: MARSR-15 - Quantas caixas cabem dentro do caminhão  */
/***********************************************************************/
#include <stdio.h>

int main() {
    float alturaCaminhao, larguraCaminhao, comprimentoCaminhao;
    float alturaCaixa, larguraCaixa, comprimentoCaixa;

    int qtdAltura, qtdLargura, qtdComprimento;
    int totalCaixas;

    printf("Altura do caminhao (cm): ");
    scanf("%f", &alturaCaminhao);

    printf("Largura do caminhao (cm): ");
    scanf("%f", &larguraCaminhao);

    printf("Comprimento do caminhao (cm): ");
    scanf("%f", &comprimentoCaminhao);

    printf("Altura da caixa (cm): ");
    scanf("%f", &alturaCaixa);

    printf("Largura da caixa (cm): ");
    scanf("%f", &larguraCaixa);

    printf("Comprimento da caixa (cm): ");
    scanf("%f", &comprimentoCaixa);

    qtdAltura = (int)(alturaCaminhao / alturaCaixa);
    qtdLargura = (int)(larguraCaminhao / larguraCaixa);
    qtdComprimento = (int)(comprimentoCaminhao / comprimentoCaixa);

    totalCaixas = qtdAltura * qtdLargura * qtdComprimento;

    printf("\nCaixas na altura: %d", qtdAltura);
    printf("\nCaixas na largura: %d", qtdLargura);
    printf("\nCaixas no comprimento: %d", qtdComprimento);
    printf("\nTotal de caixas que cabem no caminhao: %d\n", totalCaixas);

    return 0;
}
