#include <stdio.h>
#include <stdlib.h>

void vehicle(char *vehicleType, int *entryHour, int *entryMinute, int *exitHour, int *exitMinute);

int main() 
{
    char vehicleType[2];
    int entryHour, entryMinute, exitHour, exitMinute;
    double rate, totalFare;

    // Call the vehicle function to get input values
    vehicle(vehicleType, &entryHour, &entryMinute, &exitHour, &exitMinute);

    // Calculate total time in hours
    double totalTime = (exitHour + exitMinute / 60.0) - (entryHour + entryMinute / 60.0);

    // Determine rate based on vehicle type and total time
    if (vehicleType[0] == 'C') 
    {
        if (totalTime <= 3) 
        {
            rate = 0.0;
        } else {
            rate = 1.50;
        }
    } 
    else if (vehicleType[0] == 'T') 
    {
        if (totalTime <= 2) {
            rate = 1.00;
        } else {
            rate = 2.30;
        }
    } 
    else if (vehicleType[0] == 'B') 
    {
        if (totalTime <= 1) {
            rate = 2.00;
        } else {
            rate = 3.70;
        }
    } 
    else 
    {
        printf("Invalid vehicle type\n");
        return 1; // Exit with an error code
    }

    // Calculate total fare
    totalFare = rate * totalTime;

    // Output
    printf("Total parking fare: $%.2f\n", totalFare);
    return 0; // Exit successfully
}

void vehicle(char *vehicleType, int *entryHour, int *entryMinute, int *exitHour, int *exitMinute) {
    char entryTime[3], exitTime[3];

    // Input vehicle typex
    printf("Enter vehicle type (C for car, T for truck, B for bus): ");
    scanf(" %c", vehicleType);

    printf("Enter entry time (hour minute): ");
    scanf("%s", entryTime);
    *entryHour = atoi(entryTime);
    *entryMinute = atoi(entryTime + 3);

    printf("Enter exit time (hour minute): ");
    scanf("%s", exitTime);
    *exitHour = atoi(exitTime);
    *exitMinute = atoi(exitTime + 3);
}