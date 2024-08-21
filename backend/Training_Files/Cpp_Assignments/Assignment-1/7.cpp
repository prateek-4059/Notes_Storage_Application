#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char c;
    cout<<"Enter any two numbers "<<endl;
    cin>>a>>b;
    cout<<"Enter the operation "<<endl;
    cin>>c;
    int res=0;
    switch(c){
        case '+':
        res=a+b;
        cout<<"The addition of "<<a<<" and "<<b<<" is "<<res;
        break;

        case '-':
        res=a-b;
        cout<<"The subtraction of "<<a<<" and "<<b<<" is "<<res;
        break;

        case '*':
        res=a*b;
        cout<<"The multiplication of "<<a<<" and "<<b<<" is "<<res;
        break;

        case '/':
        res=a/b;
        cout<<"The division of "<<a<<" and "<<b<<" is "<<res;
        break;

        default:
        cout<<"Invalid operation"<<endl;
    }
    return 0;
}