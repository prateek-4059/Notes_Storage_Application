#include <stdio.h>

int main()
{
    int i,j,n,sum=0;
    printf("Enter the size of the matrix: ");
    scanf("%d",&n);

    int mat[n][n];
    printf("Enter matrix elements :\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=mat[i][j];
            }
        }
    }

    printf("The sum of diagonal elements is %d",sum);
}