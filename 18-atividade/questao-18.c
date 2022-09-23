#include <stdio.h>
#include <stdlib.h>

void multiplicar_matriz(int **m1, int **m2, int **m3, int lm1, int cm1, int cm2){
  // for responsável por multiplicar as matrizes
  for(int i = 0; i < lm1; i++){
    for(int j = 0; j < cm2; j++){
      int sum = 0;
      for(int k = 0; k < cm1; k++){
        sum += m1[i][k] * m2[k][j];
      }
      m3[i][j] = sum;
    }
  }
}

int main()
{
  int **m1, **m2, **m3, lm1, cm1, cm2; 
  printf("Linha matriz 1: \n");
  scanf("%d", &lm1);
  printf("Coluna matriz 1: \n");
  scanf("%d", &cm1);
  printf("Coluna matriz 2: \n");
  scanf("%d", &cm2);

  m1 = malloc (lm1 * sizeof(int*));
  m2 = malloc (cm1 * sizeof(int*));
  m3 = malloc (lm1 * sizeof(int*));

  m1[0] = malloc(cm1*lm1*sizeof(int));
  m2[0] = malloc(cm2*cm1*sizeof(int));
  m3[0] = malloc(cm2*lm1*sizeof(int));

  for(int i = 1; i < lm1; i++){
    m1[i] = m1[i-1] + cm1;
  }
  for(int i = 1; i < cm1; i++){
    m2[i] = m2[i-1] + cm2;
  }
  for(int i = 1; i < lm1; i++){
    m3[i] = m3[i-1] + cm2;
  }
  printf("Entrada matriz 1: \n");
  for (int i = 0; i<lm1; i++){
      for (int j = 0; j<cm1; j++){
          scanf("%d", &m1[i][j]);
      }
  }
  printf("Entrada matriz 2: \n");
  for (int i = 0; i<cm1; i++){
       for (int j = 0; j<cm2; j++){
           scanf("%d", &m2[i][j]);
      }
  }
  
  multiplicar_matriz(m1, m2, m3, lm1, cm1, cm2);
  
  printf("Matriz 1:\n");
  
  //matriz 1
  for(int i = 0; i < lm1; i++){
    for(int j = 0; j < cm1; j++){
      printf("%d ", m1[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");
  printf("Matriz 2:\n");
  //matriz 2
  for(int i = 0; i < cm1; i++){
    for(int j = 0; j < cm2; j++){
      printf("%d ", m2[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");
  
  //matriz 3
  printf("Matriz 3(produto A * B):\n");
  
  for(int i = 0; i < lm1; i++){
    for(int j = 0; j < cm2; j++){
      printf("%d ", m3[i][j]);
    }
    printf("\n");
  }
  printf("----------\n");
  
  free(m1[0]); 
  free(m2[0]);
  free(m3[0]);
  free(m1); 
  free(m2);
  free(m3);
}

