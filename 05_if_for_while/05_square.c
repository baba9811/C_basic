#include <stdio.h>
#define N 10

int main(void)
{
    int i, j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("??");
        }
        printf("\n");
    }
    return 0;
}