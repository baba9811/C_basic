#include <stdio.h>
#include <string.h>

int main(void) {
    char inputOne[5] = "b";
    char inputTwo[5] = "ba";
    printf("���ڿ� ��: %d\n", strcmp(inputOne, inputTwo));
    /*
    strcmp�� ���� �� arg�� ��
    ������ arg�� ���������� �տ������� -1
    �� arg�� ���������� �����ϸ� 0
    ������ arg�� ���������� �ڿ� ������ 1 return
    */
    return 0;
}