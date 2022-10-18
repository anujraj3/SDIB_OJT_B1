#include<stdio.h>
struct
{
    int i;
    float ft;
}deci;
int main()
{
    deci.i=4;
    deci.ft=7.96623;
    printf("%d\n%.2f\n",deci.i,deci.ft);
}
