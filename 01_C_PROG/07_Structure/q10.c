#include<stdio.h>

struct student
{
    char *name;
    int rollno;
}s[3];

int main()
{
    s[0].rollno=1;
    s[0].name="Anuj";
    s[1].rollno=2;
    s[1].name="tushar";
    s[2].rollno=3;
    s[2].name="subu";
    display(s);
}
int display(struct student s[])
{
    for(int i=0;i<3;i++)
    {
        printf("%d %s\n",s[i].rollno,s[i].name);
    }
}