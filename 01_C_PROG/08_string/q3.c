#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] ="Anuj";
    char str2[] ="raj";
    printf("%s\n",strcat(str1, str2));
    printf("%d\n",strlen(str1));
    printf("%s\n",strcpy(str1, str2));
    printf("%d",strcmp(str1, str2));

}
