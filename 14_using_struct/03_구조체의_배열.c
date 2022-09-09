#include <stdio.h>
#define SIZE 5

typedef struct{
	int number;
	char name[10];
	double grade; // GPA
}student;

int main(Void){
	student list[SIZE];
	int i;
	
	for (i = 0; i<SIZE; i++){
		printf("number: ");
		scanf("%d", &list[i].number);
		printf("name:");
		scanf("%s", &list[i].name);
		printf("grade: ");
		scanf("%lf", &list[i].grade);
	}
	for (i=0; i<SIZE; i++){
		printf("number: %d\nname: %s\ngrade: %.2lf\n", list[i].number, list[i].name, list[i].grade);
	}
}
