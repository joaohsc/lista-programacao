#include <stdio.h>

int main(){
  /* o resultado dos endereços é diferente do que foi 
  previsto, pois na aplicação real os tipos possuem bytes 
  diferentes do que especificado na questão anterior
    
  char = 1 bytes
  int = 4 bytes
  float = 4 bytes
  double = 8 bytes

  */
  
  char xc[4] = {"2468"};
  int xi[4] = {2,4,6,8};
  float xf[4] = {2,4,6,8};
  double xd[4] = {2,4,6,8};
  
  printf(" Char:\n");
  for(int i=0;i<4;i++){
    printf("x + %d = %x \n",i,(xc+i));
  }
  printf(" ------\n");
  printf("Int:\n");
  for(int i=0;i<4;i++){
    printf("x + %d = %x \n",i,(xi+i));
  }
  
  printf(" ------\n");
  printf("Float:\n");
  for(int i=0;i<4;i++){
    printf("x + %d = %x \n",i,(xf+i));
  }
  
  printf(" ------\n");
  printf("Double:\n");
  for(int i=0;i<4;i++){
   printf("x + %d = %x \n",i+1 ,(xd+i));
  }
}