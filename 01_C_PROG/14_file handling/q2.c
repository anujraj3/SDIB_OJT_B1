#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
    int fp;
    fp=open("hello.txt",O_WRONLY|O_CREAT);
    if(fp==-1)
    {
        printf("File not found");
    }
    else
    {
        printf("file created successfully");
    }
    printf("\n%d",fp);
}