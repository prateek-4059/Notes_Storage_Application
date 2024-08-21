#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100],brr[100];
    printf("Enter first string:\n");
    scanf("%s",arr);

    printf("Enter another string:\n");
    scanf("%s",brr);

    strcat(arr,brr);
    printf("Concatenated string is %s",arr);
}