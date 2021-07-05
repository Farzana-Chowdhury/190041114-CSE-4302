#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
private:
    int accountNo;
    string holder;
    bool accountType;
    float Balance;
    float minBalance;

public:
    BankAccount(int a, string b, bool  c, float d, float e)
    {
        accountNo = a;
        holder = b;
        accountType = c;
        Balance = d;
        minBalance = e;
    }
    void showInfo()
    {
        cout<<"Account Number: "<<accountNo<<endl;
        cout<<"Account Holder : "<<holder<<endl;
        if(accountType==0)
            cout<<"Account Type : Current"<<endl;
        else
            cout<<"Account Type : Savings"<<endl;
        cout<<"Current Balance :"<<Balance<<endl;
        cout<<"Minimum Balance : "<<minBalance<<endl;
    }
    void showBalance()
    {
        cout<<"Current Balance is:"<<Balance<<endl;
    }
    void deposit(float a)
    {
        Balance+=a;

    }
    void withdraw(float a)
    {
        if(Balance-a<minBalance)
            cout<<"Withdrawal Failed!"<<endl;
        else
            Balance-=a;
    }
    void giveInterest(float a=3)
    {
        float i;
        i=Balance*(a/100);
        i-=i*.1;
        Balance+=i;
        cout<<"Balance After Interest : "<<Balance<<endl;
    }

    ~BankAccount()
    {
        cout<<"\nAccount of "<<holder<<" with account no "<<accountNo<<" is destroyed with a balance BDT "<<Balance<<endl;

    }

};

int main()
{
    BankAccount p(5679, "Jaman Ahmed", 1, 2000, 500);
    p.showInfo();
    p.showBalance();
    p.deposit(450);
    p.withdraw(2000);
    p.giveInterest();

    return 0;
}
