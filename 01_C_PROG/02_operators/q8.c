#include<stdio.h>
int main()
{
    int j=10,k=20;
    if(k>=j)
    {
        k=j;
        j=k;
        printf("%d%d\n",j,k);
    }
}