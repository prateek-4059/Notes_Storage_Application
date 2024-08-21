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

    printf("The transpose of matrix :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}