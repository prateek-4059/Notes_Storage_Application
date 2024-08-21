#include <iostream>
using namespace std;

int main()
{
    float a,b,c,d,e;
    cout<<"Enter marks of 5 subjects"<<endl;
    cin>>a>>b>>c>>d>>e;

    int total=(a+b+c+d+e);
    float per=(a+b+c+d+e)/5;
    cout<<"The total and percentage of subjects are "<<total<<" "<<per<<endl;
}