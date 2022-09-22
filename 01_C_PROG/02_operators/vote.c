#include<stdio.h>

int main()
{
	int a ;
	
	
	printf("Enter the age of the person: ");
	scanf("%d",&a);

	if (a==18)
	{
		printf("Eigibale for voter id card");
	}
	else if(a>18)
	{
		printf("eligibale for voting\n");
	}	
    else
    {
        printf("not eligible for voting\n");
    }

	return 0;
}