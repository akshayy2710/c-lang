#include <stdio.h>
#include <conio.h>
main()
{
	int a, n, sum = 1;
	clrscr();
	printf("enter any number:");
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		printf("%d\t", a);
		sum *= a;
	}
	printf("\nthe sum of all number from 1 to %d is :%d\n", n, sum);
	getch();
}