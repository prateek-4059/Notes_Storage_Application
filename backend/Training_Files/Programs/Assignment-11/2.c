#include <stdio.h>
#define SIZE 3  
int main()
{
    int mat[SIZE][SIZE];

    printf("Enter the matrix elements:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }

    ;
}