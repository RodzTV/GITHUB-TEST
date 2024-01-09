
#include<stdio.h>



int main()
{   
    int num1,i;


    printf("input first number\n");
    scanf("%d", &num1);

    for (i = 1; i <= 10; i++)
    printf("%d X %d = %d \n", num1, i, i*num1);
    



    return 0;
}