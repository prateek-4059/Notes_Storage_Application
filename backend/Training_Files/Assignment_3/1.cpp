#include <bits/stdc++.h>
using namespace std;

class Area{
    private:
    int length,breadth;

    public:
    Area(int l,int b){
        length=l;
        breadth=b;
    }

    int getarea(){
        return length*breadth; 
    }
};

int main()
{
    int l,b;
    cout<<"Enter the length and breadth of rectangle "<<endl;
    cin>>l>>b;
    Area a(l,b);
    cout<<a.getarea();
}