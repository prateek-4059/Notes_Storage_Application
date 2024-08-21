#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int ans=0;
    while(n!=0){
        int mod=n%10;
        ans=ans*10+mod;
        n=n/10;
    }
    printf("The reverse of number is %d\n",ans);
}