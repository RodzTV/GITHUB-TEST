#include <stdio.h>

int main() 
{
   int n, i;
   double num, sum = 0.0, average;

   printf("Enter an integer: ");
   scanf("%d", &n);

   for(i = 1; i <= n; i++) 
   {
       printf("Enter a floating-point number #%d: ", i);
       scanf("%lf", &num);

       if(num > 0.0) {
           sum += num;
           average = sum / i;
           average = sum * -1;
           printf("The average of the positive numbers is: %.2lf\n", average);
       }
   }

   return 0;
}