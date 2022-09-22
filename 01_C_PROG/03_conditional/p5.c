#include<stdio.h>
int main()
{
    int cha,a,b;
    printf("1.Addition\n");
    printf("2.Sub\n");
    printf("3.Mul\n");
    printf("4.Div\n");

    printf("Enter your choice :");
    scanf("%d",&cha);
    printf("Enter the value :");
    scanf("%d",&a);
    printf("Enter the value :");
    scanf("%d",&b);

     switch(cha)
   {
     case 1:
              cha = a+b;
              printf("\nThe addition of 2 numbers is : %d",a+b);
              break;
     case 2:
             cha = a-b;
             printf("\nThe differnce of 2 numbers is : %d",a-b);
             break;
     case 3:
             cha = a*b;
             printf("\nThe product of 2 numbers is : %d",a*b);
             break;
     case 4:
              cha = a/b;
              printf("\nThe division of 2 numbers is : %d",a/b);
              break;
    default:
              printf("\nYou Entered Wrong Choice\n");
              break;
   }
}