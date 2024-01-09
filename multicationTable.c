#include <stdio.h>

int main() 
{
    int i = 1, j = 1;

    printf("Multiplication Table\n");

    while(i <= 10) {
        while(j <= 10) {
            printf("%d * %d = %d\n", i, j, i * j);
            j++;
        }
        i++;
        j = 1;
    }

    return 0;
}