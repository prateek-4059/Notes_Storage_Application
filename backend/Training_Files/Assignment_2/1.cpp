#include <bits/stdc++.h>
using namespace std;

class Info{
    private:
        string name;
        int age;
        string city;
        int pincode;

    public:
        void input();
        void display();
};

void Info::input()
{
    cout<<"Enter the name: ";
    getline(cin,name);
    cout<<"Enter the age: ";
    cin>>age;
    getchar();
    cout<<"Enter city: ";
    getline(cin,city);
    cout<<"Enter pincode: ";
    cin>>pincode;
}

void Info::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Pincode: "<<pincode<<endl;
}

int main()
{
    Info i;
    i.input();
    i.display();
}