#include <stdio.h>
#include <stdlib.h> 
/*
����ü : ��ü���� ���α׷��ֿ��� ���ϴ� Ŭ������ ��ü
�������� �ڷ����� ��� ���ο� �ڷ����� ���� �� �ִ� ��� 
*/

struct student{
	int number;
	char name[10];
	double grade;
};

int main(void){
	struct student s;
	s.number = 20150001;
	strcpy(s.name, "ȫ�浿");
	s.grade = 4.5;
	printf("stID: %d\n", s.number);
	printf("stName: %s\n", s.name);
	printf("stGrade: %.1f\n", s.grade);
	return 0; 
}
