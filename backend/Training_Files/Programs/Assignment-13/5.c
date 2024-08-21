#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    scanf("%s",&s1);

    strupr(s1);

    printf("String is %s",s1);
}