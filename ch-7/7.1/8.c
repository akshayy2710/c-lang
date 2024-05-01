#include <stdio.h>
#include <conio.h>
main()
{
	int i, j, d = 1;
	clrscr();
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d\t", d++);
		}
		printf("\n");
	}
	getch();
}
