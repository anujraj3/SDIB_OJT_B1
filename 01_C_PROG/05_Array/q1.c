#include<stdio.h>
int main()
{
    char a[10],i;
    for(i=0;i<10;i++)
    {
        scanf("%d\n",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}