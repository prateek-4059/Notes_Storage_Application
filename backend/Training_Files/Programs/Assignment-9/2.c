#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxi=INT_MIN,mini=INT_MAX;
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            maxi=arr[i];
        }
        if(mini>arr[i]){
            mini=arr[i];
        }
    }

    printf("Maximum = %d Minimum = %d",maxi,mini);

}