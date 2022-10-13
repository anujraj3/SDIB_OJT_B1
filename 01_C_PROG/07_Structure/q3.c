#include <stdio.h>
#include <string.h>
struct student
{
    char Name[50];
    int Id;
    float height;
};
struct marks
{
    int maths;
    int physics;
    int chemistry;
    float avg;
    struct student s;
};
int main()
{
    struct marks m;
    strcpy(m.s.Name, "Anuj");
    m.s.Id = 190610304;
    m.s.height = 167.64;
    m.maths = 74;
    m.physics = 82;
    m.chemistry = 96;
    m.avg = (m.maths + m.physics + m.chemistry) / 3;
    printf("Size: %d\n",sizeof(m));
    printf("Name: %s\n", m.s.Name);
    printf("Id: %d\n", m.s.Id);
    printf("Height in cm: %.2f\n", m.s.height);
    printf("Math: %d\n",m.maths);
    printf("Physics: %d\n",m.physics);
    printf("Chemistry: %d\n",m.chemistry);
    printf("Avg: %.2f\n",m.avg);
}