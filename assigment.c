#include<stdio.h>

int main(void)
{
    int i;
    i = 1;

    while (i <= 10)
    {
        printf("%d\t", i);
        i = i + 2;
    }
    return 0;
}