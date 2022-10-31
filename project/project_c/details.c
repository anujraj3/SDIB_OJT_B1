#include<stdio.h>
#include<string.h>
#include"vaccine.h"
// void heading();
void details()
{
	int i,n;
	char a[20], b[6], c[40], d[20], e[20], f[3];

	// Calling Heading() Function
	heading();
	printf(
		"\t\t\t\tEnter Candidate Number (Max 4 People): ");
	scanf("%d", &n);

	// Taking Candidate Details
	for (i = 1; i <= n; i++) {
		// For Clear Screen
		system("cls");

		// Calling Heading() Function
		heading();
		printf("\t\t\t\tEnter The %dth Candidate Name: ",
			i);
		fflush(stdin);
		gets(a);
		printf("\t\t\t\tEnter The %dth Candidate Gender: ",
			i);
		fflush(stdin);
		gets(b);
		printf("\t\t\t\tEnter The %dth Candidate Id-Type: ",
			i);
		fflush(stdin);
		gets(c);
		printf(
			"\t\t\t\tEnter The %dth Candidate Id-Number: ",
			i);
		fflush(stdin);
		gets(d);
		printf("\t\t\t\tEnter The %dth Candidate Mobile "
			"Number: ",
			i);
		fflush(stdin);
		gets(e);
		printf("\t\t\t\tEnter The %dth Candidate "
			"Co-Morbidity Status (Yes or No): ",
			i);
		fflush(stdin);
		gets(f);

		// Calling Function addnode()
		addnode(a, b, c, d, e, f);
	}
}