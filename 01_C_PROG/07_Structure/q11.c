#include<stdio.h>
struct arith
{
    int a;
    int b;
}a;
int add(int a, int b)
{
    return a+b;
}
int main()
{
    a.a=5;
    a.b=6;
    printf("Addition is:%d\n",add(a.a,a.b));
}