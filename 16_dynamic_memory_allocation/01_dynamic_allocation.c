/*
���� �޸� �Ҵ�: ���൵�� �������� �޸𸮸� �Ҵ� �޴� ��
�ʿ��Ѹ�ŭ�� �޸𸮸� �ý������κ��� �Ҵ�޾� ����ϰ�
����� ������ �ý��ۿ� �޸𸮸� �ݳ�.
�޸��� ȿ���� ��� ����. malloc() �迭�� ���̺귯�� �Լ��� ���. 
*/
#include <stdio.h> 
#include <stdlib.h>

int main(void){
	int *pi; // Pointer Integer
	pi = (int *)malloc(sizeof(int)); // malloc = �޸𸮸� �Ҵ�
	// (int*) �� �����ʿ� �ִ� ���� int*�� ����ȯ �Ѵٴ� �� 
	if(pi == NULL){
		printf("failed to dynamic memory allocation");
		exit(1);
	} 
	*pi = 100;
	printf("%d\n", *pi);
	/* �����޸𸮸� ����� ���� ������ �ش� �޸𸮸� ��ȯ */
	free(pi); // �Ҵ�Ǿ��� �޸𸮸� ����. 
	return 0;
}
