#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 12

main()
{
    int i, j;
    int gugudan[9][9];
    for (i = 0; i < 10; i++)
    {
        printf("\n[ %ddan ]\n\n", i+1);
        for (j = 0; j < 10; j++)
        {
            gugudan[i][j] = (i+1) * (j+1);
            printf("%d X %d = %d\n", i+1, j+1, gugudan[i][j]);
        }
    }
    return 0;
}