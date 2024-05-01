#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("enter a value of a:");
	scanf("%d",&a);
	printf("enter a value of b:");
	scanf("%d",&b);
	printf("enter a value of c:");
	scanf("%d",&c);


	(a<b)?
		(a<c)
		?printf("a is minimum",a)
		:printf("c is minimum",c)

	:(b<c)
		?printf("b is minimum",b)
		:printf("c is minimum",c);


	getch();
}