#include <stdio.h>

int main()
{
    int i,j,n,sum=0;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter the matrix elements:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    printf("The matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<n;i++){
        int temp=mat[i][i];
        mat[i][i]=mat[i][n-i-1];
        mat[i][n-i-1]=temp;
    }
    printf("After interchange matrix is :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j] );
        }
        printf("\n");
    }
}