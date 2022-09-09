#include <stdio.h>
#include <stdlib.h>
/* 동적메모리를 이용해 구조체 다루기 */
 
typedef struct{
	int number;
	char title[100];
}Book; 
 
 void showBook(Book *p, int n){
 	int i;
 	for(i=0; i<n; i++){
 		printf("number %d: %s\n", (p+i)->number, (p+i)->title);
	 }
 } 
 
int main(void){
	Book *p;
	p = (Book*)malloc(sizeof(Book)*2);
	if(p == NULL){
		printf("failed to dynamic memory allocation");
		exit(1);
	}
	
	p->number = 1; // 구조체 포인터는 -> 사용 (구조체는 p.number)
	strcpy(p->title, "C Programming");
	
	(p+1)->number = 2;
	strcpy((p+1)->title, "Data Structure");
	
	showBook(p,2);
	printf("%d %d", p, (p+1)); // 두 값의 차이가 struct 구조체의 byte 
	free(p);
	
	return 0;
}
