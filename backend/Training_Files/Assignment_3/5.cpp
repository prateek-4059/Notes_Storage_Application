#include <bits/stdc++.h>
using namespace std;

class Mobile{
    public:
    string brand;
    int price;
    string color;

    void setdetails(string b,int p,string c){
        brand=b;
        price=p;
        color=c;
    }
    void display();
};

void Mobile::display(){
    cout<<"Brand is "<<brand<<endl;
    cout<<"Price is "<<price<<endl;
    cout<<"Color is "<<color<<endl;
}

int main()
{
    Mobile m[5];
    for(int i=0;i<5;i++){
        string b,c;
        int p;
        cout<<"Enter the brand"<<endl;
        getline(cin,b);
        cout<<"Enter the price"<<endl;
        cin>>p;
        getchar();
        cout<<"Enter the color"<<endl;
        getline(cin,c);
        m[i].setdetails(b,p,c);
        m[i].display();
    }
    int cnt=0;
    for(int i=0;i<5;i++){
        int price=m[i].price;
        int cnt=0;
        if(price>5000){
            cnt++;
        }
    }
    cout<<"Total number of mobiles whose price is greater than 5000 are "<<cnt<<endl;
    for(int i=0;i<5;i++){
        if(m[i].price>=1000 && m[i].price<=10000){
            cout<<"Brand is "<<m[i].brand<<endl;
            cout<<"Price is "<<m[i].price<<endl;
            cout<<"Color is "<<m[i].color<<endl;
        }
    }
}