#include <stdio.h>
#include <math.h>

// Function declaration for calculating roots
void calculate_roots(void);

// Main function
int main(void)  
{
    // Call the function to calculate roots
    calculate_roots();
    return 0;
}

// Function definition for calculating roots
void calculate_roots(void) 
{
    // Declare variables for coefficients and roots
    double a, b, c, discriminant, root1, root2;

    // Prompt the user to enter coefficient a
    printf("Enter coefficient a: ");
    // Read the value of a from the user
    scanf("%lf", &a);

    // Prompt the user to enter coefficient b
    printf("Enter coefficient b: ");
    // Read the value of b from the user
    scanf("%lf", &b);

    // Prompt the user to enter coefficient c
    printf("Enter coefficient c: ");
    // Read the value of c from the user
    scanf("%lf", &c);

    // Calculate the discriminant using the quadratic formula
    discriminant = pow(b, 2) - (4 * a * c);

    // Check if the equation is not quadratic (a and b are both 0)
    if (a == 0 && b == 0) 
    {
        printf("No solution.\n");
    } 
    // Check if the equation is linear (a is 0)
    else if (a == 0) 
    {
        printf("The root is: %.2lf\n", -c / b);
    } 
    // Check if the discriminant is negative (no real roots)
    else if (discriminant < 0) 
    {
        printf("No real roots.\n");
    } 
    // Calculate and print the roots for a quadratic equation
    else 
    {
        root1 = (-b - sqrt(discriminant)) / (2 * a);
        root2 = (-b + sqrt(discriminant)) / (2 * a);
        printf("The roots are: %.2lf and %.2lf\n", root1, root2);
    }
}
