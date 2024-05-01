#include <stdio.h>
#include <conio.h>
main()
{
	int a, n;
	clrscr();
	printf("enter any number:");
	scanf("%d", &n);
	for (a = 1; a <= 10; a++)
	{
		printf("%d*%d=%d\n", n, a, n * a);
	}
	getch();
}