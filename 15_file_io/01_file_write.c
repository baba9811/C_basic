#include <stdio.h> 

/*
파일입출력을 통해 현재의 데이터를 저장하고다시 불러올 수 있음.
프로그램 전반에 사용되는 다양한 데이터를 처리하고 저장하여 보관할 수 있다는 점에서 유용. 
*/


int main(void){
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	// w -> 쓰기 모드(write), r -> 읽기 모드(read)
	if (fp == NULL){
		printf("failed to open file.\n");
		
	}
	else{
		printf("succeed to open file.\n");
	}
	fputc("H", fp);
	fputc("E", fp);
	fputc("L", fp);
	fputc("L", fp);
	fputc("O", fp);
	fclose(fp);
	return 0; 
}
