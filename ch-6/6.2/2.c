#include <stdio.h>
#include <conio.h>
main()
{
	int a = 10;
	clrscr();
	do
	{
		printf("%d\n", a);
		a--;
	} while (a >= 1);
	getch();
}