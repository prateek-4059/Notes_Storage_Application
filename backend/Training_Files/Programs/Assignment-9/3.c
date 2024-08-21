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
    int maxi=INT_MIN,second_maxi=INT_MIN;
    printf("Array elements are:\n");
    for(int i=0;i<n;i++){
        if(maxi<arr[i]){
            second_maxi=maxi;
            maxi=arr[i];
        }
        if(second_maxi<arr[i] && arr[i]!=maxi){
            second_maxi=arr[i];
        }
    }

    printf("Second Maximum = %d",second_maxi);

}