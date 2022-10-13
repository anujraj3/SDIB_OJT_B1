#include <stdio.h>

int main()
{
    float principle, time, rate,amount;
    printf("Enter principle (amount): ");
    scanf("%f", &principle);

    printf("Enter time: ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);
    amount = (principle * time * rate) / 100;
    printf("Simple Interest = %f", amount);

    return 0;
}