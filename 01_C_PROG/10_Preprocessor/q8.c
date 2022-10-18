#include<stdio.h>

#define BIG(x,y) (x>y)?x:y //macro tekes argument
int main(){
    int a,b,c;
    printf("Enter any three integer :");
    scanf("%d%d%d",&a,&b,&c);
    printf("Biggest of three numbers :%d\n",BIG(BIG(a,b),c));
}