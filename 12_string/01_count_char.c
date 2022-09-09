#include <stdio.h>
/* 
문자열은 char 자료 타입의 배열.
포인터와 같다고 할 수 있음.
char 자료형은 글자하나당 영어는 1바이트. 한글 2바이트.
array[10]일 때 영어는 10글자, 한글은 5글자 저장가능.
배열은 내부적으로 포인터와 흡사한 구조를 가지고 있음.
*/


int main(void)
{
    char input[1001];
    gets(input);
    int count = 0;
    while (input[count] != NULL) {
        count++;
    }
    printf("입력한 문자열의 길이는 %d입니다.\n", count);
    printf("입력한 문자열은 : %s", input);
    return 0;
}