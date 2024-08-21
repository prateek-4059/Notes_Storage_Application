#include <stdio.h>

int main()
{
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 0:
        printf("Monday\n");
        break;

        case 1:
        printf("Tuesday\n");
        break;

        case 2:
        printf("Wednesday\n");
        break;

        case 3:
        printf("Thursday\n");
        break;

        case 4:
        printf("Friday\n");
        break;

        case 5:
        printf("Saturday\n");
        break;

        case 6:
        printf("Sunday\n");
        break;

        default:
        printf("Invalid number\n");
    }
    return 0;    
}