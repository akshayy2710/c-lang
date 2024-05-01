#include<stdio.h>
#include<conio.h>
main()
{
	int a=2,n;
	clrscr();
	printf("enter any number\t:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",a);
		a+=2;
	}while(a<=n);
	getch();
}