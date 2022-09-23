#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* ponteiro para função responsável por comparar os valores maior ou menor */
int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
  // declarando tamanho n do vetor
  int n;
  // declarando vetor e valores
  float *x, value;
  
  // solicitando entrada do tamanho n do vetor para o usuário
  scanf("%d", &n);
  // alocação dinâmica do vetor
  x = malloc(n * sizeof(float));

  // entrada dos valores do vetor
  for (int i = 0; i < n; i++) {
    scanf("%f", &value);
    x[i] = value;
  }

  clock_t t;
    
  t = clock();
  // função qsort para ordenar o vetor
  qsort(x, n, sizeof(float), comparador);
  
  t = clock() - t;
  // for responável por imprimir o vetor
  for (int i = 0; i < n; i++) {
    printf("%f \n", x[i]);
  }
  
  free(x);
  printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
}