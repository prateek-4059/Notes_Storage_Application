#include <bits/stdc++.h>
using namespace std;

class Store{
    int a,b;
    public:
        void get()
        {
            cout<<"\nEnter no. of apples: ";
            cin>>a;
            cout<<"\nEnter no. of banana: ";
            cin>>b;
        }
        void show()
        {
            cout<<"\nTotal apple = "<<a;
            cout<<"\nTotal banana = "<<b;
        }
        Store operator +(Store &s2){
            Store tempRes;
            tempRes.a=a+s2.a;
            tempRes.b=b+s2.b;
            return(tempRes);
        }
        Store operator +(int n){
            Store tempRes;
            tempRes.a= a + n;
            tempRes.b= b + n;
            return(tempRes);
        }
};
int main()
{
    Store s1,s2,s3;
    cout<<"\n\n Enter Data of Store-1 : ";
    s1.get();
    cout<<"\n\n Enter Data of Store-2 : ";
    s2.get();
    s3=s1+s2;
    cout<<"\n\n Data of Store-1 : ";
    s1.show();
    cout<<"\n\n Data of Store-2 : ";
    s2.show();
    cout<<"\n\n Data of Store-3 : ";
    s3.show();

    Store s4=s1+5;
    cout<<"\n\n Data of Store-4 : ";
    s4.show();
    cout<<"\n\n total units = "<<total;
}