/* 2,3
Define a class to represent a bank account. Include the following members:
*/

#include<iostream>
using namespace std;
class bank{
private:
    int acc_no,balance;
    char type;
public:
    void get_detail(int no,int bal,char ty){
        acc_no=no;
        balance=bal;
        ty=type;
    }
    int deposite(int bal_d){
        balance=balance+bal_d;
        return balance;
    }
    int withdraw(int bal_w){
        if(bal_w>balance){
            cout<<"not sufficient balance";
        }
        else{
            balance=balance-bal_w;
        }
        return balance;
    }
};
int main(){
    bank b;
    int acno,bala,amount;
    char typee,choice;
    cout<<"enter account no:";
    cin>>acno;
    cout<<"\nenter balance:";
    cin>>bala;
    cout<<"\nenter account type:";
    cin>>typee;
    cout<<"\nenter amount:";
    cin>>amount;
    cout<<"\nenter what you want(withdraw/deposite):";
    cin>>choice;
    b.get_detail(acno,bala,typee);
    if(choice=='w'){
        cout<<"balance after withdraw:"<<b.withdraw(amount);
    }
    else if(choice=='d'){
        cout<<"balance after deposite:"<<b.deposite(amount);
    }
    else{
        cout<<"wrong choice";
    }
}
