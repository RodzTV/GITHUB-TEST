#include<stdio.h>

int main(void)
{
    int i;
    i = 10;

    while (i <= 100)
    {
        printf("%d\t", i);
        i = i + 10;
    }
    return 0;
}