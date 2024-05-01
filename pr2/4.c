#include<stdio.h>
#include<conio.h>
main()
{
	char n;
	clrscr();
	printf("s.sunday\n");
	printf("m.monday\n");
	printf("t.tuesday\n");
	printf("w.wednes\n");
	printf("h.thursday\n");
	printf("f.friday\n");
	printf("d.saturday\n");
	printf("enter any number:");
	scanf("%c",&n);

	switch(n)
	{
		case 's':printf("sunday");
			scanf("%c",n);
		break;
		case 'm':printf("monday");
		break;
		case 't':printf("tuesday");
		break;
		case 'w':printf("wednesday");
		break;
		case 'h':printf("thursday");
		break;
		case 'f':printf("friday");
		break;
		case 'a':printf("saturday");
		break;
	}
	getch();
}