#include <bits/stdc++.h>
using namespace std;

class abc{
    int num;
public:
    abc(){
        num=0;
        cout<<"Default Constructor";
    }
    abc(int n){
        cout<<"Parameterized Constructor";
        num=n;
    }
};

int main()
{
    abc o1;
    abc o2(50);
}