#include <stdio.h>

int main()
{
    int i=1;
    while(i<=100){
        if(i%2==0){
            printf("%d\n",i);
        }
        i++;
    }

    int j=1;
    while(j<=100){
        if(j%2!=0){
            printf("%d\n",j);
        }
        j++;
    }
    return 0;
}