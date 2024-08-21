#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    scanf("%s",&s1);

    char s2[100];
    strcpy(s2,s1);

    strrev(s2);

    if(strcmp(s1,s2)==0){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
}