#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
int Max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int a = 10;
    int b = 20;
    int max = 0;
    max = Max(a, b);
    printf("max= %d\n", max);
}



         


