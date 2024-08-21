#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        sum+=arr[i];
        printf("%d ",arr[i]);
    }

    printf("Sum = %d",sum);
}