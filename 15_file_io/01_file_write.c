#include <stdio.h> 

/*
����������� ���� ������ �����͸� �����ϰ��ٽ� �ҷ��� �� ����.
���α׷� ���ݿ� ���Ǵ� �پ��� �����͸� ó���ϰ� �����Ͽ� ������ �� �ִٴ� ������ ����. 
*/


int main(void){
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	// w -> ���� ���(write), r -> �б� ���(read)
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