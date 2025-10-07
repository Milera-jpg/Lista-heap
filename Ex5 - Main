#include <stdio.h>
#include "heap.h"

int main()
{
    int vetor[] = {15, 30, 10, 5, 20, 25};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor inicial: ");
    imprimirVetor(vetor, tamanho);
    
    printf("Vetor construido: ");
    construirHeap(vetor,tamanho);
    imprimirVetor(vetor, tamanho);
    
    printf("Vetor ordenado: ");
    ordenarMinHeap(vetor,tamanho);
    imprimirVetor(vetor,tamanho);
}
