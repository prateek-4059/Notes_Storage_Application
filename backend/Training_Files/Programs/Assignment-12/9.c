#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Enter value of n: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter matrix elements:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    int count_non_zeros=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=0){
                count_non_zeros++;
            }
        }
    }
    int zeros=(n*n)-count_non_zeros;
    if(zeros>count_non_zeros){
        printf("Sparse matrix");
    }
    else{
        printf("Not a sparse matrix");
    }
}