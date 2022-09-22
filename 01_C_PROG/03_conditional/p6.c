#include<stdio.h>

int main()
{
    float m1,m2,m3,average,percent;
    float total;

    printf("Enter marks obtained in m1 :");
    scanf("%f", &m1);
    printf("Enter marks obtained in m2 :");
    scanf("%f", &m2);
    printf("Enter marks obtained in m3 :");
    scanf("%f", &m3);

    total=m1+m2+m3;
    average = (m1+m2+m3) / 3;
    printf("Average : %0.2f\n", average);
    percent=(total/300)*100;
    printf("percentage : %0.2f\n",percent);

    if (average>=75)
    {
        printf("Distingtion");
    }
    else if (average >= 60)
    {
        printf("First class");
    }
    else if (average >= 50)
    {
        printf("Second class");
    }
    else if (average >= 35)
    {
        printf("Third class");
    }
    else
    {
        printf("fail");
    }

    return 0;
}