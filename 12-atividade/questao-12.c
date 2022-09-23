/* Assim como ponteiros para variáveis, podemos declarar
funções como ponteiros, servindo para definir em tempo real
quando uma função deve ser executada sem precisar excrever
a função explicita no código*/

#include <stdio.h>

int somar_inteiro(int a, int b) {
  return a + b;
}

int main(){
  
  int (*func_ponteiro)(int , int );
  int a=3, b=2;
  
  func_ponteiro = somar_inteiro;     
  printf("%d ",func_ponteiro(a, b));  
}