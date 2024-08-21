#include <iostream>
#include <string>
using namespace std;

bool ispalindrome(const string &text,int st,int end)
{
     if(st>=end){
         return true;
     }
     return (text[st]==text[end]) && ispalindrome(text,st+1,end-1);
}

int main()
{
 string text;
 cout<<"Enter a string: " ;
 cin>>text;
 int n=text.length();
 int st=0;
 int end=n-1;   
 cout<<ispalindrome(text,st,end)<<endl;
}
