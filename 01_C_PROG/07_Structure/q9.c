#include <stdio.h>
struct arith
{
    int a, b;
    int (*fnptr)(int, int);
};
int addition(int x, int y)
{
    return x + y;
}
int substraction(int x, int y)
{
    return x - y;
}
int main()
{
    struct arith add, sub;
    printf("Enter the value :");
    scanf("%d%d", &add.a, &add.b);
    sub = add;
    add.fnptr = addition;
    sub.fnptr = substraction;
    printf("Addition is :%d\n", add.fnptr(add.a, add.b));
    printf("Substraction is :%d", sub.fnptr(add.a, add.b));
}