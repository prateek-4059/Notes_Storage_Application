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
    temp=n;
    int new_no=0;
    while(temp!=0){
        int mod=temp%10;
        new_no=new_no+pow(mod,no_of_digits);
        temp=temp/10;
    }

    if(new_no==n){
        printf("%d is an armstrong number\n",n);
    }
    else{
        printf("%d is not an armstrong number\n",n);
    }
}