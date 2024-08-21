#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int temp=n;
    int rev=0;
    while(n!=0)
    {
        int mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }

    if(temp==rev){
        printf("%d is a palindrome\n",temp);
    }
    else{
        printf("%d is not a palindrome\n",temp);
    }
    return 0;
}