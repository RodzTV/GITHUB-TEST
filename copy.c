#include <stdio.h>

int main() 
{
    int i = 1, j = 1;
    printf("\n\t\t\tMultiplication Table\n\n");
    while (i <= 10) 
    {
        printf(" : %3d ", i * j);
        j++;
        if (j > 10) 
        {
            j = 1;
            i++;
            printf("\n");
        }
    }
    
    return 0;
}