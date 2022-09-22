#include<stdio.h>

int main() {

    printf(" %ld bytes\n", sizeof(short int));
    printf(" %ld bytes\n", sizeof(unsigned short int));
    printf(" %ld bytes\n", sizeof(unsigned int));

    printf(" %ld bytes\n", sizeof(int));

    printf(" %ld bytes\n", sizeof(long int));

    printf(" %ld bytes\n", sizeof(unsigned long int));
    printf(" %ld bytes\n", sizeof(long long int));

    printf(" %ld bytes\n", sizeof(unsigned long long int));
    printf(" %ld byte\n", sizeof(signed char));
    printf(" %ld byte\n", sizeof(unsigned char));

    printf(" %ld byte\n", sizeof(char));

    printf(" %ld bytes\n", sizeof(float));

    printf(" %ld bytes\n", sizeof(double));
    printf(" %ld bytes\n", sizeof(long double));
}