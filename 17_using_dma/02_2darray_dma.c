#include <stdio.h>
#include <stdlib.h>
/* �����޸𸮸� �̿��� 2���� �迭 �ٷ�� */
 
int main(void){
	int i, x, y;
	int **pptr = (int**)malloc(sizeof(int*)* 8); // int* 8���� ���� �迭������ �Ҵ� 
	for (i=0; i<8; i++){
		*(pptr + i) = (int*)malloc(sizeof(int)*6); // int 6���� ���� �迭������ �Ҵ� 
	} 
	
	for (y=0; y<8; y++){
		for(x=0; x<6; x++){
			*(*(pptr + y)+x) = 6*y+x;
			
		}
	}
	
	for (y=0; y<8; y++){
		for(x=0; x<6; x++){
			printf("%3d", *(*(pptr+y)+x));
		}	
		printf("\n");
	}
	
	for(y=0; y<8;y++){
		free(*(pptr+y));
	}
	free(*(pptr));
	
	return 0;
}
