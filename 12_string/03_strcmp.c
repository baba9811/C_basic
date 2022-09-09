#include <stdio.h>
#include <string.h>

int main(void) {
    char inputOne[5] = "b";
    char inputTwo[5] = "ba";
    printf("문자열 비교: %d\n", strcmp(inputOne, inputTwo));
    /*
    strcmp에 들어가는 두 arg를 비교
    왼쪽의 arg가 사전적으로 앞에있으면 -1
    두 arg가 사전적으로 동일하면 0
    왼쪽의 arg가 사전적으로 뒤에 있으면 1 return
    */
    return 0;
}