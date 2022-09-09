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

	printf("학번를 입력하세요: ");
	scanf("%d", &s.number);
	printf("이름을 입력하세요: ");
	scanf("%s", s.name); // str은 배열과 비슷한 형태이기 떄문에 &를 통해 주소를 입력할 필요가 없음
	printf("학점을 입력하세요: ");
	scanf("%lf", &s.grade); // double형을 입력받을 떄 lf형태로 입력받아야 함.
	 
	printf("stID: %d\n", s.number);
	printf("stName: %s\n", s.name);
	printf("stGrade: %.1f\n", s.grade);
	return 0; 
}
