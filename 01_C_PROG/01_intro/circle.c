#include<stdio.h>
#include<math.h>
int main()
{
    float radius, area_circle;
 
   printf("Enter the radius of circle : ");
   scanf("%f", &radius);
 
   area_circle =3.14* radius * radius;
   printf("Area of circle : %f", area_circle);
 
   return 0;
}  