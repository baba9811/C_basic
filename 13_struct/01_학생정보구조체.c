#include <stdio.h>
#include <stdlib.h> 
/*
구조체 : 객체지향 프로그래밍에서 말하는 클래스의 모체
여러개의 자료형을 묶어서 새로운 자료형을 만들 수 있는 방법 
*/

struct student{
	int number;
	char name[10];
	double grade;
};

int main(void){
	struct student s;
	s.number = 20150001;
	strcpy(s.name, "홍길동");
	s.grade = 4.5;
	printf("stID: %d\n", s.number);
	printf("stName: %s\n", s.name);
	printf("stGrade: %.1f\n", s.grade);
	return 0; 
}
