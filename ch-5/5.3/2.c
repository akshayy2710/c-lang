#include <stdio.h>
#include <conio.h>
main()
{
    int n;
    clrscr();
    printf("1.english\n");
    printf("2.hindi\n");
    printf("3.gujarati\n");

    printf("enter any number:");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("english\n");
        printf("1.press for internet recharge\n");
        printf("2.press for top up recharge\n");
        printf("3.press for special recharge\n");

        printf("enter any number:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("you successfully done internet recharge");
            break;
        case 2:
            printf("you successfully done top up recharge");
            break;
        case 3:
            printf("you successfully done special recharge");
            break;
        default:
            printf("sorry you press wrong number");
            scanf("%d", &n);
        }
        break;

    case 2:
        printf("hindi\n");
        printf("1.internet recharge ke liye dabaiye:\n");
        printf("2.top up recharge ke liye dabaiye:\n");
        printf("3.special recharge ke liye dabaiye:\n");

        printf("enter any number");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("aapane safaltapurvak internet recharge karavaliya he");
            break;
        case 2:
            printf("aapane safaltapurvak top up recharge karavaliya he");
            break;
        case 3:
            printf("aapane safaltapurvak special recharge karavaliya he");
            break;
        default:
            printf("sorry aapane galat number dabaya he");
            scanf("%d", &n);
        }
        break;

    case 3:
        printf("gujarati\n");
        printf("1.internet recharge mate dabavo:\n");
        printf("2.top up recharge mate dabavo:\n");
        printf("3.special recharge mate dabavo:\n");

        printf("enter any number");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("tame safaltapurvak internet recharge karavyu che");
            break;
        case 2:
            printf("tame safaltapurvak top up recharge karavyu che");
            break;
        case 3:
            printf("tame safaltapurvak special recharge karavyu che");
            break;
        default:
            printf("sorry tame khoto number dabavyo che");
            scanf("%d", &n);
        }
        break;
    default:
        printf("sorry you press wrong number");
        scanf("%d", &n);
    }
    getch();
}