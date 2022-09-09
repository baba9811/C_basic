#include <stdio.h>

int main(void){
	FILE *fp = NULL;
	int c;
	
	fp = fopen("input.txt", "r");
	
	if (fp == NULL){
		printf("failed to open file\n");
	}	
	else {
		printf("succeed to open file\n");
	}
	
	while((c=fgetc(fp)) != EOF){
		putchar(c);
	}
	fclose(fp);
	return 0;
}
