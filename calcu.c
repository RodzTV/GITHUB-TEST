#include<stdio.h>
#include<math.h>

int main(void)
{   
    double firstnum;
    char operator;
    double secondnum;
    double result;

    printf("plz input the value\n");
    scanf("%lf", &firstnum);
    printf("int put the operator\n");
    scanf("%s", &operator);
    printf("plz input the value\n");
    scanf("%lf", &secondnum);

switch(operator)
{
        case '+':
    result = firstnum + secondnum;
        printf("the result is %.2lf", result);
        break;
        case '-':
    result = firstnum - secondnum;
        printf("the result is %.2lf", result);
        break;
        case '*':
    result = firstnum * secondnum;
        printf("the result is %.2lf", result);
        break;
        case '/':
    result = firstnum / secondnum;
        printf("the result is %.2lf", result);
        break;
        case '%':
    result = fmod(firstnum, secondnum);
        printf("the result is %.2lf", result);
        break;
        case '^':
    result = pow(firstnum, secondnum);
        printf("the result is %.2lf", result);
        break;
        case 'r':
    result = round(firstnum + secondnum);
        printf("the result is %.2lf", result);
        break;
        case 'l':
    result = log(firstnum + log(secondnum));
        printf("the result is %.2lf", result);
        break;
        case 's':
    result = sin(firstnum + secondnum);
        printf("the result is %.2lf", result);
        break;
}
    

    return 0;
}