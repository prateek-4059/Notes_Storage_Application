#include <stdio.h>

int main()
{
    long int n;
    printf("Enter a number:\n");
    scanf("%ld",&n);
    int freq[10]={0};
    while(n!=0)
    {
        int mod=n%10;
        freq[mod]++;
        n=n/10;
    }

    printf("The frequency of elements are:\n");
    for(int i=0;i<10;i++){
        printf("%d --> %d\n",i,freq[i]);
    }
    return 0;
}