#include<stdio.h>

int main()
{
    FILE *fp1, *fp2;
    int i;
    
    fp1 = fopen("even_number.txt","w");
    fp2 = fopen("odd_number.txt","w");
    for (i = 50; i <= 70; i++)
    {
        (i%2==0)
            ?fprintf(fp1,"%d, ",i)
            :fprintf(fp2,"%d, ",i);
    }
    
    return 0;
}