#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter the size of matrix: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter matrix elements :\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }


    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mat[i][j]==0){
                printf("Not a Identity Matrix");
                break;
            }
        }
    }
    if(i==n && j==n){
        printf("Identity Matrix");
    }
    return 0;
}