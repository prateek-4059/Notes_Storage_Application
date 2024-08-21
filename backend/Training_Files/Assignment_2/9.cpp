#include <bits/stdc++.h>
using namespace std;

class Employee{
    private:
    int empcode,basic;

    public:
    void setdetails(int empid,int b){
        empcode=empid;
        basic=b;
    }
    float netsalary(){

            float da=1.74*basic;
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
    Employee e[5];
    for(int i=0;i<5;i++){
        int empid,b;
        cout<<"Enter the emp id and basic salary of employee "<<i<<endl;
        cin>>empid>>b;
        e[i].setdetails(empid,b);
        cout<<"The net salary of employee "<<i<<" is "<<e[i].netsalary()<<endl;
    }
}