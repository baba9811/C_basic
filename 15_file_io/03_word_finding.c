#include <stdio.h>
#include <string.h>


int main(void){
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("input file name: ");
	scanf("%s", fname);
	
	printf("seeking word: ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r"))==NULL){
		fprintf(stderr, "can\'t open file %s", fname);
		return 0;
	}
	while(fgets(buffer, 256, fp)){
		line ++;
		if(strstr(buffer, word)){
			printf("line %d: word \'%s\' has been found\n", line, word);
			return 0;
		}
	}
	return 0;
}
