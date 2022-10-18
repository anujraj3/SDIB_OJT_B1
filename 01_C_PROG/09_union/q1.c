#include <stdio.h>
union student
{
  char Name[17];
  int Id;
  int age;
} stu;
int main()
{
    printf("size %d",sizeof(stu));
}