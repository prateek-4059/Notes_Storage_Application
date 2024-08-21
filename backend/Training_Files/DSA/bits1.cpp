#include <iostream>
#include <bitset>
using namespace std;

int main()
{
int x=19887;
    int y=x&(x-1);

    cout<<"a="<<bitset<16>(x)<<endl;
    cout<<"b="<<bitset<16>(x-1)<<endl;
    cout<<"c="<<bitset<16>(y)<<endl;
}