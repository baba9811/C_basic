#include <stdio.h>

int main(void)
{
    int x = 0;
    printf("현재의 x는 %d입니다.\n", x);
    x++ ;
    printf("현재의 x는 %d입니다.\n", x);
    printf("현재의 x는 %d입니다.\n", x--); // x를 출력한 이후에 x--가 적용됨.
    printf("현재의 x는 %d입니다.\n", x); // 윗줄의 코드에서 x--가 적용되어 다시 0이 출력됨.
    printf("현재의 x는 %d입니다.\n", --x); // x가 출력되기 이전 --x가 적용되어 -1 이 출력됨.
    
    return 0;
}