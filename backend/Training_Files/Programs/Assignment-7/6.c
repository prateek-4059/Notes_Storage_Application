#include <stdio.h>

int main()
{
    long long int n;
    int x;
    printf("Enter the number:\n");
    scanf("%d",&n);

    printf("Enter the power:\n");
    scanf("%d",&x);
    int temp=1;
    for(int i=1;i<=x;i++){
        temp=temp*n;
    }
    printf("The result is %lld\n",temp);
    return 0;
}