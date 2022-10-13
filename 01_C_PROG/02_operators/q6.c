#include<stdio.h>
int main()
{
    int x=3,y=2,z;
    y=x=10;
    z=x<10;
    printf("x=%dy=%dz=%d\n",x,y,z);
}