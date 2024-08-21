#include <bits/stdc++.h>
using namespace std;

class Circle{
    private:
    int r;

    public:
    Circle(int radius){             
        r=radius;
    }

    int getarea(){
        return 3.14*r*r;
    }
};
int main()
{
    int r;
    cout<<"Enter the radius"<<endl;
    cin>>r;

    Circle c(r); 
    cout<<c.getarea()<<endl;
    return 0;
}