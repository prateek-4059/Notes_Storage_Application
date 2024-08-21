#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    char s1[100];
    printf("Enter a string: ");
    gets(s1);

    int hash[26]={0};
    for(int i=0;i<strlen(s1);i++){
        hash[s1[i]]++;
    }

    int ind=-1;
    int maxi=INT_MIN;
    for(int i=0;i<26;i++){
        if(hash[i]>maxi){
            maxi=hash[i];
            ind=i;
        }
    }

    printf("The maximum occurence in %s is %c",s1,ind+'a');
}