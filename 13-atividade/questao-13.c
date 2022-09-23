#include <stdio.h>
#include <stdlib.h>

void ordenar_vetor(float *x, int n) {
  float aux = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (x[i] < x[j]) {
        aux = x[i];
        x[i] = x[j];
        x[j] = aux;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    printf("%f \n", x[i]);
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

  ordenar_vetor(x, n);

  free(x);
}