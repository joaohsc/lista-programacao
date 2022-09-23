#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"


int main(){

	clock_t t;
	
	long int n = 100;
	int *v1;
  int *v2;
	
	t = clock();
	
  v1 = malloc(n*sizeof(int));
  
  free(v1);
	
	t -= clock();
  printf("\nTempo - malloc/free): %lf",((double)t)/((CLOCKS_PER_SEC/1000)));

	t = clock();

	p = GC_MALLOC(sizeof(int)*n);
	t -= clock();
  printf("\nTempo - libgc): %lf",((double)t)/((CLOCKS_PER_SEC/1000)));
	
}