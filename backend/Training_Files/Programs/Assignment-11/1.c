#include <stdio.h>

int main()
{
    int n,d,i,j;
    printf("Enter size of array:\n");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the number of times rotate:\n");
    scanf("%d",&d);

    d=d%n;

    for(int i=0;i<d;i++){
        
    }
}