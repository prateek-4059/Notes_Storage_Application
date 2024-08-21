#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers"<<endl;
    cin>>a>>b>>c;

    int total=a+b+c;
    float avg=total/3.0;

    cout<<"Total is "<<total<<endl;
    cout<<"Average is "<<avg;
}