#include <stdio.h>
#include <stdlib.h>
int main()
{
    char name[20], ch;
    FILE *fp;
    printf("Enter the file name\n");
    scanf("%[^\n]", &name);
    fp = fopen(name, "w+");
    printf("Value of the fp is: %d\n", fp);
    if (fp == NULL)
    {
        printf("ERROR: Fail to Open %s File\n", name);
        exit(1);
    }
    printf("\n file created \n");
    printf("\n Enter data into file & press \"ctrl+c\" to end\n");
    while ((ch = getchar()) != EOF)
        putc(ch,fp);
        fseek(fp,10,SEEK_SET);
        printf("\n\n Data in file \n");
        while((ch=getc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
}