#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d %d",&a,&b);
    int min=a<b?a:b;
    int gcd;

    while(1){
        if(a%min==0 && b%min==0){
            gcd=min;
            break;
        }
        min--;
    }
    printf("The GCD of %d and %d is %d",a,b,gcd);

}