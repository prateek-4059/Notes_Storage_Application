#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int empcode;
    int basic;

    public:
    Employee(int eid,int b){
        empcode=eid;
        basic=b;
    }
    float netsalary(){
        float da=0.17*basic;
        float hra=0.1*basic;
        int ta=500;
        float tax;
        if(basic>50000){
            tax=0.05*basic;
        }
        else if(basic<=50000){
            tax=0;
        }

        float net=(basic+da+hra+ta)-tax;
        return net;
    }
};

int main()
{
    int eid,b;
    cout<<"Enter the Employee id and basic salary "<<endl;
    cin>>eid>>b;
    Employee e(eid,b);
    cout<<"Net Salary is "<<e.netsalary()<<endl;   
}