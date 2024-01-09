#include <stdio.h>

int main() {
    int num1 = 5;
    int i = 1;

    while (i <= num1) 
    {
        int x = 1;
        while (x <= i) 
        {
            printf("%d", x);
            x++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
