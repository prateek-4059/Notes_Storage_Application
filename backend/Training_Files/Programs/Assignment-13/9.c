#include <stdio.h>
#include <string.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    gets(s1);

    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    int cnt=0;
    for(int i=0;i<strlen(s1);i++){
        if(s1[i]==a){
            cnt++;
        }
    }

    printf("The occurence of %c in %s is %d",a,s1,cnt);
}