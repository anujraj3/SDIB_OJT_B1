#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *numbers=(int*)calloc(4,sizeof(int));
    numbers[0]=9;
    free(numbers);
    printf("\nStored integers are ");
    printf("\n Numbers[%d] = %d,0,numbers[0]");
}