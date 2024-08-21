#include <stdio.h>
int isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    int sum=0;

    for(int i=1;i<=n;i++){
        if(isprime(i)){
            sum+=i;
            printf("%d ",i);
        }
    }
    printf("\n");
    printf("Sum is %d",sum);
}