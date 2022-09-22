#include<stdio.h>
int main()
{
 int a=10,b=2;
 printf("%d\n%d\n",a,b);
 if(a>b)
 {
    int temp=a;
    a=b;
    b=temp;
 }
 printf("\n%d\n%d",a,b);
}