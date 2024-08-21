#include <stdio.h>

int main()
{
    printf("Enter the value of n:\n");
    int n;
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("The sum is %d",sum);
}