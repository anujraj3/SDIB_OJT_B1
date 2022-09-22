
#include<stdio.h>

int main()
{
    float Math, C, Physics,ENVS, average;

    printf("Enter marks obtained in Math :");
    scanf("%f", &Math);
    printf("Enter marks obtained in C :");
    scanf("%f", &C);
    printf("Enter marks obtained in Physics :");
    scanf("%f", &Physics);
    printf("Enter marks obtained in ENVS :");
    scanf("%f", &ENVS);

    average = (Math + C + Physics + ENVS) / 4;
    printf("Average : %0.2f\n", average);

    if (average >= 90)
    {
        printf("Grade O");
    }
    else if (average >= 80)
    {
        printf("Grade A");
    }
    else if (average >= 70)
    {
        printf("Grade E");
    }
    else if (average >= 60)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
