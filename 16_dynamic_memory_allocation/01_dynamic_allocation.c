/*
동적 메모리 할당: 실행도중 동적으로 메모리를 할당 받는 것
필요한만큼의 메모리를 시스템으로부터 할당받아 사용하고
사용이 끝나면 시스템에 메모리를 반납.
메모리의 효율적 사용 가능. malloc() 계열의 라이브러리 함수를 사용. 
*/
#include <stdio.h> 
#include <stdlib.h>

int main(void){
	int *pi; // Pointer Integer
	pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당
	// (int*) 은 오른쪽에 있는 것을 int*로 형변환 한다는 뜻 
	if(pi == NULL){
		printf("failed to dynamic memory allocation");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
	/* 동적메모리를 사용한 이후 무조건 해당 메모리를 반환 */
	free(pi); // 할당되었던 메모리를 해제. 
	return 0;
}
