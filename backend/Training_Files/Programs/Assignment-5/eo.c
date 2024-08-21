#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    switch(n%2==1)
    {
        case 1:
        printf("%d is odd number\n",n);
        break;

        case 0:
        printf("%d is even number\n",n);
        break;
    }
}