#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    int no_of_digits=0;
    while(temp!=0)
    {
        int mod=temp%10;
        no_of_digits++;
        temp=temp/10;
    }

    int last=n%10;
    int first=n/pow(10,no_of_digits-1);

    int third=first;
    first=last;
    last=third;

    n=n/10;
    int new_no=first*pow(10,no_of_digits-1)+(n % pow(10,no_of_digits-2))+last;

    printf("%d",new_no);      
}
