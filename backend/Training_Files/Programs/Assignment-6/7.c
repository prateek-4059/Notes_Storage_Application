#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int cnt=0;
    while(n!=0){
        int mod=n%10;
        cnt++;
        n=n/10;
    }

    printf("The number of digits are %d",cnt);
}