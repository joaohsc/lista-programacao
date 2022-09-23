#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gc.h"


int main(){
	
	long int n = 10000000;
	int *v;

	for (long int i = 0; i<=n; i++){
		v = GC_MALLOC(sizeof(int));
	}
}