#include <stdio.h>

void troca(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void maxHeapify(int arranjo[], int tamanho, int i){
    int maior = i;
    int esq = 2*i+1;
    int dir = 2*i+2;
    
    if(esq < tamanho && arranjo[esq] > arranjo[maior]){
        maior = esq;
    }
    
    if(dir < tamanho && arranjo[dir] > arranjo[maior]) {
        maior = dir;
    }
    
    if(maior != i){
        troca(&arranjo[i], &arranjo[maior]);
        maxHeapify(arranjo, tamanho, maior);
    }
}

void construirHeap(int* vetor, int tamanho){
    for(int i = (tamanho-1)/2; i>=0; i--){
        maxHeapify(vetor,tamanho,i);
    }
}

void heapSort(int* vetor, int tamanho){
    construirHeap(vetor,tamanho);
    for(int i = tamanho-1; i>0; i--){
        troca(&vetor[i], &vetor[0]);
        maxHeapify(vetor,i,0);
    }
}

void imprimirVetor(int arranjo[], int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("%d", arranjo[i]);
        if(i<tamanho-1) printf(" - ");
    }
    printf("\n");
}
