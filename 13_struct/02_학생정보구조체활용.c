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

	printf("�й��� �Է��ϼ���: ");
	scanf("%d", &s.number);
	printf("�̸��� �Է��ϼ���: ");
	scanf("%s", s.name); // str�� �迭�� ����� �����̱� ������ &�� ���� �ּҸ� �Է��� �ʿ䰡 ����
	printf("������ �Է��ϼ���: ");
	scanf("%lf", &s.grade); // double���� �Է¹��� �� lf���·� �Է¹޾ƾ� ��.
	 
	printf("stID: %d\n", s.number);
	printf("stName: %s\n", s.name);
	printf("stGrade: %.1f\n", s.grade);
	return 0; 
}
