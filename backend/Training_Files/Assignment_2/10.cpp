#include <bits/stdc++.h>
using namespace std;

class Time{
    int hour;
    int min;
    int sec;

    public:
    Time(int h,int m,int s){
        hour=h;
        min=m;
        sec=s;
    }

    void displaytime(){
        cout<<"Time is "<<endl;
        cout<<hour<<" : "<<min<<" : "<<sec<<endl;
        cout<<(hour*60*60)+(min*60)+sec<<endl;
    }
};

int main()
{
    int h,m,s;
    cout<<"Enter the hour, minutes and seconds"<<endl;
    cin>>h>>m>>s;
    Time t(h,m,s);
    t.displaytime();
}