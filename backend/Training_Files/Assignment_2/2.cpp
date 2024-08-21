#include <bits/stdc++.h>
using namespace std;

class Area{
    private:
    int length,breadth;

    public:
    void setDim(int l,int b){
        this->length=l;
        this->breadth=b;
    }

    int getarea(){
        return length*breadth; 
    }
};

int main()
{
    Area a;
    int l,b;
    cout<<"Enter the length and breadth of rectangle "<<endl;
    cin>>l>>b;
    a.setDim(l,b);
    cout<<a.getarea();
}