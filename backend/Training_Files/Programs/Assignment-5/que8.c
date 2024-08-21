#include <stdio.h>

int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);

    char ch;
    printf("Enter the operation:");
    scanf("%c",&ch);

    switch(ch)
    {
        case '+':
        int res=num1+num2;
        printf("The result is %d",res);
        break;

        case '-':
        printf("The result is %d",num1-num2);
        break;

        case '*':
        printf("The result is %d",num1*num2);
        break;

        case '/':
        printf("The result is %d",num1/num2);
        break;

        default:
        printf("Invalid choice");
    }
    return 0;
}