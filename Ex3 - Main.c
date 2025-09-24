#include <stdio.h>
#include "funcao.h"

int main()
{
    int vetor[] = {3, 2, 1, 5, 6, 4};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    int k = 2;
    
    printf("vetror inicial:");
    imprimirVetor(vetor, tamanho);
    printf("\n");

    printf("Vetor construido: ");
    construirHeap(vetor,tamanho);
    imprimirVetor(vetor, tamanho);
    printf("\n");
    
    int result = maiorElemento(vetor, tamanho, k);
    printf("O %d° maior valor é: %d\n", k,result);
    
}
