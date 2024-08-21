#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);

    char c;
    printf("Enter arithmetic operation:\n");
    scanf("%c",&c);
    int res=0;
    switch(c)
    {
        case '+':
        res=a+b;
        printf("The result is %d",res);
        break;

        case '-':
        res=a-b;
        printf("The result is %d",res);
        break;

        case '*':
        res=a*b;
        printf("The result is %d",res);
        break;

        case '/':
        res=a/b;
        printf("The result is %d",res);
        break;

        default:
        printf("Invalid Choice\n");
    }    
    return 0;
}