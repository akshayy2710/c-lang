#include <stdio.h>

int main()
{
    char name[100];
    printf("Enter any name: ");
    scanf("%s", name);
    int i, j, count;
    for (i = 0; name[i] != '\0'; i++)
    {
        count = 1;

        if (name[i] == ' ')
            continue;

        for (j = i + 1; name[j] != '\0'; j++)
        {
            if (name[i] == name[j])
            {
                count++;
                name[j] = ' ';
            }
        }

        if (name[i] != ' ')
            printf("%c => %d\n", name[i], count);
    }
}