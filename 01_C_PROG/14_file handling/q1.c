#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("file created successfully");
    }
}