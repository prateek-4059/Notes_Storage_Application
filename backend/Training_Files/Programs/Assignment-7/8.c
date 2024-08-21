#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);

    long long int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    printf("The answer is %lld",ans);
}