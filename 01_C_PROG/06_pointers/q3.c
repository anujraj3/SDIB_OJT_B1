#include <stdio.h>

int main()
{
    int x = 8;
    int *p = &x;
    printf("%d\n", p);
    p = &x;
    printf("%d\n", *p);
    p++;
    printf("%d\n", p);
    printf("%d\n", ++*p);
}