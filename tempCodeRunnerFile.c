#include <stdio.h>

int main() 
{
    int i = 0, j = 1;
    
    while (i <= 10) 
    {
        printf(" : %3d ", i + j);
        j++;
        if (j == 8) 
        {   
            printf("\n");
        }
        if (j == 15)
        {
            printf("\n");
        }
         if (j == 22)
        {
            printf("\n");
        }
         if (j == 29)
        {
            printf("\n");
        }
         if (j == 32 )
        {
            printf("\n");
            return 0;
        }
    }

    return 0;
}