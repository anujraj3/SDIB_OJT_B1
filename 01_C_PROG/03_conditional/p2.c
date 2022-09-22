#include<stdio.h>
int main()
{
    int value;
    printf("Enter the value :");
    scanf("%d",&value);
    switch(value)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        
        case 3:
        printf("Tuesday");
        break;
        
        case 4:
        printf("Wednesday");
        case 7:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        default:
        printf("Not valid");

    }
}