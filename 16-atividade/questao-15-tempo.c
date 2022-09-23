#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comparador(const void *a, const void *b) { return (*(int *)a - *(int *)b); }

void ordenar(void *base, size_t num, size_t size,
             int (*comparador)(const void *, const void *)) {
  void *x, *y;

  for (int i = 0; i < num; i++) {
    for (int j = 0; j < num; j++) {
      x = base + (size * j);
      y = base + (size * i);

      if (comparador(x, y) > 0) {
        float *px = (float *)x;
        float *py = (float *)y;

        float aux = *px;
        *px = *py;
        *py = aux;
      }
    }
  }
}

int main() {
  int n;
  float *x, value;

  scanf("%d", &n);
  x = malloc(n * sizeof(float));

  for (int i = 0; i < n; i++) {
    scanf("%f", &value);
    x[i] = value;
  }
  
  clock_t t;
    
  t = clock();
  ordenar(x, n, sizeof(float), comparador);
  t = clock() - t;
  for (int i = 0; i < n; i++) {
    printf("%f \n", x[i]);
  }
  free(x);
  printf("\nTempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
}