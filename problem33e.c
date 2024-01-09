#include <stdio.h>

int main() {
    int i;
    int sum = 0;

    for (i = 1; i <= 50; i++) 
    {
        sum += 3 * i - 2;
    }

    printf("Sum of the first 50 numbers in the series: %d\n", sum);

    return 0;
}