#include <stdio.h>
#pragma pack(1)
struct student
{
    char Name;
    int age;
    int adhar;
    float height;

} __attribute__((packed));
int main()
{
    struct student stu;
    printf("Size: %d", sizeof(stu));
}
