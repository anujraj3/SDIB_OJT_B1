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
int sub(int a, int b)
{
    return a-b;
}
int mul(int a, int b )
{
    return a*b;
}
int div(float a ,float b)
{
    return a/b;
}
int main()
{
    a.a=5;
    a.b=6;
    printf("Addition is:%d\n",add(a.a,a.b));
    printf("Substraction is:%d\n",sub(a.a,a.b));
    printf("multiplication is:%d\n",mul(a.a,a.b));
    printf("Division is:%2.f\n",div(a.a,a.b));


}