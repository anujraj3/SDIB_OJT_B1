#include<stdio.h>
int main()
{
    int a=10,b=20;
    a=a*b;
    printf("%d\n",a);    
    b=a/b;
    printf("%d\n",b);  
    a=a/b;
    printf("%d\n%d",a,b);
}