#include<stdio.h>
int main()
{
    int i;
    int miss;
    int a[] = {1,2,3,4,5,6,7,9,10};
    int n = 10;
    int total=0,sum=0;
 
    for(i=0 ; i<n; i++){
     total = (n*(n+1))/2;
     sum = sum + a[i];
     miss=total-sum;
    }
    
 
    printf("Missing number is %d",miss);
    return 0;
}