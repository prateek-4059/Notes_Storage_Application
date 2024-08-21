#include <bits/stdc++.h>
using namespace std;

class Calculator{
    private:
        int num1,num2;

    public:
        Calculator(int n1,int n2){
            num1=n1;
            num2=n2;
        }
        void addition(){
            int res=num1+num2;
            cout<<res<<endl;
        }
        void subtraction(){
            int res=num1-num2;
            cout<<res<<endl;
        }
        void multiplication(){
            int res=num1*num2;
            cout<<res<<endl;
        }
        void division(){
            int res=num1/num2;
            cout<<res<<endl;
        }
};

int main()
{
    int n1,n2;
    cout<<"Enter any two numbers "<<endl;
    cin>>n1>>n2;
    Calculator calc(n1,n2);
    calc.addition();
    calc.subtraction();
    calc.multiplication();
    calc.division();
}