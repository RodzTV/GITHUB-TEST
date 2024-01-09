#include <stdio.h>


// Function prototypes ni sir with also the poiner para void na sya that mean pointer will do the math not me ^_^
void readScores(double *score1, double *score2, double *score3);
char calculateGrade(double score1, double score2, double score3);
void printResults(double score1, double score2, double score3, char grade);

int main() 
{
    double score1, score2, score3;
    char grade;

    // Calling function para mag read ang mga scores 
    readScores(&score1, &score2, &score3);

    // Calling function para calculate sa grade
    grade = calculateGrade(score1, score2, score3);

    // Calling function para printing mga results
    printResults(score1, score2, score3, grade);

    return 0;
}

// Function to read scores
void readScores(double *score1, double *score2, double *score3) 
{
    printf("Enter the first score: ");
    scanf("%lf", score1);// wala ni sya address kay pointer man & 

    printf("Enter the second score: ");
    scanf("%lf", score2);// wala ni sya address kay pointer man & 

    printf("Enter the third score: ");
    scanf("%lf", score3);// wala ni sya address kay pointer man & 
}

// Function to calculate grade 
char calculateGrade(double score1, double score2, double score3) 
{
    double average = (score1 + score2 + score3) / 3;

    if (average >= 90) 
    {
        return 'A';
    } 
        else if (average >= 70) 
    {
        return 'B';
    } 
        else if (average >= 50) 
    {
        // Calculate the average of the second and third scores para 
        double secondThirdAverage = (score2 + score3) / 2;

        if (secondThirdAverage > 70) 
        {
            return 'C';
        } 
            else 
        {
            return 'D';
        }
    } 
        else 
    {
        return 'F';
    }
}

// Function to print results
void printResults(double score1, double score2, double score3, char grade) {
    printf("\nResults:\n"); // printing the final result
    printf("Score 1: %.2lf\n", score1);
    printf("Score 2: %.2lf\n", score2);
    printf("Score 3: %.2lf\n", score3);
    printf("Grade: %c\n", grade);
}