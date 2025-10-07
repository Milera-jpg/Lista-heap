#include <stdio.h>
#include "heap.h"

int main()
{
    int vetor1[] = {90, 15, 10, 7, 12, 2};   
    int vetor2[] = {9, 15, 10, 7, 12, 11};
 
    printf("Vetor 1: ");
    imprimirVetor(vetor1, 6);
    printf(" -> %d",ehHeapMax(vetor1, 6));
    printf("\n");
    
    printf("Vetor 2: ");
    imprimirVetor(vetor2, 6);
    printf(" -> %d",ehHeapMax(vetor2, 6));
}
