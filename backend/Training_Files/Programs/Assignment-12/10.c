#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter the matrix elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int transpose[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            transpose[j][i]=mat[i][j];
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=transpose[i][j]){
                printf("Not a symmetric matrix");
                break;
            }
        }
    }
    if(i==n && j==n){
        printf("Symmetric matrix");
    }
    return 0;
} 