#include <stdio.h>
int main(){
    int arr[6] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i=0; i<6/2; i++){
        temp=arr[i];
        arr[i]=arr[6-i-1];
        arr[6-i-1]=temp;
    }
    for(int i=0; i<6; i++){
        printf("%d\n", arr[i]);
    }
}