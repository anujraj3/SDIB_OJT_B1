#include<stdio.h>
#include<stdlib.h>
int main()
{
     int *numbers=(int*)malloc(4*sizeof(int));
     int i;
     numbers[0]=0;
     numbers[1]=1;
     numbers[2]=2;
     numbers[3]=3;
     printf("\n Stored integers are\n");
     for(i=0;i<4;i++)
     {
        printf("numbers[%d]=%d \n",i,numbers[i]);
     }

}