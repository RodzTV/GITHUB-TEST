#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    char bank;
    double money = 0.0, deposit, withdraw;
    char name[20];
    printf("welcome the Dhuse banking\n");
    printf("please enter your name: \n");
    fgets(name, 20, stdin);
    name[strlen(name)-1] = '\0';
    printf("welcome %s what you wanna do with your bank?", name);

while(1)
{   
    printf("\n 1 to deposit money \n");
    printf(" 2 to withdraw money \n");
    printf(" 3 to check balance \n");
    printf(" 4 to exit \n");
    scanf("%s", &bank);


    switch (bank)
        {
        case '1':
            printf("how much will you deposit \n");
            scanf("%lf", &deposit);
            printf("you have entered %.2lf ", deposit);
            money = money + deposit;
            break;
        case '2':
            printf("how much will you withdraw\n ");
            scanf("%lf", &withdraw);
            printf("you have withdraw %.2lf ", withdraw);
            money = money - withdraw;
            break;
        case '3':
            printf("the balance is %.2lf", money);
            break;
        case '4':
            printf("the program will exit now.");
            return 0;
    
        default:
            printf("invalid request try again");
            break;
        }   

    }
    
    
    return 0;
}