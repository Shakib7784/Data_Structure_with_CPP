#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
public:
    string account_name;
    string address;
    int age;
    int account_number;
protected:
    int balance;
private:
    string password;
    public:
    BankAccount(string acount_name, string address, int age, string password)
    {
        this->account_name=account_name;
        this->address=address;
        this->age=age;
        this->password=password;
        this->balance=0;
       account_number=rand()%1000000000;
        cout<<"Your account number is: "<<account_number<<endl;

    }
    int show_balance(string password)
    {
        if(this->password==password)
        {
            return this->balance;
        }
        else
        {
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if(amount<0)
        {
            cout<<"Invalid Amount"<<endl;
            return;
        }
        if(this->password==password)
        {
            this->balance=balance+amount;
            cout<<"Add money successful"<<endl;
        }
        else
        {
            cout<<"Password didn't match"<<endl;
        }
    }
    void Deposit(string password,int money)
    {
         if(money<0)
        {
            cout<<"Invalid Amount"<<endl;
            return;
        }
        if(this->balance<money)
        {
            cout<<"Insufficient balance"<<endl;
            return;
        }
        if(this->password==password)
        {
            this->balance=balance-money;
            cout<<"Deposit successful"<<endl;
        }
    }
    friend class MyCash;
};
class MyCash
{
protected:
    int balance;
public:
    MyCash()
    {
        this->balance=0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount)
    {
        if(amount<0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(myAccount->balance<amount)
        {
            cout<<"Insufficient Balance"<<endl;
            return;
        }
        if(myAccount->password==password)
        {
            this->balance=balance+amount;
            myAccount->balance-=amount;
            cout<<"Add money from bank is successful"<<endl;
        }
        else
        {
            cout<<"Password didn't match";
        }
    }
    int show_balance()
    {
        return balance;
    }
};
BankAccount* create_account()
{
    string account_holder, password, address;
    int age;
    cout<<"Create Account"<<endl;
    cin>>account_holder>> address>>age>>password;
   BankAccount *myAccount = new BankAccount (account_holder,address,age,password);
   return myAccount;
}
void Add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout<<"Add Money"<<endl;
    cin>>password>>amount;
    myAccount->add_money(password,amount);
     cout<<"Your balance is: "<<myAccount->show_balance("abc")<<endl;
}
void deposit(BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Deposit"<<endl;
    cin>>password>>money;
    myAccount->Deposit(password,money);
    cout<<"Your balance is after deposite: "<<myAccount->show_balance("abc")<<endl;

}
void Add_money_from_bank(MyCash *cash, BankAccount *myAccount)
{
    string password;
    int money;
    cout<<"Add money from Bank: "<<endl;
    cin>>password>>money;
    cash->add_money_from_bank(myAccount, password,money);
    cout<<"Your balance is after add money from bank: "<<myAccount->show_balance("abc")<<endl;
    cout<<"Your balance on Mycash: "<<cash->show_balance()<<endl;

}
int main()
{

    BankAccount *myAccount =  create_account();
     MyCash *cash = new MyCash();
    while(true)
    {
        cout<<"Select Option:"<<endl;
        cout<<"1. Add money to Bank"<<endl;
        cout<<"2. Deposit Money to Bank"<<endl;
        cout<<"3. Add Money to MyCAsh from Bank"<<endl;
        int option;
        cin>>option;
        if(option ==1)
        {
             Add_money(myAccount);
        }
        else if(option==2)
        {
             deposit(myAccount);
        }
        else if(option==3)
        {
            Add_money_from_bank(cash, myAccount);
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }







    return 0;
}
