#include <stdio.h>
#include "heap.h"

int main()
{
    int vetor[] = {4, 10, 3, 5, 1};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor inicial: ");
    imprimirVetor(vetor, tamanho);
    
    maxHeapify(vetor, tamanho,0);
    printf("\nVetor com heap max: ");
    imprimirVetor(vetor, tamanho);
    
    printf("Vetor com heap sort: ");
    heapSort(vetor, tamanho);
    imprimirVetor(vetor, tamanho);
}
