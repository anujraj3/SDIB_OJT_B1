#include <stdio.h>
#pragma pack(1)
struct data
{
    unsigned int a : 4;
    char ch : 1;
} D = {10, 'A'};
int main()
{
    printf("size %d\n", sizeof(D));
    printf("%d", &D);
}