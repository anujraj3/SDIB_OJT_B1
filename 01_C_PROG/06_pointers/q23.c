#include<stdio.h>
#include<windows.h>
void main()
{
    int *p,i;
    p= (int *)malloc(5*sizeof(int));
    for(i=0;i<10;i++)
    {
        printf("p is :%d\n",p[i]); 
        p[i]=p[i]+1;
        printf("after incre p is :%d\n",p[i]);
    }

}