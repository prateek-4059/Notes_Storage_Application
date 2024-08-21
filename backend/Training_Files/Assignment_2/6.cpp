#include <bits/stdc++.h>
using namespace std;

class ATM{
    private:
    long int account_no;
    int balance;

    public:
    ATM(long int a,int b){
        account_no=a;
        balance=b;
    }
    int deposit(int money){
        balance=balance+money;
        return balance;
    }
    int withdrawal(int money){
        if(money>balance){
            cout<<"Not enough balance"<<endl;
            return -1;
        }
        else{
            balance=balance-money;
            return balance;
        }
    }
};

int main()
{
    long int a;
    int b;
    cout<<"Enter account number and balance "<<endl;
    cin>>a>>b;
    ATM atm(a,b);
    int deposit;
    cout<<"Enter the amount you want to deposit "<<endl;
    cin>>deposit;
    cout<<"Current Balance is "<<atm.deposit(deposit)<<endl;
    int withdraw;
    cout<<"Enter the amount you want to withdraw "<<endl;
    cin>>withdraw;
    cout<<"Available Balance is "<<atm.withdrawal(withdraw)<<endl;
}