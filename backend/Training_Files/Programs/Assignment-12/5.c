#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int mat[n][n];

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int sum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j)
            {
                sum+=mat[i][j];
            }
        }
    }
    printf("The sum of lower triangular matrix is %d",sum);
}