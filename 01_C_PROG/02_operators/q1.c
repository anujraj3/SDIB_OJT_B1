#include<stdio.h>
int main() {
    int a = 4;
    int b = 3;
    printf("%d\n%d\n", a, b);
    a = a ^ b;
    b= a ^ b;
    a = a ^ b;
    printf("%d\n%d", a, b);

    return 0;
}