#include <stdio.h>
#include <string.h>
struct employee
{
    char name[50];
    int id;
    int salary;
    char designation[50];
} e;
int main()
{
    strcpy(e.name, "Anuj");
    e.id = 123456;
    strcpy(e.designation, "Intern");
    e.salary=25000;
    printf("Name: %s\n", e.name);
    printf("Id: %d\n", e.id);
    printf("Salary: %d\n", e.salary);
    printf("Designation: %s\n", e.designation);
    printf("Size: %d",sizeof(e));
}