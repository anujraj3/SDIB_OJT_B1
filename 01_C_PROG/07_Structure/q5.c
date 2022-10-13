#include<stdio.h>
struct arith{
    int a,b,total;
   
};
struct arith add(struct arith sum){
    sum.total=sum.a+sum.b;
    printf("%d",sum.total);
}

int main(){
    struct arith sum;
    sum.a=14;
    sum.b=5;
    add(sum);
}