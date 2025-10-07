#include <stdio.h>
#include <time.h> 
#include "heap.h"

int main() {
  srand(time(NULL));
  MinHeap* ranking = criar_minheap();

  for (int i = 1; i <= 20; i++) {
      Post* p = (Post*)malloc(sizeof(Post));
      p->post_id = i;
       p->likes = rand() % 100; 
      inserir_post(ranking, p);
  }

  imprimir_ranking(ranking);
  liberar_heap(ranking);
}
