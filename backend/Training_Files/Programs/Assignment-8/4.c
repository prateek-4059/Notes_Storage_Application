#include <Stdio.h>

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        int mod=n%10;
        sum+=mod;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}