#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    int prod=1;
    while(n!=0){
        int mod=n%10;
        prod=prod*mod;
        n=n/10;
    }
    printf("%d",prod);
}