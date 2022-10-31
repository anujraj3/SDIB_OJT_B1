#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *_ptr=(char*)malloc(100*sizeof(char));
    _ptr="phytec";
    printf("%p\n",_ptr);
    printf("%c\n",*++_ptr);
    printf("%p\n",_ptr++);
    if(_ptr==NULL)
    {
        free(_ptr);
    printf("%p\n",_ptr);
    printf("%c\n",++_ptr);
    }
    else {
        printf("%p\n",_ptr);
        printf("%c\n",*++_ptr);
        free(_ptr);
    }
}