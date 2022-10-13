#include<stdio.h>
int main()
{
    int temp;
    printf("Enter the Temperature :");
    scanf("%d",&temp);
    if(temp>35)
    {
        printf("switch on the fan");
    }
    else{
        printf("Temperature under control");
    }
}