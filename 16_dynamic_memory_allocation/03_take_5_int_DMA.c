#include <stdio.h>
#include <stdlib.h>

int main(void){
	int *pi, i;
	pi = (int*)malloc(sizeof(int)*5);
	if(pi == NULL){
		printf("failed to dynamic allocation");
		exit(1);
	}
	for(i=0; i<5;i++){
		pi[i] = 100*(i+1);
	}
	for(i = 0; i<5; i++){
		printf("%d\n", *(pi+i));
	}
	free(pi);
	
	return 0;
}
