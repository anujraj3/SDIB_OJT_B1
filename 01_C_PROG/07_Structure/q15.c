#include<stdio.h>
int main()
{
    struct c{
        double z;
        short int y;
         int x;
    };
    printf("Size of struct:%d\n",sizeof(struct c));
}