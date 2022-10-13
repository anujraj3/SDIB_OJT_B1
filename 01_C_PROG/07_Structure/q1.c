#include <stdio.h>
#include <string.h>
struct student
{
  char Name[50];
  int Id;
  float height;
} stu;
int main()
{
  strcpy(stu.Name, "Anuj");
  stu.Id = 123456;
  stu.height = 167.64;
  printf("Name: %s\n", stu.Name);
  printf("Id: %d\n", stu.Id);
  printf("Height in cm: %.2f", stu.height);
}