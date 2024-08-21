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

    int getbalance(){
        return balance;
    }
};

int main()
{
    long int a;
    int b,ch;
    cout<<"Enter account number and balance "<<endl;
    cin>>a>>b;
    ATM atm(a,b);
    while(ch!=4){
        cout<<"Enter your choice"<<endl;
        cout<<"1. Deposit\n2.Withdraw\n3.Balance\n4.Exit"<<endl;
        cin>>ch;

        switch(ch){
            case 1:
            int deposit;
            cout<<"Enter the amount you want to deposit "<<endl;                                                                                                                                                                                                                                            
            cin>>deposit;
            cout<<"Current Balance is "<<atm.deposit(deposit)<<endl;
            break;

            case 2:
            int withdraw;
            cout<<"Enter the amount you want to withdraw "<<endl;
            cin>>withdraw;
            cout<<"Available Balance is "<<atm.withdrawal(withdraw)<<endl;
            break;

            case 3:
            cout<<"Current balance is "<<atm.getbalance()<<endl;
            break;
        }
    }

    return 0;
}