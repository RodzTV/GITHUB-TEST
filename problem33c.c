#include <stdio.h>

int main() 
{
    int i;
    int sum = 0;

    for (i = 1; i <= 15; i++) 
    {
        sum += i;
    }

    printf("the sum of the numbers between 1 and 15 inclusive is : %d\n", sum);

    return 0;
}