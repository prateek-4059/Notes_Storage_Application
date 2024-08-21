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

    printf("The lower triangular matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>=j)
            {
                printf("%d ",mat[i][j]);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
}