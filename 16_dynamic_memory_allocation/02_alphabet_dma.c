#include <stdio.h> 
#include <stdlib.h>
/*
동적메모리를 할당받아 알파벳 출력 
*/
int main(void){
	char *pc;
	int i = 0;
	pc = (char *)malloc(sizeof(char) * 100); // 100개의 문자가 들어갈 수 있는 공간 할당 
	if(pc == NULL){
		printf("failed to dynamic memory allocation");
		exit(1);
	}
	/* pc가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자 삽입 */
	for (i = 0; i<26; i++){
		*(pc+i) = 'a'+i; // 아스키코드 값에 1씩 더하며 a->b->c 
	}
	*(pc+i) = 0; // 아스키코드 0은 NULL을 의미, 문자열의 종료 
	printf("%s", pc);
	free(pc);
	return 0;
}
