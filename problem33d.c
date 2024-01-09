#include <stdio.h>

int main() 
{
    int i;
    int sum = 0;

    for (i = 15; i <= 45; i++) 
    {
        if (i % 2 != 0) 
        {
            sum += i;
        }
    }
    printf("the sum of the odd numbers between 15 and 45 inclusive is : %d\n", sum);
    return 0;
}