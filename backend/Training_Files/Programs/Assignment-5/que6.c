#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    switch(n>0)
    {
        case 1:
        printf("Positive\n");
        break;

        case 0:
        switch(n<0){
            case 1:
            printf("Negative\n");
            break;

            case 0:
            printf("Zero\n");
            break;
        }
        break;
    }
}