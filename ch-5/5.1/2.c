#include<stdio.h>
#include<conio.h>
main()
{

    char ch;
    clrscr();
    printf("Enter any character:");
    scanf("%c",&ch);

    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
{
    printf("This number is ovel");
}
    else
{
    printf("This number is consol");
}
    getch();
}