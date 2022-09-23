#include <stdio.h>
#include <stdlib.h>

void func_soma(int *a, int *b, int *c, int n){
  // o "for" soma os valores de A e B e adicionam em C
  for(int i = 0; i < n; i++){
    c[i] = a[i] + b[i];
  }
}

int main(void) {
  int n;
  int *a, *b, *c;
  
  scanf("%d", &n);
  
  // alocando os vetores
  a = malloc(n*sizeof(int)); 
  b = malloc(n*sizeof(int));
  c = malloc(n*sizeof(int));

  // entrada dos vetores a b
  printf("Vetor 'a': \n");
  for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
  }
  printf("Vetor 'b': \n");
  for(int i = 0; i < n; i++){
    scanf("%d", &b[i]);
  }
  
  func_soma(a, b, c, n);

  // imprimir vetor soma
  printf("Vetor soma: \n");
  for(int i = 0; i < n; i++){
    printf("%d ", c[i]);
  }
  
  free(a); 
  free(b);
  free(c);
}