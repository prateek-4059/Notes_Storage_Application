#include <iostream>
using namespace std;

int multiply(int x,int y){
    if(x==0 || y==0){
        return 0;
    }
    return x+multiply(x,y-1);
}

int main()
{
    int x,y;
    cout<<"Input the first number: ";
    cin>>x;
    cout<<"Input the second number: ";
    cin>>y;

    int res=multiply(x,y);
    cout<<"Product of "<<x<<" and "<<y<<": "<<res<<endl;

    return 0;
}