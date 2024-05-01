#include<stdio.h>
#include<conio.h>
main()
{
    int a;
   clrscr();

     printf("Enter any number:");
     scanf("%d",&a);

     if(a>0)
     {
      printf("This number is positive");
     }
     else if(a<0)
     {
      printf("This number is nagative");
     }
     else
     {
     printf("This number is Neutral");
     }
   getch();
}