#include <stdio.h> 
#include <stdlib.h>
/*
�����޸𸮸� �Ҵ�޾� ���ĺ� ��� 
*/
int main(void){
	char *pc;
	int i = 0;
	pc = (char *)malloc(sizeof(char) * 100); // 100���� ���ڰ� �� �� �ִ� ���� �Ҵ� 
	if(pc == NULL){
		printf("failed to dynamic memory allocation");
		exit(1);
	}
	/* pc�� ����Ű�� �����͸� 1�� ������Ű�� ���ĺ� �ҹ��� ���� */
	for (i = 0; i<26; i++){
		*(pc+i) = 'a'+i; // �ƽ�Ű�ڵ� ���� 1�� ���ϸ� a->b->c 
	}
	*(pc+i) = 0; // �ƽ�Ű�ڵ� 0�� NULL�� �ǹ�, ���ڿ��� ���� 
	printf("%s", pc);
	free(pc);
	return 0;
}
