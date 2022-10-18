#include<stdio.h>
int main()
{
    int arr1[50], arr2[50], size1, size2, i,temp, merge[100];
    printf("Enter Array 1 Size: ");
    scanf("%d", &size1);
    printf("Enter Array 1 Elements: ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
        merge[i] = arr1[i];
    }
   temp = i;
    printf("\nEnter Array 2 Size: ");
    scanf("%d", &size2);
    printf("Enter Array 2 Elements: ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
        merge[temp] = arr2[i];
       temp++;
    }
    printf("\nThe new array:\n");
    for(i=0; i<temp; i++)
        printf("%d ", merge[i]);
    return 0;
}