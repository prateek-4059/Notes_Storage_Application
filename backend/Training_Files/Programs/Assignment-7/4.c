#include <stdio.h>

int main()
{
    long int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int rev=0;
    while(n!=0){
        int mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }

    while(rev!=0){
        int mod=rev%10;
        switch(mod)
        {
            case 1:
            printf("One ");
            break;

            case 2:
            printf("Two ");
            break;

            case 3:
            printf("Three ");
            break;

            case 4:
            printf("Four ");
            break;

            case 5:
            printf("Five ");
            break;

            case 6:
            printf("Six ");
            break;

            case 7:
            printf("Seven ");
            break;

            case 8:
            printf("Eight ");
            break;

            case 9:
            printf("Nine ");
            break;

            default:
            printf("Invalid choice");
        }
        rev=rev/10;
    }
    return 0;
}