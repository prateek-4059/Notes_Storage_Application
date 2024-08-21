#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    int no_of_digits=0;
    while(temp!=0){
        int mod=temp%10;
        no_of_digits++;
        temp=temp/10;
    }

    int last=n%10;
    n=n/pow(10,no_of_digits-1);
    int first=n%10;

    printf("The first is %d and last is %d",first,last);
}