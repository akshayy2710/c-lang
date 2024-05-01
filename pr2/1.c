#include<stdio.h>
#include<conio.h>
main()
{
	char a;
	clrscr();
	printf("enter any value:");
	scanf("%c",&a);

	if ((a>='A'&& a<='Z') || (a>='a'&& a <='z'))
	{
		printf("%c the alphabet\n",a);
	}
	else if (a>='0'&& a <='9')
	{
		printf("%c the digit\n",a);
	}
	else
	{
		printf("%c the special character");
	}
	getch();
}