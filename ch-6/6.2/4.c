#include <stdio.h>
#include <conio.h>
main()
{
	int n, first = 0, second = 1, next, i;
	clrscr();
	printf("Enter any number: ");
	scanf("%d", &n);
	printf("Fibonacci series up to %d numbers:\n", n);
	printf("%d %d ", first, second);
	do
	{
		next = first + second;
		printf("%d", next);
		first = second;
		second = next;
		i++;
	} while (i <= n);
	getch();
}