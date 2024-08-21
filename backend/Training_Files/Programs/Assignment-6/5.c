#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int e_sum=0;
    int o_sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            e_sum+=i;
        }
        else{
            o_sum+=i;
        }
    }
    printf("The even numbers sum is %d\n",e_sum);
    printf("The odd numbers sum is %d\n",o_sum);
}