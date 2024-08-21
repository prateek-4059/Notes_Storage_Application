#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter any two numbers:\n");
    scanf("%d %d",&a,&b);

    int max=a>b?a:b;
    while(1){
        if(max%a==0 && max%b==0){
            printf("%d\n",max);
            break;
        }
        max++;
    }

    return 0;
}