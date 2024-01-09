#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    int password[30]; // need to be have to checking password later on
    int iDPassword[30];
    double money, withdraw, deposit;
    char name[30];
    char bank;

    // Welcome message
    printf("Hello welcome UC banking\n");
    printf("what is your name\n");

    // Input user's name
    fgets(name, 30, stdin);
    name[strlen(name)-1] = '\0';

    // Display a personalized welcome message
    printf("welcome %s to the UC banking\n", name);

    // Prompt the user to set up a password
    printf("plz set up your password numner. %s\n", name);

    // Input and store the password and ID password
    fgets(iDPassword, 30, stdin);
    iDPassword[strlen(iDPassword)-1] = '\0';
    printf("what is your password\n %s\n", name);
    fgets(password, 30, stdin);
    password[strlen(password)-1] = '\0';
    
    // Password validation loop
    while (strcmp(password, iDPassword) != 0)
    {
        printf("invalid password\n GOODBYE!!!");
        return 0;
    }

    // Initialize the money variable to the initial balance
    money = 0.0;

    // Main banking operations loop
    while (1)
    {
        // Display menu options
        printf("welcome to %s what you wanna do?\n", name);
        printf("\n 1 to withdraw money \n");
        printf(" 2 to deposit \n");
        printf(" 3 to check balance \n");
        printf(" 4 to exit \n");

        // Input user's choice
        scanf(" %c", &bank);

        // Switch statement for different banking operations
        switch(bank)
        {
            case '1':
                // Withdrawal operation
                if (money >= 0)
                {
                    printf("how much will you withdraw\n");
                    scanf("%lf", &withdraw);
                    money = money - withdraw;
                    break;
                }
                else
                {
                    // Display an error message if the user has insufficient funds
                    printf("You dont have moeny plz deposit first\n");
                    break;
                }

            case '2':
                // Deposit operation
                printf("how much will you deposit?\n");
                scanf("%lf", &deposit);
                money = money + deposit;
                break;

            case '3':
                // Display the user's balance
                printf("Your balance is %.2lf$\n", money);
                break;

            case '4':
                // Exit the program with a farewell message
                printf("thank you %s see you next time!!\n", name);
                return 0;
        }
    }
    return 0;
}