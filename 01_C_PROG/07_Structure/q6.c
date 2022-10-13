#include<stdio.h>

struct employee
{
    char name[20];
    char designation[20];
    int salary;
}s[10];

int main()
{
    int i;
    printf("Enter details of 10 employees:\n");
    for(i=0;i<=10;i++)
    {
        printf("Enter name :");
        scanf("%s", s[i].name);
        printf("Enter designation :");
        scanf("%s", s[i].designation);
        printf("Enter salary :");
        scanf("%d", &s[i].salary);
    }
    printf("\nThe details of emplyoees are :\n");
    for(i=0;i<=10;i++)
    {
        printf("%s\t%s\t%d\n", s[i].name, s[i].designation, s[i].salary);
    }
    return 0;
}