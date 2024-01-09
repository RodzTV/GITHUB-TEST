#include <stdio.h>
// Function to determine the quadrant based on the angle and display the quadrant diagram
void determineQuadrant(double angle);
int main(void) 
{
    // User input
    double angle;
    // Read the angle from the user
    printf("Enter the angle in degrees: ");
    scanf("%lf", &angle);

    // Checking the validation of the input angle should be between 0 to 360
    if (angle >= 0 && angle <= 360) 
    {
        // Determine the quadrant and display the quadrant diagram
        determineQuadrant(angle);
    } 
        else 
    {
        printf("Invalid angle. Angle must be between 0 and 360 degrees.\n");
    }

    return 0;
}
void determineQuadrant(double angle) 
{
    if (angle >= 0 && angle < 90) 
    {
        printf("Quadrant 1  %.2lf  \n", angle);
    } 
    else if (angle >= 90 && angle < 180) 
    {
        printf(" Quadrant 2  %.2lf  \n", angle);
    } 
    else if (angle >= 180 && angle < 270) 
    {    
        printf("Quadrant 3 %.2lf \n ", angle);
    } 
    else if (angle >= 270 && angle < 360) 
    {
     printf("Quadrant 4 %.2lf \n", angle);
    }
}
