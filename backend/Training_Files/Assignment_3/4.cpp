#include <bits/stdc++.h>
using namespace std;

class Mobile{
    string brand;
    int price;
    string color;
    int width;
    int height;

    public:
    Mobile(string b,int p,string c,int w,int h){
        brand=b;
        price=p;
        color=c;
        width=w;
        height=h;
    }
    void display();
};

void Mobile::display(){
    cout<<"Brand is "<<brand<<endl;
    cout<<"Price is "<<price<<endl;
    cout<<"Color is "<<color<<endl;
    cout<<"Width is "<<width<<endl;
    cout<<"Height is "<<height<<endl;
}

int main()
{
    string b,c;
    int p,w,h;
    cout<<"Enter the brand"<<endl;
    getline(cin,b);
    cout<<"Enter the price"<<endl;
    cin>>p;
    getchar();
    cout<<"Enter the color"<<endl;
    getline(cin,c);
    cout<<"Enter the width"<<endl;
    cin>>w;
    cout<<"Enter the height"<<endl;
    cin>>h;

    Mobile m(b,p,c,w,h);
    m.display();
}