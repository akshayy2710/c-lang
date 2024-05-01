#include<stdio.h>
#include<conio.h>
main()
{
    int n;
    clrscr();

    printf("Enter the any value :");
    scanf("%d",&n);

    int i=1;
    while(i<=n)
{
    printf("%d\n",i);
    i++;
}
    getch();
}