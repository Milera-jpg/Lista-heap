#include <stdio.h>
#include "funcao.h"

int main()
{
    int vetor[10];
    int elementos[] = {15, 3, 17, 10, 84, 19, 6, 22, 9};
    int tamanho = 0, numElementos = 9; 
    
    printf("Vetor inicial: ");
    for(int i = 0; i < numElementos; i++) {
        inserirElemento(vetor, &tamanho, elementos[i]);
        printf("%d", elementos[i]);
        if(i < numElementos-1) printf(" - ");
    }
    printf("\n");
    
    printf("Vetor construído: ");
    imprimirVetor(vetor, tamanho);
    printf("\n");
    
    for(int i = 1; i <= 3; i++) {
        int removido = removerMaior(vetor, &tamanho);
        printf("Removido: %d\n", removido);
    }
    
    printf("Vetor com as remoções: ");
    imprimirVetor(vetor, tamanho);
    printf("\n");
}
